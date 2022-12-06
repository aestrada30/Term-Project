#include "Astar.h"
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>





int main( int argc, char* argv[] ) {
    map m;
    //end point
    point s, e( 26, 29 );
    aStar as;

    if( as.search( s, e, m ) ) {
        std::list<point> path;
        int c = as.path( path );
        //go through map
        for( int y = 0; y < 31; y++ ) {
            for( int x = 0; x < 28; x++ ) {
                //define where the walls are as well as out of bounds
                if( x < 0 || y < 0 || x > 28 || y > 31 || m( x, y ) == 'C' || m( x, y ) == 'H' || m( x, y ) == 'V' || m( x, y ) == '1' || m( x, y ) == '2' || m( x, y ) == '3' || m( x, y ) == '4')
                    std::cout << char(0xdb);
                else {
                    if( std::find( path.begin(), path.end(), point( x, y ) )!= path.end() )
                        std::cout << "+";
                    else std::cout << ".";
                }
            }
            std::cout << "\n";
        }

        std::list<point>::iterator it = path.begin();
        std::advance(it, 1);
        
        std::cout << (*it).x;
        
        

        


        std::cout << "\nPath cost " << c << ": ";
        
        
        
        int xt = 0;
        int xt2 = 0;
        int yt = 0;
        int yt2 = 0;
        
        
        
        

        xt =(*path.begin()).x;
        yt = (*path.begin()).y;
        
        for( std::list<point>::iterator i = path.begin(); i != path.end(); i++ ) {
            std::cout<< "(" << ( *i ).x << ", " << ( *i ).y << ") ";
            
            
        //std::cout << xt << " ";
            
        //    std::cout << (( *i ).x  - 1) << " ";
            
            
        
            
        
             if (( *i ).x  - 1 == xt ) {
            //    std::cout << "moved right";
                xt = (*i).x;
            }
            
            
            else if ((*i).x + 1 == xt) {
            //    std::cout << "moved left";
                xt = (*i).x;
            }
            
            else if ((*i).y + 1 == yt) {
                //std::cout << "moved up";
                yt = (*i).y;
            }
            
            else if ((*i).y - 1 == yt) {
                //std::cout << "moved down";
                yt = (*i).y;
            }
            
            
            
        }
        std::cout << "\n\n";
        std::cout << "Directions ";
        xt2 =(*path.begin()).x;
        yt2 = (*path.begin()).y;
        int counter = 0;
        for( std::list<point>::iterator i = path.begin(); i != path.end(); i++ ) {
            
            if (counter != 0) {
                std::cout << counter << ") ";
            }    
            
            if (( *i ).x  - 1 == xt2 ) {
                std::cout << "moved right ";
                xt2 = (*i).x;
            }
            
            
            else if ((*i).x + 1 == xt2) {
                std::cout << "moved left ";
                xt2 = (*i).x;
            }
            
            else if ((*i).y + 1 == yt2) {
                std::cout << "moved up ";
                yt2 = (*i).y;
            }
            
            else if ((*i).y - 1 == yt2) {
                std::cout << "moved down ";
                yt2 = (*i).y;
            }
            
            counter++;
            
        }

        
        
        
        
    }
    std::cout << "\n\n";
    
    
    return 0;
}
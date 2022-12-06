#include <list>
#include <algorithm>
#include <iostream>
#include "Astar.h"

int main(int argc, char* argv[]) {
    map m;
    point s, e(26, 29); //  end point of map: x28 y31
    //  point s, e(static_cast<int>(floor(pacmanX / squareSize)), static_cast<int>(floor(pacmanY / squareSize)));
    aStar as;

    if (as.search(s, e, m)) {
        std::list<point> path;
        int c = as.path(path);
        for (int y = 0; y < 31; y++) {
            for (int x = 0; x < 28; x++) {
                if (x < 0 || y < 0 || x > 28 || y > 31 || m(x, y) == 'H' || m(x, y) == 'V' || m(x, y) == '1'
                    || m(x, y) == '2' || m(x, y) == '3' || m(x, y) == '4')
                    std::cout << char(0xdb);
                else {
                    if (std::find(path.begin(), path.end(), point(x, y)) != path.end())
                        std::cout << "x";
                    else std::cout << ".";
                }
            }
            std::cout << "\n";
        }

        std::cout << "\nPath cost " << c << ": ";
        for (std::list<point>::iterator i = path.begin(); i != path.end(); i++) {
            std::cout << "(" << (*i).x << ", " << (*i).y << ") ";
        }
    }
    std::cout << "\n\n";
    return 0;
}

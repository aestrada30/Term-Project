# Term-Project
### A* Search Algorithm
### Group Members:
  Alex Estrada, Kyle Nadeau, Wes Hardesky
  
### Implementation
In this project we created the base game of PacMan where each ghost has been coded to move randomly around the map. We then modified the game so that one of the ghosts behaves independently from the other using the A* search algorithm.

### How does A* Search work?
The functionality of A* is to find the shortest path between a starting coordinate and an endgoal. This is done by using a heuristic value which estimates the distance between a point on the graph and the endpoint. In addition to the heuristic, it uses the distance measured between each point to the next. The image below shows the process of how the algorithm is calculated.


<img src="https://raw.githubusercontent.com/aestrada30/Term-Project/main/AStar.png" height="500" width="700" >
# Term-Project
### A* Search Algorithm
### Group Members:
  Alex Estrada, Kyle Nadeau, Wes Hardesky
  
### Implementation
In this project we created the base game of PacMan where each ghost has been coded to move randomly around the map. The game was then modified so that one of the ghosts behaves independently from the others using the A* search algorithm. This provides the ghost with the ability to find the shortest path to the last known location of PacMan and follow him until he is captured.

### How does A* Search work?
The functionality of A* is to find the shortest path between a starting coordinate and an end goal. This is done by using a heuristic value *h*, which estimates the distance between a point on the graph and the endpoint. In addition to the heuristic values, it uses the distance measured between each point to the next, *g*. After evaluating each path, the shortest path is recorded. The image below shows the process of how the algorithm is calculated.

<img src="https://raw.githubusercontent.com/aestrada30/Term-Project/main/AStar.png" height="500" width="700" >

### How to run on Windows Visual Studio 
In order to be able to run the base game begin by following the instructions on either the [64-bit](https://github.com/djperrone/glew_glut_64) or [32-bit](https://github.com/djperrone/opengl_glew_glut_starter) link.  Once the *csc406setup* project is setup, replace the code in the main file with the game code and run the program.

### How to run on Mac OS
1. First, make sure you have Xcode installed on your Mac with the necessary packages to run it.  You can install Xcode through the app store.
2. Create a directory in Xcode 
3. In the main project window, add *GLUT.framework* and *OpenGL.framework* to the Frameworks and Libraries in order to utilize *GLUT* and *OpenGL* in this directory.
4. Download each of the **.cpp** and **.h** files for Mac-OS and add them to your directory
5. Click on the Product tab at the top of the screen and select **Run** to launch the program

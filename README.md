# The Eulerian cycle/path search algorithm

This project contains a C++ implementation to check and find Eulerian paths and cycles in both directed and undirected graphs, as part of the Discrete Analysis course

## Overview

First, the program checks whether this graph is oriented. Next, we check the criterion for the degree of vertices and the connectivity of the graph, and if true, then the graph is Eulerian or semi-Eulerian. And in this case, the output function of the Eulerian cycle or path is started.

## Features

- Determines if a given graph has an Eulerian path or cycle.
- Can process both directed and undirected graphs.
- Outputs the Eulerian path or cycle if one exists.



## How to Compile

Ensure you have a C++ compiler installed. You can compile the code in the development environment or using  g++ on the command line:

```bash
g++ -o eulerian eulerian.cpp

# The Eulerian cycle/path search algorithm

This project contains a C++ implementation to check and find Eulerian paths and cycles in both directed and undirected graphs, as part of the Discrete Analysis course

## Overview

The program utilizes Depth-First Search (DFS) to determine the connectivity of a graph and calculates if an Eulerian path or an Eulerian cycle exists based on the degrees of vertices.

## Features

- Determines if a given graph has an Eulerian path or cycle.
- Can process both directed and undirected graphs.
- Outputs the Eulerian path or cycle if one exists.

## How to Compile

Ensure you have a C++ compiler installed. You can compile the code using g++ on the command line:

```bash
g++ -o eulerian eulerian.cpp

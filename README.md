 # An algorithm searching for Euler path or cycle

This project contains a C++ implementation of searching Euler path or cycle both in directed and in undirected graphs. The program is created as part of the "Discrete analysis" course by A.M. Raigorodskiy at Moscow Institute of Physics and Technology.

## Overview
The program accepts the number of vertices and the adjacency matrix of the graph or oriented graph as input. The program checks whether the adjacencey matrix is symmetric, i.e. whether we are given a graph or  an  oriented graph. Next, the program checks the conditions for the degrees of vertices and the connectivity of the graph. If the graph is connected and the ??condition is fulfilled, then the graph is an Euler graph or semi-Euler graph. ???And depending on this, the program outputs an Euler cycle or a path, respectively.

## Features

- Determines if a given graph has an Eulerian path or cycle.
- Outputs the Eulerian path or cycle if one exists.
- Can process both directed and undirected graphs.

## How to Use

**Follow the program's instructions**:
- Enter the number of vertices in the graph.
- Input the adjacency matrix of the graph.

The program will output one of the following results:
- "The Eulerian cycle: a sequence of vertices"
- "The Eulerian path: a sequence of vertices"
- "The graph is not Eulerian!"

---

## Input and Output Examples

### Example 1: Eulerian Way
**Input**:
```
Enter the number of vertices in the graph: 4
Enter the adjacency matrix for the graph:
0 1 1 0
1 0 1 1
1 1 0 1
0 1 1 0
```

**Output**:
```
The Eulerian way: -> 2 -> 3 -> 1 -> 2 -> 0 -> 1
```

---

### Example 2: Eulerian way
**Input**:
```
Enter the number of vertices in the graph: 4
Enter the adjacency matrix for the graph:
0 1 1 0
1 0 1 1
1 1 0 0
0 1 0 0
```

**Output**:
```
The Eulerian way: -> 3 -> 1 -> 2 -> 0 -> 1
```

---

### Example 3: Non-Eulerian Graph
**Input**:
```
Enter the number of vertices in the graph: 3
Enter the adjacency matrix for the graph:
0 1 1
0 0 0
0 0 0
```

**Output**:
```
The graph is not Eulerian!
```

---

# The Eulerian cycle/path search algorithm

This project contains a C++ implementation to check and find Eulerian paths and cycles in both directed and undirected graphs, as part of the Discrete Analysis course

## Overview

First, the program checks whether this graph is oriented. Next, we check the criterion for the degree of vertices and the connectivity of the graph, and if true, then the graph is Eulerian or semi-Eulerian. And in this case, the output function of the Eulerian cycle or path is started.

## Features

- Determines if a given graph has an Eulerian path or cycle.
- Can process both directed and undirected graphs.
- Outputs the Eulerian path or cycle if one exists.


## How to Use

 **Follow the program's instructions**:
   - Enter the number of vertices in the graph.
   - Input the adjacency matrix of the graph.

The program will output one of the following results:
- The Eulerian cycle: a sequence of vertices.
- The Eulerian path: a sequence of vertices.
- A message indicating that the graph is not Eulerian.

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

### Example 2: Eulerian ...
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
The Eulerian way: 
```

---

### Example 3: Non-Eulerian Graph
**Input**:
```
Enter the number of vertices in the graph: 3
Enter the adjacency matrix for the graph:
0 1 1
1 0 0
1 0 0
```

**Output**:
```
The graph is not Eulerian!
```

---

# The Eulerian cycle/path search algorithm

This project contains a C++ implementation of checking existence and finding Eulerian paths or cycle in both directed and undirected graphs. as part of the Discrete Analysis course. The program is created as part of the "Discrete analysis" course by A.M. Raigorodskiy at Moscow Institute of Physics and Technology.

## Overview

First, the program checks whether this graph is oriented. Next, the program checks the condition of criterion for the degree of vertices and the connectivity of the graph. If the graph is connected and the criterion is correct, then the graph is Euler graph or semiEuler graph. And depending on this, the program outputs an Euler cycle or a path, respectively (соответственно).

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

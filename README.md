 # An algorithm searching for Euler path or cycle

This project contains a C++ implementation of searching Euler path or cycle both in unoriented and in oriented graphs. The program is created as part of the "Discrete analysis" course by A.M. Raigorodskiy at Moscow Institute of Physics and Technology.

## Overview
The program checks whether the adjacency matrix is symmetric, i.e. whether we are given an unoriented graph or an oriented graph. Next, the program checks the conditions for the degrees of vertices and the connectivity of the graph. If the graph is connected and the conditions are fulfilled (different conditions are checked for the graph and for an oriented graph), then the graph is an Euler graph or semi-Euler graph. After that program defined is the graph Euler, semi-Euler or non-Euler.

## How to Use

**Follow the program's instructions**:
- Enter the number of vertices in the graph.
- Input the adjacency matrix of the graph line by line.

The program will output one of the following results:
- "The Euler cycle: a sequence of vertices"
- "The Euler path: a sequence of vertices"
- "The graph is not Euler graph!"

---

## Input and Output Examples

### Example 1: Euler path
**Input**:
```
Please, enter the number of vertices in the graph: 4
Please, enter the adjacency matrix for the graph line by line:
0 1 1 0
1 0 1 1
1 1 0 1
0 1 1 0
```

**Output**:
```
The Euler Path: -> 2 -> 3 -> 1 -> 2 -> 0 -> 1
```

---

### Example 2: Euler path
**Input**:
```
Please, enter the number of vertices in the graph: 4
Please, enter the adjacency matrix for the graph line by line:
0 1 1 0
1 0 1 1
1 1 0 0
0 1 0 0
```

**Output**:
```
The Euler path: -> 3 -> 1 -> 2 -> 0 -> 1
```

---

### Example 3: Non-Euler Graph
**Input**:
```
Please, enter the number of vertices in the graph: 3
Please, enter the adjacency matrix for the graph line by line:
0 1 1
0 0 0
0 0 0
```

**Output**:
```
The graph is not Euler graph!
```

---

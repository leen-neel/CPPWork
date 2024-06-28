# Question 1:

A queue is a linear data structure that follows the First In First Out (FIFO) principle. This means that the first element added to the queue will be the first one to be removed. Think of a queue as a line of people waiting for a service; the person who arrives first is served first.

## Basic Operations

A queue supports the following primary operations:

1. **Enqueue**: Adds an element to the end of the queue.
2. **Dequeue**: Removes an element from the front of the queue.
3. **Front**: Retrieves, but does not remove, the front element of the queue.
4. **Rear**: Retrieves, but does not remove, the last element of the queue.
5. **isEmpty**: Checks if the queue is empty.
6. **isFull**: Checks if the queue is full (for a bounded queue).

# Question 2:

The height of a tree is defined as the length of the longest path from the root node to any leaf node. This is typically measured in terms of the number of edges on the path. In other words, the height of a tree is the maximum number of edges from the root to a leaf.

# Question 3:

A **complete binary tree** is a binary tree in which all the levels are completely filled except possibly for the last level. The last level should be filled from left to right.

### Characteristics of a Complete Binary Tree

1. **All levels are fully filled**: Every level, except possibly the last one, has the maximum number of nodes.
2. **Last level nodes are as left as possible**: All nodes in the last level are as far left as possible.

### Example

Consider the following complete binary tree:

```
        A
       / \
      B   C
     / \  /
    D  E F
```

- Levels 0 and 1 are completely filled.
- Level 2 is filled from left to right.

### Non-Example

```
        A
       / \
      B   C
     / \   \
    D  E    F
```

In this tree, level 2 is not filled from left to right because there is a missing node to the left of \( F \).

# Question 4:

The statement "Searching a node in a binary search tree is more efficient than that of a simple binary tree" can be explained by comparing the structures and properties of a Binary Search Tree (BST) and a simple binary tree.

## Binary Search Tree (BST)

A Binary Search Tree (BST) is a binary tree with the following properties:

1. **Left Subtree**: The left subtree of a node contains only nodes with keys less than the node’s key.
2. **Right Subtree**: The right subtree of a node contains only nodes with keys greater than the node’s key.
3. **No Duplicate Nodes**: Each node has a unique key.

### Searching in a BST

To search for a node with a given key \( k \) in a BST:

1. Start at the root.
2. Compare \( k \) with the root's key.
   - If \( k \) equals the root's key, the search is successful.
   - If \( k \) is less than the root's key, repeat the search in the left subtree.
   - If \( k \) is greater than the root's key, repeat the search in the right subtree.
3. Repeat this process until the key is found or the subtree becomes empty (indicating the key is not present).

The time complexity of searching in a BST is \( O(h) \), where \( h \) is the height of the tree. For a balanced BST, the height \( h \) is \( O(\log n) \), making the search efficient.

## Simple Binary Tree

A simple binary tree is a binary tree without any specific properties regarding the arrangement of nodes. There are no constraints on how the nodes are ordered.

### Searching in a Simple Binary Tree

To search for a node with a given key \( k \) in a simple binary tree, you typically perform a traversal:

1. **In-order traversal**: Visit the left subtree, then the root, and then the right subtree.
2. **Pre-order traversal**: Visit the root, then the left subtree, and then the right subtree.
3. **Post-order traversal**: Visit the left subtree, then the right subtree, and finally the root.
4. **Level-order traversal**: Visit nodes level by level from top to bottom.

The time complexity of searching in a simple binary tree using any of these traversal methods is \( O(n) \), where \( n \) is the number of nodes in the tree. This is because, in the worst case, you may need to visit all nodes to find the target key.

## Efficiency Comparison

1. **BST Efficiency**:

   - For a balanced BST, the height \( h \) is \( O(\log n) \).
   - Therefore, searching is \( O(\log n) \), which is significantly faster than \( O(n) \) for large \( n \).

2. **Simple Binary Tree Efficiency**:
   - Without any specific arrangement of nodes, searching requires a traversal of the entire tree.
   - The time complexity is \( O(n) \).

### Example

Consider a BST and a simple binary tree with the same set of nodes:

#### BST:

```
        8
       / \
      3   10
     / \    \
    1   6   14
       / \  /
      4  7 13
```

#### Simple Binary Tree:

```
        8
       / \
      3   6
     / \    \
    1   4   14
       / \  /
      10  7 13
```

To search for node 13:

- **In BST**: Start at 8, move to the right to 10, then to the right to 14, and finally to the left to 13. Total steps: 4.
- **In Simple Binary Tree**: You may need to visit almost every node, depending on the traversal order, before finding 13.

In conclusion, the structure of a BST allows for efficient searching due to its ordered properties, while a simple binary tree lacks this organization, making searches less efficient.

# Question 5:

For an array-based stack, we typically maintain an index (often called top) to keep track of the top element of the stack. The stack is considered empty if the top index is -1.

# Question 6:

For an array-based queue, we typically maintain two indices: front and rear. The queue is considered empty if the front index is equal to the rear index plus one, or in some implementations, if the front is equal to -1.

# Question 7:

Linear queue, Circular queue, Priority Queue, Double-Ended Queue

# Question 8:

To find the minimum value in an array, follow these steps:

1. **Initialize**: Assume the first element of the array is the minimum.
2. **Iterate through the Array**: Loop through each element starting from the second element.
3. **Compare and Update**: For each element, compare it with the current minimum value and update if it's smaller.
4. **Result**: After iterating through the array, the variable holding the minimum value will contain the result.

# Question 9:

Sorted list, fixed size, comparable elements

# Question 10:

A **full binary tree**, also known as a **strict binary tree** or **proper binary tree**, is a special type of binary tree in which every node other than the leaves has exactly two children. Additionally, all leaves are at the same level.

### Characteristics of a Full Binary Tree:

1. **Node Structure**:

   - Every node in a full binary tree has either zero children (leaf node) or exactly two children.

2. **Leaf Nodes**:

   - All leaf nodes (nodes without any children) are at the same level or depth.

3. **Properties**:
   - A full binary tree of height \( h \) has exactly \( 2^{h+1} - 1 \) nodes, where \( h \) is the height of the tree.
   - The number of leaf nodes in a full binary tree is \( 2^h \), where \( h \) is the height of the tree.

### Example of a Full Binary Tree:

```
        1
       / \
      2   3
     / \
    4   5
```

- This tree is full because every internal node (non-leaf node) has exactly two children.
- All leaf nodes (4, 5, and 3) are at the same level.

# Question 11:

A **directed graph**, also known as a **digraph**, is a type of graph in which edges have a direction associated with them. In other words, the relationship between nodes (vertices) in a directed graph is asymmetrical; an edge from vertex \( A \) to vertex \( B \) does not imply an edge from \( B \) to \( A \) unless specifically defined.

### Components of a Directed Graph:

1. **Vertices (Nodes)**:

   - Represent entities or objects.
   - Each vertex can have zero or more outgoing and incoming edges.

2. **Edges**:
   - Directed edges (arcs) connect pairs of vertices.
   - An edge from vertex \( u \) to vertex \( v \) (written as \( (u, v) \)) indicates a directed connection from \( u \) to \( v \).

### Key Characteristics:

- **Directionality**: Each edge \( (u, v) \) in a directed graph has a specific direction, indicating that \( u \) is directly connected to \( v \), but \( v \) is not necessarily connected to \( u \) unless there is a separate edge \( (v, u) \).

- **In-Degree and Out-Degree**:

  - **In-Degree**: Number of incoming edges to a vertex.
  - **Out-Degree**: Number of outgoing edges from a vertex.

- **Connectivity**: Directed graphs can have various connectivity patterns:
  - **Strongly Connected**: Every vertex is reachable from every other vertex.
  - **Weakly Connected**: The underlying undirected graph is connected (ignoring edge directions).

# Question 12:

Graphs and trees are both fundamental data structures in computer science and graph theory, but they have distinct characteristics and usage scenarios. Here's a differentiation between graphs and trees based on their key properties:

- **Cycle**: Trees are acyclic, while graphs can be cyclic.
- **Connectivity**: Trees are connected, and there is a unique path between any pair of nodes, whereas graphs can be disconnected.
- **Structure**: Trees have a hierarchical structure with a root node and branches, while graphs have a more general structure with nodes and edges.
- **Application Focus**: Trees are commonly used for hierarchical relationships, whereas graphs are used for modeling more general relationships and dependencies.

In summary, while both graphs and trees involve nodes and edges, trees are a specific type of graph that is acyclic and connected, with a hierarchical structure. Graphs, on the other hand, are more general and can be cyclic and have various levels of connectivity.

# Question 13:

Certainly! Let's differentiate between a **binary tree** and a **binary search tree (BST)** based on their key characteristics:

### Binary Tree:

1. **Definition**:

   - A **binary tree** is a hierarchical tree structure where each node has at most two children, referred to as the left child and the right child.
   - Nodes can have zero, one, or two children.

2. **Properties**:

   - There are no specific rules regarding the arrangement of elements in a binary tree.
   - It is used for representing hierarchical relationships.

3. **Example**:

   - ![Binary Tree Example](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f7/Binary_tree.svg/400px-Binary_tree.svg.png)
   - In this example, each node can have up to two children.

4. **Applications**:
   - Used in data structures like expression trees, binary heaps, and sometimes for representing hierarchical data like family trees.

### Binary Search Tree (BST):

1. **Definition**:

   - A **binary search tree (BST)** is a binary tree in which for each node:
     - The left subtree contains only nodes with keys less than the node's key.
     - The right subtree contains only nodes with keys greater than the node's key.
     - Both the left and right subtrees must also be binary search trees.

2. **Properties**:

   - Provides efficient search, insertion, and deletion operations due to its ordered structure.
   - In-order traversal of a BST yields elements in sorted order.

3. **Example**:

   - ![Binary Search Tree Example](https://upload.wikimedia.org/wikipedia/commons/thumb/d/da/Binary_search_tree.svg/400px-Binary_search_tree.svg.png)
   - In this example, for every node, the left subtree contains nodes with smaller values, and the right subtree contains nodes with larger values.

4. **Applications**:
   - Used extensively in search algorithms and database implementations where efficient retrieval of data is required.

### Key Differences:

- **Ordering**: In a BST, the elements are ordered such that for any node, all elements in its left subtree are less than its value, and all elements in its right subtree are greater. This ordering property is not required in a general binary tree.
- **Operations**: BST supports efficient search (average \( O(\log n) \) time complexity), insertion, and deletion operations due to its ordered structure. Binary trees do not guarantee such efficiencies as they lack the ordering constraint.

- **Traversal**: In-order traversal of a BST yields elements in sorted order, which is not guaranteed in a binary tree.

- **Usage**: BSTs are used in scenarios where data needs to be stored in a sorted manner and efficient retrieval operations are crucial. Binary trees are used more generally for hierarchical representation without ordering constraints.

In essence, a binary search tree is a specialized form of a binary tree that maintains an ordering property, making it suitable for efficient search operations, while a binary tree is a more general structure without any specific ordering rules.

# Question 14:

hello….world

# Question 15:

This program would cause an error.

# Question 16:

Repetition of [Question 7](#question-7)

# Question 17:

Repetition of [Question 10](#question-10)

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

# Question 18:

A **perfect binary tree** is a type of binary tree where all interior nodes have exactly two children, and all leaf nodes (nodes with no children) are at the same level or depth.

### Characteristics of a Perfect Binary Tree:

1. **Node Structure**:

   - Every internal node (non-leaf node) has exactly two children.

2. **Depth and Level**:

   - All leaf nodes are at the same level or depth.
   - The depth of the tree is \( d \), and the number of nodes at each level \( i \) is \( 2^i \) for \( i = 0, 1, 2, \ldots, d \).

3. **Number of Nodes**:

   - A perfect binary tree with depth \( d \) has \( 2^{d+1} - 1 \) nodes in total, where \( d \) is the depth of the tree.

4. **Structure**:
   - Each level is completely filled before the next level is started.
   - In other words, all nodes except possibly the last level are completely filled, and if the last level is not complete, it is filled from left to right.

### Example of a Perfect Binary Tree:

```
            1
          /   \
        2       3
       / \     / \
      4   5   6   7
```

- In this example:
  - The tree has 7 nodes ( \( 2^3 - 1 \) for depth \( d = 3 \) ).
  - All internal nodes (1, 2, 3) have exactly two children.
  - All leaf nodes (4, 5, 6, 7) are at the same level.

# Question 19:

Repetition of [Question 11](#question-11)

# Quesion 20:

In the context of graph theory, a loop, also known as a self-loop, refers to an edge that connects a vertex to itself. This means there is an edge from a vertex v back to the same vertex v.

# Question 21:

A complete graph is a type of graph where every pair of distinct vertices is connected by a unique edge. In other words, in a complete graph, there is an edge between every pair of vertices. Let's break down the characteristics and properties of a complete graph:

### Characteristics of a Complete Graph:

1. **Edges between Every Pair of Vertices**:

   - In a complete graph \( G \) with \( n \) vertices, there are \( \binom{n}{2} \) edges, where \( \binom{n}{2} = \frac{n(n-1)}{2} \).
   - Each edge connects a unique pair of vertices, ensuring that there are no isolated vertices.

2. **Symmetry**:

   - Every edge in a complete graph is undirected, meaning it does not have an inherent directionality.
   - If there is an edge between vertex \( u \) and vertex \( v \), then there is also an edge between vertex \( v \) and vertex \( u \).

3. **Density**:
   - Complete graphs are dense in terms of edges compared to other types of graphs.
   - The edge density \( D \) of a complete graph is \( 1 \), meaning every possible edge is present.

### Properties of Complete Graphs:

- **Number of Edges**: A complete graph with \( n \) vertices has \( \frac{n(n-1)}{2} \) edges.
- **Degree of Vertices**: Each vertex in a complete graph has a degree of \( n-1 \), where \( n \) is the total number of vertices.
- **Representation**: Complete graphs are often represented using adjacency matrices or adjacency lists, with adjacency matrices being fully filled (all entries are 1 except diagonal entries which are 0).

### Examples:

- **\( K_n \)**: The complete graph with \( n \) vertices is denoted as \( K_n \).
- **Small Complete Graphs**:
  - \( K_1 \) is a single vertex with no edges.
  - \( K_2 \) is two vertices connected by a single edge.
  - \( K_3 \) is a triangle with three vertices and three edges connecting all pairs of vertices.

### Applications:

- **Network Design**: Complete graphs are used as theoretical models for studying network connectivity and algorithms.
- **Testing Algorithms**: They serve as benchmarks for testing graph algorithms due to their simplicity and clear structural properties.
- **Communication Networks**: In some communication network designs, complete graphs may represent direct communication channels between all possible pairs of nodes.

In summary, a complete graph \( K_n \) is a graph where every pair of distinct vertices is connected by a unique edge, making it a straightforward and dense structure for theoretical and practical applications in graph theory and network science.

# Question 22:

Repetition of [Question 1](#question-1)

# Question 23:

A deque, short for double-ended queue, is a linear data structure that allows elements to be added or removed from both ends with high efficiency. The deque supports operations similar to both stacks (Last-In-First-Out, LIFO) and queues (First-In-First-Out, FIFO), making it a versatile and useful structure in programming.

# Question 24:

The **depth** of a node in a tree is the number of edges from the root node to that particular node. It measures how far a node is from the root.

The **height** of a tree is the length of the longest path from the root node to any leaf node in the tree. It measures how tall the tree is.

# Question 25:

In graph theory, a **simple path** is a sequence of vertices in a graph where no vertex (except possibly the first and last vertices) is repeated. This means that a simple path does not revisit any vertex, ensuring that each vertex along the path is unique.

# Question 26:

A connected graph is a type of graph in which there is a path (a sequence of edges) between any two vertices. In simpler terms, every vertex in a connected graph is reachable from any other vertex via edges.

# Question 27:

- Stack
- Queue
- LinkedList
- Array
- BinaryTtree
- Binary Search Tree

# Question 28:

**Step 1:** Divide the unsorted array into n subarrays, each containing one element.

**Step 2:** Repeatedly merge subarrays to produce new sorted subarrays until there is only one subarray remaining.

**Step 3:** Merge the sorted subarrays to produce the final sorted array.

# Question 29:

Step 1: Choose a pivot element from the array (usually the last element).

Step 2: Partition the array into two subarrays:

- Elements less than the pivot (left partition).
- Elements greater than the pivot (right partition).

Step 3: Recursively apply quick sort to the left and right partitions.

Step 4: Concatenate the sorted left partition, pivot element, and sorted right partition to obtain the sorted array.

# Question 30:

- **Space Utilization**: Circular queues efficiently use space by reusing empty slots, whereas linear queues may waste space once the front end reaches the array boundary.
- **Implementation Complexity**: Circular queues require managing the circular behavior using modulo arithmetic, which can simplify certain operations compared to linear queues.

- **Performance**: Circular queues generally offer better performance for enqueue and dequeue operations due to their constant time complexity, especially when implemented using arrays.

# Question 31:

| **Input Symbol** | **Stack** | **Output**  |
| ---------------- | --------- | ----------- |
| a                |           | a           |
| +                | +         |             |
| b                | +         | ab          |
| \*               | +\*       | ab          |
| c                | +\*       | abc         |
| -                | +         | abc\*+      |
| d                | +         | abc\*+d     |
| /                | +/        | abc\*+d     |
| e                | +/        | abc\*+de    |
| +                |           | abc\*+de/-  |
| f                |           | abc\*+de/-f |

# Question 32:

```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted array
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}
```

# Question 33:

```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Last i elements are already in place
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

# Qustion 34:

[Linked List](https://github.com/leen-neel/CPPWork/blob/master/DSA/LinkedList.cpp)

# Question 35:

[Linked List](https://github.com/leen-neel/CPPWork/blob/master/DSA/LinkedList.cpp)

# Question 36:

[Binary Search](https://github.com/leen-neel/CPPWork/blob/master/DSA/BinarySearch.cpp)

# Question 37:

[Linear Search](https://github.com/leen-neel/CPPWork/blob/master/DSA/LinearSearch.cpp)

# Question 38:

```cpp
int sumLowerTriangle(int matrix[][3], int n) {
    int sum = 0;

    // Iterate through each row
    for (int i = 0; i < n; ++i) {
        // Iterate through each column up to i (inclusive)
        for (int j = 0; j <= i; ++j) {
            // Add element to sum if it's in the lower triangle (including diagonal)
            sum += matrix[i][j];
        }
    }

    return sum;
}
```

# Question 39:

```cpp
void deleteElement(int arr[], int size, int position) {
    if (position < 0 || position >= size) {
        std::cout << "Invalid position. Deletion failed.\n";
        return;
    }

    // Shift elements to the left from position
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

}
```

# Question 40:

A Binary Search Tree (BST) is a binary tree where each node has at most two child nodes, commonly referred to as the left child and the right child. The key property of a BST is that for each node:

In the context of trees, the height of a node is defined as the number of edges on the longest path from the node to a leaf node.

# Question 41:

```
        A
       / \
      B   C
     / \   \
    D   E   F
   /     \   \
  G       H   I
           \   \
            L   J
                 \
                  K
```

# Question 42:

```
        30
       /  \
     20    40
    / \    / \
  10  25  35  45
   \          /
   15        43
```

# Question 43:

- **Ordering**: Stack follows LIFO, while queue follows FIFO.
- **Insertion and Removal**: Stack uses push and pop operations, whereas queue uses enqueue and dequeue operations.
- **Access**: Stacks allow access to only the top element (peek), whereas queues allow access to both the front and back elements.
- **Usage**: Stacks are used for tasks where the last item added should be processed first, while queues are used when items need to be processed in the order they were added.

# Question 44:

In a queue data structure, the front and rear pointers are used to manage and access elements in the queue efficiently. Here's how they function and their roles:

### Front Pointer:

1. **Role**:

   - The front pointer indicates the position of the first element in the queue.
   - It tracks where the next dequeue operation will occur.

2. **Operations**:

   - **Enqueue**: When the queue is empty, both front and rear pointers point to the same location. After the first enqueue operation, the front pointer remains at the initial position, and the rear pointer moves to the new element.
   - **Dequeue**: Moves the front pointer to the next element in the queue after removing the current front element. This operation effectively "moves" the queue forward.

3. **Access**:
   - Allows access to the element at the front of the queue using the front pointer.
   - Provides efficient removal of elements from the front.

### Rear Pointer:

1. **Role**:

   - The rear pointer indicates the position where the next enqueue operation will insert a new element.
   - It tracks the end of the queue, facilitating efficient additions (enqueue operations).

2. **Operations**:

   - **Enqueue**: Moves the rear pointer to the next position after inserting a new element. If the queue is empty, both front and rear pointers start at the same location.
   - **Dequeue**: The rear pointer remains unchanged during dequeue operations unless the last element is dequeued, in which case, adjustments may be necessary to maintain correct queue state.

3. **Access**:
   - Allows access to the element at the rear of the queue using the rear pointer.
   - Facilitates efficient insertion of elements at the end of the queue.

# Question 45:

1. **Initialize Pointers**:

   - `LOW` starts at index `0` (beginning of the array).
   - `HIGH` starts at index `8` (end of the array).
   - Calculate `MID` as `(LOW + HIGH) / 2`.

2. **Iteration 1**:

   - `LOW = 0`, `HIGH = 8`, `MID = (0 + 8) / 2 = 4`.
   - Compare `arr[MID]` with `60`.
   - `arr[4] = 50` (less than `60`).
   - Since `50` is less than `60`, adjust `LOW` to `MID + 1`.

3. **Iteration 2**:

   - `LOW = 5`, `HIGH = 8`, `MID = (5 + 8) / 2 = 6`.
   - Compare `arr[MID]` with `60`.
   - `arr[6] = 70` (greater than `60`).
   - Since `70` is greater than `60`, adjust `HIGH` to `MID - 1`.

4. **Iteration 3**:
   - `LOW = 5`, `HIGH = 5`, `MID = (5 + 5) / 2 = 5`.
   - Compare `arr[MID]` with `60`.
   - `arr[5] = 60` (found).
   - Return `MID = 5` as the index of `60` in the array.

# Question 46:

To create an AVL tree from the sequence of data: 16, 27, 9, 12, 36, 54, 81, 10, 44, we will insert each element into the AVL tree while ensuring the tree remains balanced by performing rotations as necessary. Here's the step-by-step process:

### Step-by-Step AVL Tree Construction:

1. **Insert 16**:

   - Insert 16 as the root since it's the first element.

   ```
         16
   ```

2. **Insert 27**:

   - Insert 27 to the right of 16.
   - Perform rotations to balance the tree (none needed initially).

   ```
         16
          \
           27
   ```

3. **Insert 9**:

   - Insert 9 to the left of 16.
   - Perform rotations to balance the tree (right rotation).

   ```
         16
        /  \
       9    27
   ```

4. **Insert 12**:

   - Insert 12 to the right of 9.
   - Perform rotations to balance the tree (none needed initially).

   ```
         16
        /  \
       9    27
        \
        12
   ```

5. **Insert 36**:

   - Insert 36 to the right of 27.
   - Perform rotations to balance the tree (none needed initially).

   ```
         16
        /  \
       9    27
        \     \
        12    36
   ```

6. **Insert 54**:

   - Insert 54 to the right of 36.
   - Perform rotations to balance the tree (none needed initially).

   ```
         16
        /  \
       9    27
        \     \
        12    36
               \
               54
   ```

7. **Insert 81**:

   - Insert 81 to the right of 54.
   - Perform rotations to balance the tree (none needed initially).

   ```
         16
        /  \
       9    27
        \     \
        12    36
               \
                54
                 \
                 81
   ```

8. **Insert 10**:

   - Insert 10 to the right of 9.
   - Perform rotations to balance the tree (left-right rotation).

   ```
         16
        /  \
       10   27
      /  \    \
     9    12   36
               \
                54
                 \
                 81
   ```

9. **Insert 44**:

   - Insert 44 to the left of 54.
   - Perform rotations to balance the tree (right-left rotation).

   ```
         16
        /  \
       10   36
      /  \    \
     9    12   54
              /  \
             44   81
   ```

### Final AVL Tree:

```
         16
        /  \
       10   36
      /  \    \
     9    12   54
              /  \
             44   81
```

This AVL tree maintains balance (with balance factors of -1, 0, or 1 for each node) throughout the insertion process by performing necessary rotations (left, right, left-right, right-left) to ensure that the tree remains AVL-balanced.

# Question 48:

Repition of [Question 39](#question-39)

# Question 49:

[Sorting](https://github.com/leen-neel/CPPWork/blob/master/DSA/Sorting.cpp)

# Question 50:

[Saddle Point](https://github.com/leen-neel/CPPWork/blob/master/DSA/SaddlePoint.cpp)

# Question 51:

#### Step 1: Define Arrays for Words

- Arrays `ones`, `teens`, and `tens` are defined to store words for single-digit numbers, double-digit numbers from 10 to 19, and multiples of ten from 20 to 90, respectively.

#### Step 2: Handle Special Case for Zero

- If the input number is zero, return "Zero".

#### Step 3: Handle Large Numbers

- **Billions**: If the number is 1 billion or more, recursively call `convertToWords` for the billions place, append " Billion " to the result, and reduce the number by the billions place value.
- **Millions**: If the number is 1 million or more, recursively call `convertToWords` for the millions place, append " Million " to the result, and reduce the number by the millions place value.
- **Thousands**: If the number is 1 thousand or more, recursively call `convertToWords` for the thousands place, append " Thousand " to the result, and reduce the number by the thousands place value.

#### Step 4: Process Hundreds Place

- If the number is 100 or more, use the units array to convert the hundreds place, append " Hundred " to the result, and reduce the number by the hundreds place value.

#### Step 5: Process Tens and Ones Places

- If the number is between 10 and 19, use the teens array.
- Otherwise, handle the tens place and the ones place separately using the tens and units arrays.

#### Step 6: Main Function

- Read the input amount from the user.
- Call the `convertToWords` function with the input amount.
- Print the result.

This updated code handles numbers up to billions and converts them to words accordingly.

# Question 52:

| **Symbol** | **Stack** | **Postfix Expression** |
| ---------- | --------- | ---------------------- |
| \( p \)    | -         | \( p \)                |
| \( + \)    | \( + \)   | -                      |
| \( q \)    | \( + \)   | \( pq \)               |
| \( \* \)   | \( +\* \) | \( pq \)               |
| \( r \)    | \( +\* \) | \( pqr \)              |
| \( - \)    | \( + \)   | \( pq\*r \)            |
| \( s \)    | \( + \)   | \( pq\*rs \)           |
| \( / \)    | \( +/ \)  | \( pq\*rs \)           |
| \( t \)    | \( +/ \)  | \( pq\*rs/t \)         |
| \( + \)    | -         | \( pq\*rs/t+ \)        |
| \( u \)    | \( + \)   | \( pq\*rs/t+u \)       |
| -          | -         | \( pq\*rs/t+u+ \)      |

# Question 53:

[Queue](https://github.com/leen-neel/CPPWork/blob/master/DSA/Queue.cpp)

# Question 54:

1. **Efficient Space Utilization**:

   - Circular queues reuse freed space more effectively compared to linear queues.
   - Elements can be dequeued from the front and new elements can be enqueued at the rear, allowing for continuous use of array space without shifting elements.

2. **Constant Time Complexity**:

   - Enqueue and dequeue operations in circular queues typically operate in constant \( O(1) \) time complexity.
   - This is because they involve simple arithmetic operations (incrementing or decrementing indices) rather than shifting elements in a linear queue.

3. **Wrap-Around Capability**:

   - Circular queues wrap around within the allocated array space using modulo arithmetic.
   - This allows the queue to efficiently manage and reuse space by looping back to the beginning of the array when reaching the end.

4. **Simplified Implementation**:

   - Circular queues are often implemented using arrays with two indices (`front` and `rear`) and a fixed size.
   - This simplifies implementation compared to dynamically resizing arrays or linked lists used in other queue implementations.

5. **Applications in Buffering**:

   - They are particularly useful in scenarios requiring buffering, such as task scheduling in operating systems or network packet buffering.
   - Circular queues ensure that data is processed in a first-in, first-out (FIFO) order efficiently.

6. **Optimal for Sequential Data Processing**:

   - They efficiently manage sequential data processing tasks where elements need to be processed in the order they were added.

7. **Avoidance of Full/Empty Queue Confusion**:

   - Circular queues use a condition (typically `(rear + 1) % size == front`) to distinguish between full and empty states, avoiding confusion that can occur in linear queues.

8. **Scalability and Performance**:

   - Circular queues can scale well for applications requiring efficient queue management and are suitable for real-time systems where performance is critical.

9. **Natural Handling of Wrap-Around**:

   - The wrap-around nature of circular queues naturally handles scenarios where the queue fills up and new elements need to be added after dequeuing old ones.

10. **Memory Management Efficiency**:
    - They efficiently manage memory allocation and deallocation compared to linear queues, which may require more frequent reallocation of memory space.

# Question 55:

[Stack](https://github.com/leen-neel/CPPWork/blob/master/DSA/Stack.cpp)

# Question 56:

### Steps to Convert Infix to Postfix:

**Example Infix Expression:** \( (A + B) \* (C - D) \)

1. **Initialize an empty stack and an empty output list (postfix expression)**.

2. **Scan the infix expression from left to right**:

   - **Operands (like A, B, C, D)**: Directly append to the output list.
   - **Operators (+, -)**: Push onto the stack, respecting operator precedence and associativity rules.

3. **Parentheses ( )**:

   - **Left Parenthesis ( ( )**: Push onto the stack to mark the beginning of a sub-expression.
   - **Right Parenthesis ( ) )**: Pop operators from the stack to the output list until a left parenthesis is encountered. Discard the left parenthesis.

4. **End of Expression**: Pop all operators from the stack to the output list.

### Example:

**Infix Expression:** \( (A + B) \* (C - D) \)

#### Step-by-Step Conversion:

| **Token** | **Action**                        | **Stack**    | **Postfix Expression** |
| --------- | --------------------------------- | ------------ | ---------------------- |
| \( ( \)   | Push onto stack                   | \( ( \)      | -                      |
| \( A \)   | Append to output                  | \( ( \)      | \( A \)                |
| \( + \)   | Push onto stack                   | \( ( + \)    | \( A \)                |
| \( B \)   | Append to output                  | \( ( + \)    | \( A B \)              |
| \( ) \)   | Pop stack to output until \( ( \) | -            | \( A B + \)            |
| \( \* \)  | Push onto stack                   | \( \* \)     | \( A B + \)            |
| \( ( \)   | Push onto stack                   | \( \* ( \)   | \( A B + \)            |
| \( C \)   | Append to output                  | \( \* ( \)   | \( A B + C \)          |
| \( - \)   | Push onto stack                   | \( \* ( - \) | \( A B + C \)          |
| \( D \)   | Append to output                  | \( \* ( - \) | \( A B + C D \)        |
| \( ) \)   | Pop stack to output until \( ( \) | \( \* \)     | \( A B + C D - \)      |
| End       | Pop all from stack to output      | -            | \( A B + C D - \* \)   |

### Postfix Expression: \( A B + C D - \* \)

### Explanation:

- **Stack Operations**: Operators and parentheses are pushed onto or popped from the stack based on precedence and associativity rules.
- **Output List**: Operands (like variables or constants) are directly appended to the output list.
- **Parentheses Handling**: Left parentheses mark the beginning of sub-expressions, and right parentheses trigger popping from the stack until a matching left parenthesis is found.

By following these steps systematically, you can convert any infix expression to its postfix equivalent using the Shunting Yard algorithm.

# Question 58:

To create an AVL tree from the given sequence of data: 17, 28, 9, 14, 37, 55, 88, 10, 47, we will insert each element into the AVL tree while maintaining balance using rotations when necessary. Here's how the AVL tree is constructed step-by-step:

### Step-by-Step AVL Tree Construction:

1. **Insert 17**:

   - Insert 17 as the root since it's the first element.

   ```
         17
   ```

2. **Insert 28**:

   - Insert 28 to the right of 17.
   - Perform necessary rotations to maintain balance (none needed initially).

   ```
         17
          \
          28
   ```

3. **Insert 9**:

   - Insert 9 to the left of 17.
   - Perform rotations to balance the tree (left rotation).

   ```
         17
        /  \
       9    28
   ```

4. **Insert 14**:

   - Insert 14 to the right of 9.
   - Perform rotations to balance the tree (none needed initially).

   ```
         17
        /  \
       9    28
        \
        14
   ```

5. **Insert 37**:

   - Insert 37 to the right of 28.
   - Perform rotations to balance the tree (none needed initially).

   ```
         17
        /  \
       9    28
        \     \
        14    37
   ```

6. **Insert 55**:

   - Insert 55 to the right of 37.
   - Perform rotations to balance the tree (none needed initially).

   ```
         17
        /  \
       9    28
        \     \
        14    37
                \
                55
   ```

7. **Insert 88**:

   - Insert 88 to the right of 55.
   - Perform rotations to balance the tree (none needed initially).

   ```
         17
        /  \
       9    37
        \     \
        14    55
              \
              88
   ```

8. **Insert 10**:

   - Insert 10 to the left of 9.
   - Perform rotations to balance the tree (right-left rotation).

   ```
         17
        /  \
       10   37
      /  \   \
     9    14  55
           \    \
           14   88
   ```

9. **Insert 47**:

   - Insert 47 to the left of 37.
   - Perform rotations to balance the tree (left rotation).

   ```
         17
        /  \
       10   37
      /  \   \
     9    14  55
         /   /  \
        14  47  88
   ```

### Final AVL Tree:

```
         17
        /  \
       10   37
      /  \   \
     9    14  55
         /   /  \
        14  47  88
```

This AVL tree maintains the balance property where the height difference between the left and right subtrees (balance factor) is at most ±1 for each node. Rotation operations were performed as needed during the insertion process to ensure this balance.

# Question 59:

1. **Balanced Height**:

   - AVL trees are self-balancing binary search trees where the height difference between the left and right subtrees (balance factor) of any node is at most ±1.
   - This balanced height ensures that the worst-case time complexity for operations such as search, insertion, and deletion remains \( O(\log n) \), where \( n \) is the number of nodes.

2. **Improved Performance**:

   - In a regular BST, operations like insertion, deletion, and search can degrade to \( O(n) \) in the worst-case scenario (essentially behaving like a linked list) if the tree becomes unbalanced.
   - AVL trees maintain balance through rotations, ensuring that these operations remain efficient even with dynamic datasets.

3. **Predictable Operations**:

   - AVL trees guarantee \( O(\log n) \) time complexity for all basic operations due to their balanced nature.
   - This predictability is crucial in real-time systems and applications where performance is critical and the dataset size can vary significantly.

4. **Optimal for Dynamic Datasets**:

   - AVL trees are optimal for scenarios where datasets are dynamically changing (insertions and deletions occur frequently).
   - They automatically adjust and rebalance themselves, ensuring that the tree remains efficient and balanced at all times.

5. **Applications in Database Systems**:
   - AVL trees are widely used in database systems and in-memory data structures where rapid access and modification are essential.
   - Their balanced nature ensures that operations like range queries, updates, and indexing operations are performed efficiently.

# Question 60:

1. **Efficient In-order Traversal**:

   - In a regular Binary Tree, performing an in-order traversal requires recursive calls or a stack to manage traversal state, which consumes additional memory and time.
   - In a Threaded Binary Tree, threads (additional pointers) are used to link nodes to their successors in in-order traversal order.
   - This threaded linking allows for direct traversal from one node to its successor without needing to use the call stack or recursion, making in-order traversal iterative and more memory-efficient.

2. **Reduced Time Complexity for Traversal**:

   - Traversal operations (in-order, pre-order, post-order) in a Threaded Binary Tree can be performed in \( O(n) \) time complexity, where \( n \) is the number of nodes.
   - This efficiency contrasts with \( O(n) \) time complexity in regular Binary Trees when using recursion or iterative methods that require additional space.

3. **Simplifies Implementation**:

   - Implementing threaded pointers in a Threaded Binary Tree simplifies traversal algorithms and reduces the code complexity compared to using stack-based or recursive approaches in regular Binary Trees.
   - It also reduces the chance of stack overflow errors that may occur in very deep or unbalanced Binary Trees during traversal.

4. **Space Efficiency**:

   - Threaded Binary Trees can save memory that would otherwise be used for managing traversal state (like using a stack or recursion in regular Binary Trees).
   - This space efficiency is particularly beneficial in memory-constrained environments or embedded systems where every byte of memory counts.

5. **Supports Efficient Searching and Operations**:
   - Threaded Binary Trees allow for faster search operations and updates after a search because of the efficient traversal capabilities.
   - Once a node is found through search, subsequent operations (like deletion or modification) can be performed more quickly using threaded links.

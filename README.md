# double-linked-list-implementation

## Overview
This is my attempt at solving: Level 0: Basic Data Structure implementation mentioned in the task.

This repository contains an implementation of a Doubly Linked List in C, supporting the following operations:

- Node Creation (new_Node)  
- Insertion at Head (insert_head)  
- Insertion at Tail (insert_tail)  
- Forward Traversal (trav_f)  
- Backward Traversal (trav_b)  

## Files
- doubly-linked-list-implementation.c → Contains the full implementation of the doubly linked list according to task requirements.

## Time & Space Complexity
Operation	                Time Complexity	        Space Complexity
Node Creation (new_Node)	    O(1)	                 O(1)
Insert at Head (insert_head)	O(1)	                 O(1)
Insert at Tail (insert_tail)	O(n)	                 O(1)
Forward Traversal (trav_f)	    O(n)	                 O(1)
Backward Traversal (trav_b)	    O(n)	                 O(1)

## Compilation & Execution
Use the following command to compile the program (Compiler: gcc):

gcc doubly-linked-list-implementation.c -o dll

Run the program using:

./dll

## Output 
The following output is obtained:

12 -> 6 -> 145 -> 70 -> NULL
70 -> 145 -> 6 -> 12 -> NULL




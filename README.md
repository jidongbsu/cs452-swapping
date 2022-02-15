## Overview

In this assignment we will implement a least recently used (LRU) policy, a commonly used policy in OS to manage the swap space, as well as manage cache. Your algorithm must be in an amortized O(1) time complexity. Note this is NOT a kernel project, and you should just develop your code on onyx, not in your virtual machine. Submissions fail to compile or run on onyx, will not be graded.

## Learning Objectives

- Understand least recently used (LRU) policy.

## Note

This README is all about implementation. The theory of how LRU works is beyond the scope of this README. 

## References

LRU is used in more than one situations, and thus is described in multiple chapters.

Operating Systems: Three Easy Pieces: [Chapter 19: Translation Lookaside Buffers](https://pages.cs.wisc.edu/~remzi/OSTEP/vm-tlbs.pdf)<br/>
Operating Systems: Three Easy Pieces: [Chapter 22: Swapping: Policies](https://pages.cs.wisc.edu/~remzi/OSTEP/vm-beyondphys-policy.pdf)<br/>

This assignment is adapted from Leetcode problem 146. It is not clear which company or who created this interview problem.

## Starter Code

The starter code looks like this:

```console
(base) [jidongxiao@onyx cs452-swapping]$ ls
lru.c  lru.h  lru-test1.c  lru-test2.c  lru-test3.c  lru-test4.c  lru-test5.c  lru-test6.c  lru-test7.c  Makefile  README.md
```

You will be completing the lru.c file. You should not modify the lru.h file.

## Specification

You are required to implement the following 4 functions.

```c
LRUCache* lRUCacheCreate(int capacity);

int lRUCacheGet(LRUCache* obj, int key);

void lRUCachePut(LRUCache* obj, int key, int value);

void lRUCacheFree(LRUCache* obj);
```

## Global Data Structures and Variables

The starter code defines the following global data structures and variables, in lru.h. Once again, do not modify lru.h.

## APIs and Helper Code


## Testing

## Submission

Due Date:  03/08/2022, 23:59pm. Late submission will not be accepted/graded.

## Project Layout

All files necessary for compilation need to be submitted, this includes source code files, header files, and Makefile. The structure of the submission folder should be the same as what was given to you. 

## Grading Rubric (for Undergraduate Students and Graduate Students)

Grade:  /100

- [10 pts] Compiling:
	- Each compiler warning will result in a 3 point deduction.
	- You are not allowed to suppress warnings.
- [80 pts] Functional Requirements:
	- lru-test1 produces correct results - /10
	- lru-test2 produces correct results - /10
	- lru-test3 produces correct results - /10
	- lru-test4 produces correct results - /10
	- lru-test5 produces correct results - /10
	- lru-test6 produces correct results - /10
	- O(1) complexity - /20
- [10 pts] Documentation:
	- README.md file (replace this current README.md with a new one using the README template, and do not check in this current README file.)
	- You are required to fill in every section of the README template, missing 1 section will result in a 2-point deduction.

# LINKED-LIST-IMPLEMENTATION
COMPANY : CODTECH IT SOLUTIONS

NAME : SHREYAA

INTERN ID : CT6WMCN

DOMAIN : C PROGRAMMING

BATCH DURATION : FEBRUARY 5TH 2025 TO MARCH 20TH 2025

MENTOR NAME : NEELA SANTHOSH

### **Description of the Program: Linked List Operations in C**  

This C program demonstrates basic operations on a **singly linked list**, including insertion, deletion, and display of elements. The user interacts with a **menu-driven interface** to perform these operations efficiently.  

### **Key Features of the Program**  
1. **Insertion at the Beginning:** New nodes are always inserted at the front of the list.  
2. **Deletion by Value:** Users can remove a node by specifying its value.  
3. **Display Functionality:** The program prints all elements of the linked list in sequential order.  
4. **Dynamic Memory Allocation:** The program utilizes `malloc()` for memory allocation and `free()` for memory deallocation.  
5. **Menu-Driven Interface:** Users can select operations interactively.  
6. **Error Handling:** Prevents operations on an empty list and avoids memory leaks.  

### **Libraries Used in the Program**  

#### **`#include <stdio.h>`**  
The **Standard Input-Output Library** provides functions like `printf()` and `scanf()` for displaying messages and taking user input.  

#### **`#include <stdlib.h>`**  
The **Standard Library** is used for functions like `malloc()` (memory allocation) and `free()` (memory deallocation), ensuring efficient memory management.  

### **Functions in the Program**  

1. **`insert(struct Node**\*\** head, int value)**  
   - Allocates memory for a new node.  
   - Stores the given value in the node.  
   - Inserts the new node at the **beginning** of the list.  

2. **`delete(struct Node**\*\** head, int value)**  
   - Searches for a node with the given value.  
   - If found, removes it and releases the memory using `free()`.  

3. **`display(struct Node* head)`**  
   - Traverses the linked list and prints all node values in order.  

### **Working of the Program**  

1. The program starts with an **empty linked list** (`head = NULL`).  
2. The user is presented with a **menu** containing four options:  
   - Insert a new node.  
   - Delete a node by value.  
   - Display the linked list.  
   - Exit the program.  
3. Based on the user’s choice, the appropriate function is executed.  
4. The program runs in a loop until the user selects **Exit (option 4).**  

### **Possible Enhancements**  

1. **Insert at Any Position:** Modify the program to allow inserting nodes at a specific position.  
2. **Delete by Position:** Implement deletion based on position instead of value.  
3. **Reverse the Linked List:** Add a function to reverse the order of the nodes.  
4. **Sort the Linked List:** Include a sorting feature for better data organization.  
5. **Doubly Linked List:** Extend the program to use a **doubly linked list**, allowing traversal in both directions.  

### **Conclusion**  

This program provides a **fundamental understanding** of **singly linked lists** in C. It introduces **dynamic memory allocation**, **pointer manipulation**, and **basic data structure operations**, which are essential for mastering **linked list concepts** in **data structures and algorithms (DSA).**
<img width="1512" alt="Image" src="https://github.com/user-attachments/assets/ef651be0-5cf7-430a-8991-06f7e21c28fa" />

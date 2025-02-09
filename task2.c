#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning
void insert(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Function to delete a node by value
void delete(struct Node** head, int value) {
    struct Node *temp = *head, *prev = NULL;
    if (temp && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp) {
        prev->next = temp->next;
        free(temp);
    }
}

// Function to display the list
void display(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;
    do {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter value: ");
            scanf("%d", &value);
            insert(&head, value);
        } else if (choice == 2) {
            printf("Enter value to delete: ");
            scanf("%d", &value);
            delete(&head, value);
        } else if (choice == 3) {
            display(head);
        } else if (choice != 4) {
            printf("Invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}

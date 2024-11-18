#include <stdio.h> 
#include <stdlib.h> 
 
typedef struct node {

    int data; 
    int priority; 
    struct node* next; 

} Node; 

// Function to Create A New Node 
Node* newNode(int data, int priority) 
{ 
    Node* temp = (Node*)malloc(sizeof(Node)); 
    temp->data = data; 
    temp->priority = priority; 
    temp->next = NULL; 

    return temp; 
} 


int peek(Node* head) 
{ 
    return head->data; 
} 


Node* pop(Node* head) 
{ 
    Node* temp = head; 
    head = head->next; 
    free(temp); 
    return head;
} 


Node* push(Node* head, int data, int priority) 
{ 
    Node* front = head; 
    Node* temp = newNode(data, priority);  

    if (head->priority > priority) {
        temp->next = head; 
        head = temp; 
    } 
    else 
    {  
        while (front->next != NULL && front->next->priority < priority) 
        { 
            front = front->next; 
        } 
        temp->next = front->next; 
        front->next = temp; 
    } 
    return head;
} 

 

int main() 
{ 

    Node* head = newNode(65,1); 
    head = push(head,74,2); 
    head = push(head,87,3); 
    head = push(head,15,0); 
    head = push(head,99,4); 
    head = push(head,170,5); 

    while (head != NULL){
    printf("%d ", peek(head));
    head = pop(head);
    }

    return 0; 
} 

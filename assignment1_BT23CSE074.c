#include<stdio.h> 
#include<stdlib.h> 
struct Node{ 
    int coef; 
    int exp; 
    struct Node* next; 
}; 
 
struct Node * createNode(int coef, int exp) 
{ 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->coef=coef; 
    newNode->exp=exp; 
    newNode->next=NULL; 
    return newNode; 
} 
 
struct Node* addNode(struct Node* head, struct Node* newNode) 
{ 
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node)); 
    ptr=head; 
    if(head==NULL || head->exp<newNode->exp) 
    { 
        newNode->next=head; 
        return newNode; 
    } 
    while (ptr->next!=NULL && ptr->next->exp>newNode->exp) 
    { 
        ptr=ptr->next; 
    } 
    if(ptr->next==NULL && ptr->exp>newNode->exp) 
        ptr->next=newNode; 
    else 
    { 
        if(ptr->next->exp==newNode->exp) 
        { 
            ptr->next->coef+=newNode->coef; 
        } 
        else 
        { 
            newNode->next=ptr->next; 
            ptr->next=newNode; 
        } 
    } 
    return head; 
} 
 
struct Node* addPoly(struct Node* head1, struct Node* head2) 
{ 
    struct Node* ptr1 = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* ptr2 = (struct Node*)malloc(sizeof(struct Node)); 
    ptr1=head1; 
    ptr2=head2; 
    struct Node* head3 = (struct Node*)malloc(sizeof(struct Node)); 
    head3=NULL; 
    while (ptr1!=NULL && ptr2!=NULL) 
    { 
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
        if(ptr1->exp==ptr2->exp) 
        { 
            newNode=createNode(ptr1->coef+ptr2->coef,ptr1->exp); 
            head3=addNode(head3,newNode); 
            ptr1=ptr1->next; 
            ptr2=ptr2->next; 
        } 
        else if(ptr1->exp>ptr2->exp) 
        { 
            newNode = createNode(ptr1->coef, ptr1->exp); 
            head3=addNode(head3,newNode); 
            ptr1=ptr1->next; 
        } 
        else  
        { 
            newNode = createNode(ptr2->coef, ptr2->exp); 
            head3=addNode(head3,newNode); 
            ptr2=ptr2->next; 
        } 
    } 
    while (ptr1!=NULL) 
    { 
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
        newNode = createNode(ptr1->coef, ptr1->exp); 
        head3=addNode(head3,newNode); 
        ptr1=ptr1->next; 
    } 
    while (ptr2!=NULL) 
    { 
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
        newNode = createNode(ptr2->coef, ptr2->exp); 
        head3=addNode(head3,newNode); 
        ptr2=ptr2->next; 
    } 
     
    return head3; 
     
     
} 
 
void printPoly(struct Node* head) 
{ 
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node)); 
    ptr=head; 
    while (ptr!=NULL) 
    { 
        if(ptr->exp==0) 
        { 
            printf("%d ",ptr->coef,ptr->exp); 
            ptr=ptr->next; 
            continue; 
        } 
        printf("%dx^%d + ",ptr->coef,ptr->exp); 
        ptr=ptr->next; 
    } 
    printf("\n"); 
     
} 
 
int main() 
{ 
    struct Node* head1 = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node* head2 = (struct Node*)malloc(sizeof(struct Node)); 
    head1=NULL; 
    head2=NULL; 
    int n1,n2; 
    printf("Enter number of terms in polynomial one and two respectively: "); 
    scanf("%d %d",&n1,&n2); 
    printf("Enter the first polynomial : "); 
    while (n1--) 
    { 
        int coef,exp; 
        scanf("%d %d",&coef,&exp); 
        struct Node* newNode = createNode(coef,exp); 
        head1=addNode(head1,newNode); 
         
    } 
    printPoly(head1); 
    printf("Enter the second polynomial (coefficient and exponent): "); 
    while (n2--) 
    { 
        int coef,exp; 
        scanf("%d %d",&coef,&exp); 
        struct Node* newNode = createNode(coef,exp); 
        head2=addNode(head2,newNode); 
         
    } 
    printPoly(head2); 
    struct Node* head3 = (struct Node*)malloc(sizeof(struct Node)); 
    head3=NULL; 
    head3=addPoly(head1,head2); 
    printf("Sum of polynomials: "); 
    printPoly(head3); 
}

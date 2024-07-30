/* 
Linked List is collection of Nodes, where each nodes contain 'Data' and 'Pointer' 
to next Node.

First Node is called the Head node.

struct Node
{
    int data,
    struct Node *next;  // Pointer of Type struct node only,
};

Creating a Node;
struct Node *p;

p = (Node *)malloc(sizeof(struct Node)); // In C
p = new Node;   // For C++

p->data = 10;   // for accessing the data section of Node.
p->next = 0;    // for accessing the address section of Node.


// Traversing in Linked list
struct Node *p,*q;
p = q;          This states that the value and the address what is saved in p will be now also be available in q;
q = p->next;    This means the q is pointing to the memory address to next node of p.
p = p->next;    used for traversing in the Linked list.

// Check is Node is Null
struct Node *p;
if(p==0) or if(p==NULL) or if(!p)

// Check is Node is Not Null
struct Node *p;
if(p!=0) or if(p!=NULL) or if(p)

// Check for LAST Node
if(p->next == NULL)
if(p->next != NULL) // To check that there an element after a Node.
*/



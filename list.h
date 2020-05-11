//Robbie Wadud
//CMP SCI 2750
//05/08/2020
//aswnc6@delmar

#ifndef LIST_H
#define LIST_H
typedef struct listnode
{
	struct listnode * next;
	int value;
}

Node;

//This function will insert a value v to a linked list starting with the head, and it will return a new head. 
Node * List_insert(Node * head, int v);

//This function will insert a value v to the end of a linked list, and it will return the ending node.
Node * List__insert_last(Node * head, int v);

//This function will search for a value in a linked list starting with the head, and then it will return the value of v.
Node * List_search(Node * head, int v);

//This function will delete the node with the value v, and then return the head of the linked list.
Node * List_delete(Node * head, int v);

//This function will delete every node in a linked list.
void List_destroy(Node * head);

//This function will print the values in a linked list.
void List_print(Node * head);

#endif
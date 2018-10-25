#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

typedef struct listElementStruct{
  char* data;
  size_t size;
  struct listElementStruct* next;
} listElement;

typedef struct nodePtr
{
	struct nodePtr *next;
	char* data;
	listElement** list;
}nodePtr;

typedef struct node
{
	struct node *next;
	char* data;
	listElement** list;
}node;
//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  strcpy(dataPointer, data);
  e->data = dataPointer;
  e->size = size;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    printf("%s\n", current->data);
    current = current->next;
  }
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, char* data, size_t size){
  listElement* newEl = createEl(data, size);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

//Returns the number of elements in a linked list
int length(listElement* list) {
	listElement* current = list;
	int count = 0;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

//Push a new element. Update List Ref.
void push(listElement** list, char* data, size_t size) {
	/* allocate node */

	listElement * new_node;
	new_node = malloc(sizeof(listElement));
	/* put in the data */
	new_node->data = data;
	/* link the old list off the new node */
	new_node->next = (*list);

	/* move the head to point to the new node */
	(*list) = new_node;

}

//Populate element from the head. Update List Ref.
listElement* pop(listElement** *list) {
	node* prev;
	node* iter;
	listElement* popb;
	if (!list) return NULL;
	if (!list-> front) return NULL;
	prev = NULL;
	iter = list->front;
	while (iter != list->rear)
	{
		prev = iter; //not the rear, there must be a node after this
		iter = iter->next; //not null, could be rear
	}
	if (prev == NULL) { list->front = NULL; }
	else prev->next = NULL;
	printf("%f\n", list->rear->d->val);
	popb = list->tail->d;
	free(list->tail); //free old rear
	list->rear = prev;  //new rear
	return popb;
}

//Enqueue a new element onto the head. Update list Ref.
void enqueue(listElement** list, char* data, size_t size) {
	node* temp;
	node* front;
	node* rear;

	if (temp == NULL)
	{
		return 0;
	}
	else if (front == NULL && rear == NULL)
	{
		strcpy(temp->next, data);
		rear = temp;
		rear->next = NULL;
		front = rear;
		temp = NULL;
	}
	else
	{
		strcpy(temp->next, data); // copy input into temp->element

		// temp points to rear->next (it is always NULL, isn't it?)
		// we lost the Node300 previously pointed by temp.
		temp->next = NULL;
		
		temp = rear->next;

		// rear points to the same location as temp (NULL)
		rear = temp;

		// rear->next: dereferencing NULL /!\
        rear->next = NULL;

		temp = NULL;
	}
}

//Dequeue an element from the tail of the list.
listElement* dequeue(listElement* list) {
	nodePtr* temp ;
	nodePtr* front;
	nodePtr* rear;

	if (rear == NULL && front == NULL)
	{
		return NULL;
	}

	else if (front == rear)
	{
		strcpy(temp->next, list);
		temp = front;
		delete(temp);
		temp = NULL;
		front = NULL;
		rear = NULL;
	}

	else
	{
		strcpy(temp->next, list);
		temp = front;
		front = front->next;
		temp->next = NULL;
		delete(temp);
		temp = NULL;
	}
}

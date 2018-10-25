#ifndef CT331_ASSIGNMENT_LINKED_LIST
#define CT331_ASSIGNMENT_LINKED_LIST

typedef struct listElementStruct listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size);

//Prints out each element in the list
void traverse(listElement* start);

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* after, char* data, size_t size);

//Delete the element after the given el
void deleteAfter(listElement* after);

//Push a new element. Update List Ref.
void push(listElement** list, char* data, size_t size);

//Populate element from the head. Update List Ref.
listElement* pop(listElement** *list);

//Enqueue a new element onto the head. Update list Ref.
void enqueue(listElement** list, char* data, size_t size);

//Dequeue an element from the tail of the list.
listElement* dequeue(listElement* list);
#endif

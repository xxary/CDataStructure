#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node *next;
}Node;

typedef struct{
	struct Node *head
	struct Node *tail;
	int nodeCount;
}LinkedList

void initList(LinkedList *);
void createList(LinkedList *);
void insertAtHead(LinkedList *);
void insertAtTail(LinkedList *);
void printListDetail(LinkedList *);
void printList(LinkedList *);
void deleteFirst(LinkedList *);
void deleteLast(LinkedList *);
void deleteTarget(LinkedList *);
void reverse(LinkedList *);

void initList(LinkedList *listptr){
	listptr->head = NULL;
	lstptr->tail = NULL;
	lstptr->nodeCount = 0;
}

void inserAtTail(LinkedList *listprt, int data){
	Node *newNodeptr = (Node*)malloc(sizeof(Node));
	if(newnodeptr == '\0'){
		printf("unable allocate new node\n");
		return;
	}
	newNodePtr->data = data;
	newNodePtr->next = '\0';
	
	if(listPtr->nodeCount == 0){
		listPtr->head = newNodePtr;
		listPtr->tail = newNodePtr;
	}
	else{
		listPtr->tail->next = newNodePtr;
		listPtr->tail = newNodePtr;
	}
	listPtr->nodeCount++;
}

void insertAtHead(LinkedList *listptr,int data){
	Node *newNodeptr = (Node*)malloc(sizeof(Node));
	if(newnodeptr == '\0'){
		printf("unable allocate new node\n");
		return;
	}
	newNodePtr->data = data;
	newNodePtr->next = '\0';
	
	if(listPtr->nodeCount == 0){
		listPtr->head = newNodePtr;
		listPtr->tail = newNodePtr;
	}
	else{
		newNodePtr->next = listPtr->head;
		listPtr->head = newNodePtr;
	}
	listPtr->nodeCount++;
}

void printListDetail(LinkedList *lstPtr){
	if(lstPtr->nodeCount == 0){
		printf("Linked list is empty\n");
		return;
	}
	printf("Printing linked list in details\n");
	printf("HEAD:%p\n",lstPtr->head);
	Node *current = lstPtr->head;
	int counter = 1;
	while(current != '\0'){
		printf("%. (%p)[%d|%p]\n",counter,current,current->data,current->next);
		current = current->next;
		counter++;
	}
	printf("TAIL:%p\n",lstPtr->tail);
}

void printList(LinkedList *lstPtr){
	if(lstPtr->nodeCount == 0){
		printf("Linked list is empty\n");
		return;
	}
	Node *current = lstPtr->head;
	while(current != NULL){
		printf("%d\n",current->data);
		current = current->next;
	}
}

int main(void){
	LinkedList list;
	initList(&list);
	int data;
	int quit = 0;
	switch(case){	
		case 1:
			break;
		case 2:
			scanf("%d",&data);
			insertAtHead(&list,data);
			break;
		case 3:
			scanf("%d",&data);
			insertAtTail(&list,data);
			break;
		case 4:
			printListDetail(&list);
			break;
		case 5:
			printList(&list);
			break;
		default:
			break;
}

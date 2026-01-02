/*
 ============================================================================
 Name        : string.c
 Author      : sudheer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
////
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

typedef struct node{
	int data;
	struct node *next_node;
}node_s;

node_s *__head = NULL;

int init(char* data){

	__head=malloc(sizeof(node_s));
	if(!__head){
		printf("memory allocation failed \n");
		return -1;
	}

	__head->next_node=NULL;
	__head->data= data;

	printf("%d \n", __head->data);
	return 0;
}

//node is adding in the end
int Add_at_end(int data){
	node_s *cursor;
	node_s *n= malloc(sizeof(node_s));
    if(!n){
        printf("memory allocation failed \n");
        return -1;
    }

    // Initialize the new node with data and NULL pointer
	n->data = data;
	n->next_node = NULL;
	printf("%d \n", n->data);

	// Traverse to the last node in the linked list
	// O(n) time complexity - must visit each node until we find one with next_node == NULL
	for (cursor = __head; cursor->next_node != NULL; cursor = cursor->next_node) {
		 // Continue traversing until we reach the last node
	}
    // Link the last node to the new node
    cursor->next_node = n; //here storing ptr adress allocated in malloc

	return 0;

}


int main(void) {

	/*this i ssimple linked list and time 0(1) taking less time
	 *  easch node it add in the begining
	 * */
	init(101);
	Add_at_end(102);
	Add_at_end(103);
	return EXIT_SUCCESS;
}










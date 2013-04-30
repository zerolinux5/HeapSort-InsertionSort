/*Jesus Magana*/
/*jmagana7*/
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

struct heap{
	int length;
	int *array;
	int maxLength;
};

heapRef newHeap(int maxSize){
	heapRef H;
	int i = 0;
	int myarray[maxSize];
	for(i = 0; i < maxSize; i++){
		myarray[i] = 0;
	}
	H = malloc(sizeof(struct heap));
	H->maxLength = maxSize;
	H->length = 0;
	H->array = myarray;
	H->array = (int *) calloc(maxSize, sizeof(int));
	return H;
}

void freeHeap(heapRef* pH){
	if(pH!=NULL && *pH==NULL) {return;}
	free(*pH);
	*pH = NULL;
}

/** Access Functions**/
int isFull(heapRef h){
	return (h->length == h->maxLength);
}

int isEmpty(heapRef h){
	return (h->length == 0);
}

int maxValue(heapRef h){
	return (h->array[0]);
}

void printHeap(heapRef h){
	int n;
	printf("Heap Values");
	for(n = 0; n < (h->maxLength); n++){
		printf(" : %d", h->array[n]);
	}
	printf("\n");
}

void deleteMax(heapRef h){
	h->array[0] = 0;
	h->length--;
}

void insert(heapRef h, int priority){
	h->array[(h->length)]= priority;
	h->length++;
}




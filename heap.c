/*Jesus Magana*/
/*jmagana7*/
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

typedef struct heap{
	int length;
	int *array;
	int maxLength;
} heap;

heap newHeap(int maxSize){
	heap H;
	int myarray[maxSize] = malloc(maxSize*sizeof(int));
	H = malloc(sizeof(heap));
	H->maxLength = maxsize;
	H->length = 0;
	H->array = myarray;
	return H;
}

/** Access Functions**/
int isFull(heap h){
	return h->length == h->maxLength;
}

int isEmpty(heap h){
	return h->length == 0;
}

int maxValue(){
	return h->array[0];
}

void printHeap(heap h){
	int n;
	printf("Heap Values:");
	for(n = 0; n < h->maxLength; n++){
		printf("%d : ", h->array[n]);
	}
	printf("\n");
}




/*Jesus Magana*/
/*jmagana7*/
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

void heapify(heapRef h);
void swap(int i, int j);
void heapifyDown(heapRef h);

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
	heapifyDown(h);
}

void insert(heapRef h, int priority){
	h->array[(h->length)]= priority;
	h->length++;
	heapify(h);
}

void heapify(heapRef h){
	int i = h->length-1;
	while(1){
		if(h->array[i] > h->array[(i-1)/2]){
			/*swapping the values*/
			int temp = h->array[i];
			h->array[i] = h->array[(i-1)/2];
			h->array[(i-1)/2] = temp;
			i = (i-1)/2;
		}
		if(h->array[i] <= h->array[(i-1)/2]){
			break;
		}
	}
}

void heapifyDown(heapRef h){
	int i = 1;
	h->array[1-1] = 0;
	while(1){
		int j = 2*i;
		int k = 2*i+1;
		int temp = 0;
		if(h->array[j-1] > h->array[k-1]){
			temp = h->array[j-1];
		} else {
			temp = h->array[k-1];
		}
		if(h->array[i-1] < h->array[temp]){
			int temp2 = h->array[i-1];
			h->array[i-1] = h->array[temp];
			h->array[temp] = temp2;
			i = temp;
		} else {
			break;
		}
	}
}



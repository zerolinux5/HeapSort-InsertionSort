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

/*here we make an array of size maxSize, then set all the values to zero and */
/*set the array pointer of the heap to the array*/
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

/*Here we build a heap using an array, the current number, and the maximum size of the array*/
heapRef buildHeap (int maxSize, int data[], int numData){
	heapRef H = newHeap(maxSize);
	int i;
	for(i = 0; i < numData; i++){
		insert(H, data[i]);
	}
	return H;
}

/*Here we free the heap and all its values*/
void freeHeap(heapRef* pH){
	heapRef H = *pH;
	free(H->array);
	free(H);
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

/*Here we pront out the values of the heap for testing*/
void printHeap(heapRef h){
	int n;
	printf("Heap Values");
	for(n = 0; n < (h->maxLength); n++){
		printf(" : %d", h->array[n]);
	}
	printf("\n");
}
/*This will set the top value to zero and then heapify it down to the bottom*/
void deleteMax(heapRef h){
	if(h->array[0] == 0){
		printf("Trying to delete when no value.\n");
	} else {
		h->length--;
		heapifyDown(h);
	}
}

/*This will insert the value at the curernt spot of length and then */
/*it will compare to the parent until it is in the correct place*/
void insert(heapRef h, int priority){
	if(h->length == h->maxLength){
		printf("Trying to insert when full.\n");
	} else {
		h->array[(h->length)]= priority;
		h->length++;
		heapify(h);
	}
}

/*Here is where the comparison and swaps are done for insertion*/
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

/*Here is where the comparison and swaps are done for deleteMax*/
void heapifyDown(heapRef h){
	int i = 1;
	h->array[0] = 0;
	int flag = 0;
	while(1){
		if(i >= h->maxLength){
			break;
		}
		int j = 2*i;
		int k = 2*i+1;
		int temp = 0;
		if(h->array[j-1] > h->array[k-1]){
			temp = h->array[j-1];
			flag = 1;
		} else {
			temp = h->array[k-1];
			flag = 2;
		}
		if(h->array[i-1] < temp){
			if(flag == 1){
				int temp2 = h->array[i-1];
				h->array[i-1] = h->array[j-1];
				h->array[j-1] = temp2;
				i = j;
			} else {
				int temp2 = h->array[i-1];
				h->array[i-1] = h->array[k-1];
				h->array[k-1] = temp2;
				i = k;
			}
		} else {
			break;
		}
	}
}



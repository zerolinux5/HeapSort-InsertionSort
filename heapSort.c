/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heapSort.h"
#include "heap.h"

void heapSort(int keys[],int numKeys){
	int i;
	heapRef H = newHeap(numKeys);
	for(i = 0; i<numKeys;i++){
		insert(H, keys[i]);
	}
	printHeap(H);
	int j = 0;
	for(j = 0; j< numKeys; j++){
		keys[j] = maxValue(H);
		deleteMax(H);
	}
	freeHeap(&H);
}

int main(int argc, char *argv[]){
	int key[]={2,3,1,4,21,4};
	heapSort(key,6);
	int i;
	printf("The array contains \n");
	for(i = 0;i<6;i++){
		printf(" : %d\n",key[i]);
	}
	return 0;
}
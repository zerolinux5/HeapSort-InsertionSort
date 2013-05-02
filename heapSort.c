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
	int j;
	for(j = numKeys-1; j>0; j--){
		keys[j] = maxValue(H);
		deleteMax(H);
	}
	freeHeap(&H);
}

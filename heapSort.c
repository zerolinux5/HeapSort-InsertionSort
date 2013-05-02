/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heapSort.h"
#include "heap.h"

/*this function will make a heap using heap.h and then it will insert the array*/
/*the array will be sorted with max on top so we will get the value of the max*/
/*and set that equal to the original array thus being sorted*/
void heapSort(int keys[],int numKeys){
	int i;
	heapRef H = newHeap(numKeys);
	for(i = 0; i<numKeys;i++){
		if(!isFull(H))
			insert(H, keys[i]);
	}
	int j;
	for(j = numKeys-1; j>0; j--){
		keys[j] = maxValue(H);
		if(!isEmpty(H))
			deleteMax(H);
	}
	freeHeap(&H);
}

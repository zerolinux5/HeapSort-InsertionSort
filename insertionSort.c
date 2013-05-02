/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "insertionSort.h"

void insertionSort(int keys[],int numKeys){
	int pointerOut, pointerIn, swap;

	for (pointerOut = 1 ; pointerOut < numKeys; pointerOut++) {
    pointerIn = pointerOut;
 
    while ( pointerIn > 0 && keys[pointerIn] < keys[pointerIn-1]) {
      swap = keys[pointerIn];
      keys[pointerIn]  = keys[pointerIn-1];
      keys[pointerIn-1] = swap;
 
      pointerIn--;
    }
  }
}

int main(int argc, char *argv[]){
	int key[] ={2,1,3,4,12,4};
	insertionSort(key, 6);
	int i;
	printf("The array contains \n");
	for(i = 0;i<6;i++){
		printf(" : %d\n",key[i]);
	}
	return 0;
}
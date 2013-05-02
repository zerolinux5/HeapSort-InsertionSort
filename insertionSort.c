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

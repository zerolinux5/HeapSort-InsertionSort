/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "insertionSort.h"

/*This will take an array and using a pointer to the curernt value*/
/*will step through the values on the left and sort them. Once that*/
/*is done it will move the current pointer to the next value and*/
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

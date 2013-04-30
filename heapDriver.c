/*Jesus Magana */
/*jmagana7 */
/*pa2*/

#include <stdio.h>
#include <stdlib.h>
#include "heap.h"

int main(int argc, char *argv[]){
	heapRef H = newHeap(5);
	printf("%d\n", isEmpty(H));
	insert(H, 100);
	insert(H, 50);
	printf("%d\n", isEmpty(H));
	printHeap(H);
	freeHeap(&H);
	return 0;
}
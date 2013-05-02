#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "heapSort.h"
#include "insertionSort.h"

int main(int argc, char *argv[]){
        FILE *in;
        clock_t startTime, duration;
        int i;
        int j;

        in = fopen(argv[1], "r");
        if(in==NULL){
                printf("unable to open file %s for reading\n", argv[1]);
                exit(1);
        }

        int numOfKeys;
        fscanf(in, "%d", &numOfKeys);
        int keys[numOfKeys];
        int keys2[numOfKeys];
        /*read in the numbers and set them inside both arrays*/
        for(i = 0; i < numOfKeys;i++){
        	fscanf (in, "%d", &j);
        	keys[i] = j;
        	keys2[i] = j; 
        }

        /*Here both sorting times will be clocked and displayed*/
        startTime = clock();
        heapSort(keys,numOfKeys);
        duration = clock() - startTime;
        printf ("HeapSort took %f seconds.\n", ((float) duration ) / CLOCKS_PER_SEC);
        startTime = clock();
        insertionSort(keys2,numOfKeys);
        duration = clock() - startTime;
        printf ("InsertionSort took %f seconds.\n", ((float) duration ) / CLOCKS_PER_SEC);
        printf("\n");
        fclose(in);
        return(0);
}
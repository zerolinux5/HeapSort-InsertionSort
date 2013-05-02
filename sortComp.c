#include <stdio.h>
#include <stdlib.h>
#include "heapSort.h"
#include "insertionSort.h"

int main(int argc, char *argv[]){
	    FILE *in;
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
        for(i = 0; i < numOfKeys;i++){
        	fscanf (in, "%d", &j);
        	keys[i] = j;
        	keys2[i] = j; 
        }
        heapSort(keys,numOfKeys);
        insertionSort(keys2,numOfKeys);


        printf("\n");
        fclose(in);
        return(0);
}
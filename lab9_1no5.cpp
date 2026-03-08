#include<stdio.h>

void muliplyMatrix(int a[], int b[], int P[], int size); 

int main() {
	int size;
		
		printf("Enter N = ");
		scanf("%d", &size);
		int x[size], y[size];
		
		printf("Input array A\n");
		printf("Enter %d integers: ",size);
    	for (int i = 0; i < size; i++) {
        	scanf("%d", &x[i]);
   		}
   		
    	printf("Input array B\n");
    	printf("Enter %d integers: ",size);
    	for (int i = 0; i < size; i++) {
        	scanf("%d", &y[i]);
    	}
    	
		int P[size][size];
    	muliplyMatrix(x,y,&P[0][0],size); 
    	
    	printf("Matrix P\n");
    	for (int i = 0; i < size; i++) {
    		for (int j = 0; j < size; j++) {
        		printf("%d ", P[i][j]);
    		}
    		printf("\n");
   		}

}

void muliplyMatrix(int a[], int b[], int P[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            P[i*size+j] = a[i]*b[j];
        }
    }
}

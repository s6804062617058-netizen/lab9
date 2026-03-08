#include <stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 
int main() {
int a = 1, b = 2, c = 3;
int size;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	scanf("%d",&size);
	int a1[size],b1[size];
	for(int i=0;i<size;i++){
		scanf("%d",&a1[i]);
	}
	
	for(int i=0;i<size;i++){
		scanf("%d",&b1[i]);
	}
	
	printf("After swap function\n");
	for(int i=0;i<size;i++){
		printf("a=%d, b=%d\n", a1[i], b1[i]);
	}
	swapArray(a1,b1,size);
		printf("Before swap function\n");
	for(int i=0;i<size;i++){
		printf("a=%d, b=%d\n", a1[i], b1[i]);
	}
}

void swapValue(int *a, int *b, int *c){
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void swapArray(int a[], int b[], int size){
	int temp,i;
	for(i=0;i<size;i++){
		temp = *(a+i);
		*(a+i) = *(b+i);
		*(b+i) = temp;
	}
}

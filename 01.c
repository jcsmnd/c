//Myungsik Kim
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 101

void swap(int *x, int *y, int t) //int x[],int y[]
{
	t = *x;
	*x = *y;
	*y = t;
}

void sort(int list[], int n)  
{
	int i, j, min, temp=0;
	
	for(i=0; i<n-1; i++){
		min=i;
		for(j=i+1; j<n; j++)
			if(list[j]<list[min])
				min=j;
		swap(&list[i], &list[min], temp);
	}
}

void main()
{
	int i,n;
	int list[MAX_SIZE];
	printf("input number: ");
	scanf_s("%d",&n);
	
	if(n<101 || n>0)

	for(i=0; i<n; i++){
		list[i] = rand() % 1000;
		printf("%d \n", list[i]);
	}

	sort(list, n);
	printf("Sorted array:\n");
	for(i=0; i<n; i++)
		printf("%d \n", list[i]);
}
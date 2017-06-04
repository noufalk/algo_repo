#include<stdio.h>

int main()
{
	unsigned int max;
	unsigned int items[100];
	unsigned int n;

	printf("\nEnter max capacity: ");	
	scanf("%d",max);

	printf("\nNumber of items: ");
	scannf("%d",n);

	printf("\nEnter the items:");	

	int i;
	for(i = 0; i n; i++){
		scanf("%d",items[i]);
	}

	knapsack(items, max, n);


	return 0;
}

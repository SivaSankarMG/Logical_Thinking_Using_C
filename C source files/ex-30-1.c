#include <stdio.h>

int main()
{
	int arr[10];
	long int KNUMB =0;
	int i=0;

	printf("Enter values of array:\n");
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=7;i++)
	{
		KNUMB = (KNUMB*10)+arr[i];
	}
	
	printf("KNUMB = %ld\n",KNUMB);
	printf("KNUMB*2 = %ld",KNUMB*2);
}



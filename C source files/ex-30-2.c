#include <stdio.h>

int main()
{
	char l[5];
	int r[2][3]; /*Considered there are two numbers in a txt file*/
	int no =0;
	int i,tmp,j=0;
	FILE *f;
	
	f = fopen("C:\\Users\\Siva Sankar\\Desktop\\Datas\\Data-30-2.txt","r");
	
	printf("Values in text file :\n");
	while(fgets(l,5,f) != NULL)
	{
		sscanf(l,"%d",&no);
		printf("%d\n",no);
		tmp = no;
		for(j=0;j<=2,tmp>0;j++)
		{
			r[i][j] = (int)tmp%10;
			tmp =(int)tmp/10;
			
		}
		i++;
	}
	printf("\nValues in Array :\n");
	for(i=0;i<2;i++)  /*Considered there are two numbers in a txt file*/
	{	
		for(j=2;j>=0;j--)
		{
			printf("%d",r[i][j]);	 
		
		}
		printf("\n");
	}
	fclose(f);
}



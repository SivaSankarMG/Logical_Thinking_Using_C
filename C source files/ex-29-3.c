#include <stdio.h>

int main()
{
	char ch[6];
	char* roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
	int decimal[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
	int dn,i = 0;

	FILE *f;
	
	f = fopen("C:\\Users\\Siva Sankar\\Desktop\\Datas\\Data-29-3.txt","r");
	
	printf("Decimal  Roman\n");
	while(fgets(ch,6,f) != NULL)
	{	
		sscanf(ch,"%d",&dn);
		printf("%-7d  ",dn);
		
		for(i=0;dn>0;i++)
		{
			while(dn>=decimal[i])
			{
				printf("%s",roman[i]);
				dn -= decimal[i];
			}
		}
		printf("\n");
	}
	
	fclose(f);	  
}


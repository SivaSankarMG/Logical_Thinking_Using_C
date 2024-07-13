#include <stdio.h>

int main()
{
	int dep = 0;
	int item = 0;
	int qty = 0;
	int tmp = 0;
	float cost = 0;
	float val = 0;
	float tot = 0;
	float gtot = 0;
	char ch[30];
	
	FILE *f;
	f = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-28-3.txt","r");
	
	sscanf(fgets(ch,30,f),"%d %d %d %f",&dep,&item,&qty,&cost);
	tmp = dep;
	val = qty * cost;
	tot = tot + val;
	printf("Department  Item  Quantity  Cost/Item    Value        Total\n");
	printf("%-10d  %4d  %8d  %9.2f  %7.2f",dep,item,qty,cost,val);
	while(fgets(ch,30,f) != NULL)
	{
		sscanf(ch,"%d %d %d %f",&dep,&item,&qty,&cost);
		val = qty * cost;
		if(tmp == dep)
		{	
			tot = tot + val;
			printf("\n%-10d  %4d  %8d  %9.2f  %7.2f",dep,item,qty,cost,val);
		}
		else
		{
			printf(" %12.2f",tot);
			gtot = gtot + tot;
			tot = 0;
			tmp = dep;
			tot = tot + val;
			printf("\n%-10d  %4d  %8d  %9.2f  %7.2f",dep,item,qty,cost,val);
		}
		
	}
	printf(" %12.2f\n",tot);
	gtot = gtot + tot;
	printf("                                   Grand Total %12.2f",gtot);
	
	fclose(f);
}


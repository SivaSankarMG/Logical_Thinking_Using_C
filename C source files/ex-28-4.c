#include <stdio.h>

int main()
{
	int price = 0;
	int hc = 0;
	int pc = 0;
	int pcsum = 0;
	int tmp = 0;
	int totbooks = 0;
	float avgcost = 0;
	float avgpccost = 0;
	float minhard = 100000000;
	float totsales = 0;
	char ch[30];
	
	FILE *f;
	f = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-28-4.txt","r");
	
	while(fgets(ch,30,f) != NULL)
	{
		sscanf(ch,"%d %d",&price,&tmp);
		totsales = totsales + price;
		totbooks += 1;
		
		if(tmp == 1)
		{
			hc++;
			
			if(minhard > price)
				minhard = price;
			
		}
		else
		{
			pc++;
			pcsum += price; 
		} 
	}
	avgcost = totsales / totbooks;
	avgpccost = pcsum / pc;
	
	printf("Total Sales                         : %.2f Rs.\n",totsales);
	printf("Total No. of Books sold             : %d\n",totbooks);
	printf("Average Price per book              : %.2f Rs.\n",avgcost);
	printf("Minimum Price of a Hardback book    : %.2f Rs.\n",minhard);
	printf("Average price of a paperback book   : %.2f Rs.\n",avgpccost);
	
	fclose(f);
}


#include <stdio.h>

int main()
{
	int code = 0;
	float cost = 0;
	float gtot = 0;
	float st1 = 0;
	float st2 = 0;
	float st3 = 0;
	float st4 = 0;
	char des[20];
	char ch[80];
	
	FILE *f;
	f = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-28-5.txt","r");
	
	printf("                               Budget Analysis\n\n");
	printf("                    Household    Medical    Recreation    Utility Bills\n");
	while(fgets(ch,80,f) != NULL)
	{
		sscanf(ch,"%s %f %d",&des,&cost,&code);
		
		if(code == 1)
		{
			printf("%17s  %10.2f\n",des,cost);
			st1 += cost;
		}
		if(code == 2)
		{
			printf("%17s  %21.2f\n",des,cost);
			st2 += cost;
		}
		if(code == 3)
		{
			printf("%17s  %35.2f\n",des,cost);
			st3 += cost;
		}
		if(code == 4)
		{
			printf("%17s  %52.2f\n",des,cost);
			st4 += cost;
		}
	}
	gtot = st1 + st2 + st3 + st4;
	printf("\n         Subtotal  %10.2f  %9.2f  %12.2f  %15.2f\n\n",st1,st2,st3,st4);
	printf("                          Total Expenses  $ %.2f",gtot);
	
	fclose(f);
}


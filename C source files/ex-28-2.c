#include <stdio.h>
int main()
{
	int cn = 0;
	float lbal = 0;
	float cbal = 0;
	float bal = 0;
	int amt = 0;
	float debit =0;
	float credit = 0;
	char ch[50];
	
	FILE *f;
	f = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-28-2.txt","r");
	
	if(fgets(ch,80,f) != "\t")
		sscanf(ch,"%f",&lbal);
	printf("Cheque no.    Withdrawal       Deposit     Balance $\n");
	printf("                                      %14.2f\n",lbal);

	while(fgets(ch,80,f) != NULL)
	{
		sscanf(ch,"%d %d",&cn,&amt);
		if(amt>0)
		{
			credit = amt;
			bal = lbal+credit;
			lbal = bal;
			printf("%-10d	 %21.2f  %12.2f\n",cn,credit,bal);
		}
		else
		{
			debit = amt;
			bal = lbal+debit;
			lbal = bal;
			printf("%-10d	 %7.2f  %26.2f\n",cn,debit,bal);
		}
	}
	printf("\n\n                             New Balance  %10.2f\n",lbal);
	fclose(f);
}


#include <stdio.h>
int main()
{
	int hrs=0; 
	int r = 5; 
	char ch[5];
	float pay = 0;
	int ot = 0;
	
	FILE *fp;
		  
	printf("Hours	Rate	OT Hours	    Pay\n");
	
	fp = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-28-1.txt","r");
	while(fgets(ch,5,fp) != NULL)
	{	
		
		sscanf(ch,"%d",&hrs);
		
		if(hrs > 40)
			ot = hrs-40;
		else
			ot = 0;
				  
		if(hrs > 40)
			pay = (40*5)+((ot)*(1.5*5));
		else
			pay = hrs*r;
			
		printf("%d.00	 %d.0	%8d    %11.2f\n",hrs,r,ot,pay);
		
	}
	fclose(fp);
}


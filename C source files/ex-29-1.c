#include <stdio.h>
int main()
{
	int task = 0;
	int days = 0;
	int sc = 0;
	int spc = 3;
	int i,j = 1;
	char des[50];
	char ch[50];
	char s;
	
	FILE *f;
	f = fopen("C:\\Users\\Siva Sankar\\Desktop\\Datas\\Data-29-1.txt","r");
	
	printf("Tasks\n");
	while(fgets(ch,50,f) != NULL)
	{	
		s = '*';
		sscanf(ch,"%d %s %d",&task,&des,&days);
		sc = days;
		printf("%d",task);
		for(i=1;i<=spc;i++)
		{	 printf(" ");}
		
		for(j=1;j<=sc;j++)
		{	 printf("%c",s);}
		
		printf("\n");
		spc += sc; 
	}
	printf("    --------------------------------------------------------------------\n");
	printf("    00000000011111111112222222222333333333344444444445555555555666666666\n");
	printf("    12345678901234567890123456789012345678901234567890123456789012345678\n\n");
	printf("                           Time Duration Segments");
	
	
	fclose(f);
}


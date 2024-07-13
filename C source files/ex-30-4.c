#include <stdio.h>
int main()
{	
	double v,sum = 0;
	char ch[100];
	FILE *f;
	
	f = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-30-4.txt","r");
	while(fgets(ch,100,f) != NULL)
	{
		sscanf(ch,"%lf",&v);
		sum += v;
	}
	
	printf("%lf",sum);
	fclose(f);
}

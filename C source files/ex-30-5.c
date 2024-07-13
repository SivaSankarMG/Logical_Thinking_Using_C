#include <stdio.h>

int main()
{
	float sr[110][10];
	char ch[50];
	char r[60];
	char name[2][20];
	int i,j,tot = 0;
	int s1,s2,s3,s4,s5 = 0;
	float apt1,apt2,apt3,apt4,apt5 = 0;
	FILE *f;
	
	f = fopen("C:\\Users\\Siva Sankar\\Documents\\C Programs\\Logical Thinking\\DataFiles\\Data-30-5.txt","r");
	
	while(fgets(r,50,f) != NULL)
	{
		
		sscanf(r,"%s %f %f %f %f %f",&name[i],&sr[i][0],&sr[i][1],&sr[i][2],&sr[i][3],&sr[i][4]);
		tot = sr[i][0]+sr[i][1]+sr[i][2]+sr[i][3]+sr[i][4];
		sr[i][5] = tot / 5.0;
		s1 += sr[i][0];
		s2 += sr[i][1];
		s3 += sr[i][2];
		s4 += sr[i][3];
		s5 += sr[i][4];
		i++;
	
	}
	apt1 = (float)s1/i;
	apt2 = (float)s2/i;
	apt3 = (float)s3/i;
	apt4 = (float)s4/i;
	apt5 = (float)s5/i;
	
	printf("Name          Test1  Test2  Test3  Test4  Test5  Average\n");
	for(i=0 ; i<2 ;i++)
	{
		printf("%-12s  %5.1f  %5.1f  %5.1f  %5.1f  %5.1f  %5.1f\n",name[i],sr[i][0],sr[i][1],sr[i][2],sr[i][3],sr[i][4],sr[i][5]);	        
	}
	printf("\nAvg/test    %5.1f  %5.1f  %5.1f  %5.1f  %5.1f",apt1,apt2,apt3,apt4,apt5);
	
	fclose(f);
}


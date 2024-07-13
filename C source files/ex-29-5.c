#include <stdio.h>
#include <string.h>
int main()
{
	char ch[30] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch1[30] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	char txt[600];
	char res[600];
	int i,j = 0;
	FILE *f;
	
	f = fopen("C:\\Users\\Siva Sankar\\Desktop\\Datas\\Data-29-5.txt","r");
	printf("Message after Encoding :\n");
	while(fgets(txt,600,f) != NULL)
	{	
		strcpy(res,txt);
		for(i=0 ; i<=strlen(txt) ; i++)
		{
			if(txt[i]>='A' && txt[i]<='Z')
			{
				for(j=0 ; j<=strlen(ch) ; j++)
				{
					if(txt[i] == ch[j])
					{
						res[i] = ch1[j];		
					}
				}
			}	 
			else
				res[i]=txt[i];
		}
		printf("%s",res);
	}
	
	fclose(f);	  
}


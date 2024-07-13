#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char* str) 
{
    int len = strlen(str);
	int i =0;
    for (i = 0; i < len / 2; i++) 
	{
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
	char ch[600];
	char line[600];
	char words[50];
	char c;
	int i,j = 0;
	
	FILE *f;
	
	f = fopen("C:\\Users\\Siva Sankar\\Desktop\\Datas\\Data-29-4.txt","r");
	
	
	printf("Reversing each sentences :\n");
	while (fgets(line, 600, f) != NULL) 
	{
        char *word = strtok(line, ".");
        while (word != NULL) 
		{
            reverseString(word);
            printf("%s.", word);
            word = strtok(NULL, ".");
        }
	}
	fclose(f);
	
	f = fopen("C:\\Users\\Siva Sankar\\Desktop\\Datas\\Data-29-4.txt","r");
	printf("\n\nReversing each word :\n");
	while ((c=fgetc(f)) != EOF) 
	{
		
		if(c != 32 && c != '.')
		{
			words[i]=(char)c;
			
			i++;
		}
		else
		{
			
			reverseString(words);
			printf("%s\n",words);
			i=0;
			
			for(j=0;j< strlen(words);j++)
			{	 words[j]=' ';}  
			
		}
	}
		
    	
	
	fclose(f);	  
}


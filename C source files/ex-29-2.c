#include <stdio.h>

int main()
{	
	int n,m,i,j,k,t,e = 0 ;
	int D[] = {50,40,30,20,10};
	n=5;
	
	
	m = n;
g1:
	m = (int)m/2;
	
	if(m = 0)
		return;
	else
	{
		k = n-m;
		j = 1;
	 g2:
		i =j;
	 g3:	
		if(D[i] > D[i+m])	  
		{
			t = D[i];
			D[i] = D[i+m];
			D[i+m] = t;
			i = i-m;
			
			if(i<1)
			{
				j=j+1;
				if(j > k)
					goto g1;
				else
					goto g2;	   
			}
			else
				goto g3;
		}
		else
		{
			j=j+1;
			if(j > k)
				goto g1;
			else
				goto g2;
		}
	}
	
	printf("%d",D[0]);
}


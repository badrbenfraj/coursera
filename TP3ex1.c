#include <stdio.h>
int main()
{
	int n;
	int t[20];
	scanf("%d",&n);
	int i,mat,min,max,p,pmin;
	for (int i = 1; i <=n; i++)
	{
		scanf("%d",&t[i]);
	}
	for (int i = 2,max=t[1]; i <=n; i++)
	{
	p=1;
		if (t[i]>max)
		{
			max=t[i];
			p=p+1;
		}
		printf("le max est %d et sa position est %d \n",max,i);
	}
	for (int i = 2,min=t[1]; i <=n; i++)
	{
		pmin=0;
		if (t[i]<min)
		{
			min=t[i];
			pmin=i;
		}
		printf("le min est %d et sa position est %d\n",min,pmin);
	}
	return 0;
}
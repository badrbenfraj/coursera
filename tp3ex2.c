#include <stdio.h>
int main(void)
{
	int j,val,n;
	int a[20];
	int b[20];
		printf("donnez la taille de tb n: ");
		scanf ("%d",&n);
	for (int i = 0; i<=n;i++)
	{
		do
		{
		printf("donnez a[%d]",i);
		scanf("%d",&a[i]);
 		}while ((a[i]<a[i-1])||(i>=n));

 	}
	scanf ("%d",&val);
	for (int i = 1,j=1; i<=n; i++)
	{
		if (a[i]<val)
		{
			b[j+1]=a[i];
		}
	}
	for (i = 0; i < num; i++) {
    	a[i] = b[i];
   }
	printf("%d ",b[j+1]);
	
}
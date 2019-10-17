#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	printf("Enter the number of lines:\n");
	int n,i,j,k,l;
	scanf("%d",&n);
	printf("\nThe output is:-\n");
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=(n-i);k++)
		printf(" ");
		for(l=1;l<=(i-1);l++)
		printf("%d",l);
		for(j=i;j>=1;j--)
		printf("%d",j);
		printf("\n");
	}
	for(i=1;i<=(n-1);i++)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		for(l=1;l<=(n-1-i);l++)
		printf("%d",l);
		for(j=n-i;j>=1;j--)
		printf("%d",j);
		printf("\n");
		
	}

	return 0;
}

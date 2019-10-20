#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[100], n,min,i,j,temp;
   printf("Enter the size of array \n");
   scanf("%d",&n);
   printf("\nenter array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(a[j] > a[j+1])
	{
	   temp = a[j];
	   a[j] = a[j+1];
	   a[j+1] = temp;
	}
	}
	}
   printf("\nSorted array using Bubble sort\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
return 0;
}

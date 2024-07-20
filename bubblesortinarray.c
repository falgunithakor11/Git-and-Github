#include<stdio.h>
void main()
{
	int a[50],i,j,n,temp;
	printf("Enter the Size of array\n");
	scanf("%d",&n);
	printf("array Elements before sorting\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array Element after sorting\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
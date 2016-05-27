//////***q
#include<stdio.h>
int main()
{
	int n,t,i,j;
	printf("Enter the no of elements :\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the Elements of the Sequence : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		a[i]=t;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("The Elements of the Sorted Sequence is : \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
} 

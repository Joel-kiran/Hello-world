#include<stdio.h>
void Quicksort(int [],int,int);
int Partition(int [],int,int);
int main()
{
	int A[30];
	int i,j,k,n,input;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&input);
		for(j=0;j<input;j++)
		{
			scanf("%d",&A[j]);
		}
		Quicksort(A,0,input-1);
		j=j+1;
		printf("The Elements of the Sorted Array are : \n");
		for(k=0;k<input;k++)
			printf("%d\n",A[k]);
	}
}
void Quicksort(int a[],int min,int max)
{	
	int s;
	if(min<max)
	{
		s=Partition(a,min,max);
		Quicksort(a,min,s-1);
		Quicksort(a,s+1,max);
	}
	
}

int Partition(int a[],int min,int max)
{
	int i=min+1,j=max;
	int temp;
	while(i<=j)
	{
		while(i<=j && a[i]<=a[min]) 
			i=i+1;
		while(i<=j && a[j]>a[min])
			j=j-1;
		if(i<j)
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	temp=a[j];
	a[j]=a[min];
	a[min]=temp;
	return j;
}





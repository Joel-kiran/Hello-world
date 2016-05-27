#include<stdio.h>
#include<stdlib.h>
int * Insertionsort(int * p,int size);
int main()
{
	int size,i;
	scanf("%d",&size);
	int *p=malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&p[i]);
	}
	p=Insertionsort(p,size);
	printf("------------------\n");
	for(i=0;i<size;i++)
		printf("%d\n",p[i]);
	return 0;
}
int * Insertionsort(int * p,int size)
{
	int i,j,min,temp,k;
	for(i=0;i<=size-1;i++)
	{
		min=i;
		for(j=0;j<i;j++)
		{
			if(p[min]<p[j])
			{
				min=j; 
				break;
			}
		}
		temp=p[i];
		for(k=i;k>min;k--)
		{
			p[k]=p[k-1];
		}
		p[min]=temp;
	}
	return p;
}
			
			
				  
		   
			




#include<stdio.h>
main()
{
	int a[10],i,n,x,pos=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search number:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			pos=i+1;
			break;
		}
	}
	if(pos==-1)
	{
		printf("Data is not found\n");
	}
	else 
	printf("your searching position is:%d\n",pos);
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20],i,n,cost=0;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>0 && arr[i]<17)
		cost+=200;
		else if(arr[i]>=17 && arr[i]<40)
		cost+=400;
		else if(arr[i]>=40 && arr[i]<=120)
		cost+=300;
		else
		printf("Enter age between 1 to 120");
	}
	printf("%d INR",cost);
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,sum=0,x=0,y=1,count1=0,count2=0;
	clrscr();
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		x=y;
		y=sum;
		sum=x+y;
		printf("%d \n",sum);
		if(sum%2==0)
		count1=count1+1;
		else if(sum%2!=0)
		count2=count2+1;
	}
	printf("%d\n",count1);
	printf("%d",count2);
	getch();
}
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	int first=0,second=1,next;
	
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",first);
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
}

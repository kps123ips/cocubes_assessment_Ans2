#include<stdio.h>
int main()
{
	char state, T,H;
	int n;
	printf("Enter state of a coin");
	scanf("%c",&state);
	printf("Enter value of n");
	scanf("%d",&n);
	if(state=='T'&& n%2==0)
	printf("State is %c",state);
	else
	printf("State is H ");
	if(state=='H'&&n%2==0)
	printf("State is %c",state);
	else
	printf("State is T");
	getch();
	
	
}

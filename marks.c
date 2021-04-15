#include<stdio.h>
int main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	if (mark>=85 && mark<=100)
    {
    	printf("GRADE A");
	}
    else if (mark>=70 && mark<=84)
    {
    	printf("GRADE B");
	}
	else if (mark>=55 && mark<=69)
    {
    	printf("GRADE C");
	}
	else if (mark>=40 && mark<=54)
    {
    	printf("GRADE D");
	}
	else
	{
    	printf("GRADE E");
	}
return 0;
}

#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter value A :");
	scanf("%d",&a);
	printf("enter value B :");
	scanf("%d",&b);
	printf("enter value C :");
	scanf("%d",&c);
	
	(a>b) ? (a>c) ? printf("A is max") :
			 printf("C is max")
			:(b>c) ? printf("B is max") :
			 printf("C is max");
			 
}

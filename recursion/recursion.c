#include<stdio.h>

void fun(int a)
{
	printf("%d",a);
	fun(a-1);
}


int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	fun(a);

}
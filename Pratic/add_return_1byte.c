


#include<stdio.h>
int result(char z);
int add(int x,int y)
{
	int s=x+y;
	printf("%d\n",s);
	int (*c1)(char)=result;
	c1(s);
}
int result(char z)
{
	int i;
	int num=(int)z;
	printf("%d\n",num);
	printf("num in one byte:\n");
	for(i=7;i>=0;i--)
		printf("%d ",(num>>i)&1);
}
int main()
{
	int a=250,b=50;
	int (*c)(int,int)=add;
	c(a,b);
	printf("\n");
}

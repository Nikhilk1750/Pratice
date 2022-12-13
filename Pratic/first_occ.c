#include<stdio.h>
int cnt=0;
char str_cmp(char *s,char c)
{
	int i;
	for(i=0;s[i];i++)
	{
		cnt++;
		if(s[i]==c)
			return c;
	}
	return 0;
}
int main()
{
	char str[50],c;
	printf("Enter the String:");
	scanf("%s",str);
	printf("Enter the character:");
	scanf(" %c",&c);
	int p=str_cmp(str,c);
	if(p==0)
		printf("No character in string\n");
	else
		printf("Character in String is %s =  %c in %d\n",str,p,cnt);
}

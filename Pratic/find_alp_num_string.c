#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Nikhil@1750,.";
	int i,cnt1=0,cnt2=0,cnt3=0,len;
	len=strlen(str);
//	str[len]=0;
	printf("%s\n %d\n",str,len);
	for(i=0;i<len;i++)
	{
		if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')))
			cnt1++;
		else if((str[i]>='0')&&(str[i]<='9'))
			cnt2++;	
		else
			cnt3++;
		
	}
		printf("Number of Letters in string=%d\n",cnt1);
		printf("Number of Digits in string=%d\n",cnt2);
		printf("Number of special char in string=%d\n",cnt3);
}


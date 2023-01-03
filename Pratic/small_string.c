#include <stdio.h>
#include<stdlib.h>
#include<string.h>
char small_str(char *);
int main()
{

   char *sr;
   sr=(char*)malloc(50);
    sr="today i have mock";
    char (*fp)(char*)=small_str;
    fp(sr);

}

char small_str(char *str)
{
    int cnt=0,small=0,pos=0,i;
    char *temp;
    int l=strlen(str);
    for( i=0;i<=l;i++)
    {
        if((str[i]!=' ')&&(str[i]!='\0'))
        {

            cnt++;
            continue;
        }
       if(cnt<small||small==0)
       {
       small=cnt;
       pos=i-small;
       }
       cnt=0;

    }
    for( i=0;i<small;i++)
         temp[i]=str[pos+i];

        temp[i]='\0';
    printf("small string is %s\n",temp);
}

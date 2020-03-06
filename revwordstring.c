#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void revWordsString(char* str)
{
  int i=0,k=0,space,temp,count=0;
  //printf("%s\n",str);
  while(str[i++]!='\0');
  int size=i;
  str[size]='\0';
  printf("%d\n",size);
  for(i=0;str[i]!='\0';i++)
  {
     // count=count+1;
    k=i;
   	while(str[k]!=' '&&str[k]!='\0')
   	{
   	    k=k+1;
   	}
   	space=k-1;
    while(i<=space)
    {
      temp=str[i];
      str[i]=str[space];
      str[space]=temp;
      i+=1;
      space-=1;
    }
    if(k!=size)
    str[k]=' ';
    i=k;
  }
  printf("%s",str);
}
int main()
{
    char  *str,t=1;
    str=(char *)malloc(sizeof(char));
    scanf("%[^\n]s",str);
    revWordsString(str);
}

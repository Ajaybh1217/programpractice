#include <stdio.h>
#include<stdlib.h>
void revWordsOrder(char *str)
{
  int i=0,count=0,k;
  int b[10],j=0;
  b[0]=i;
  while(str[i]!='\0')
  {
    if(str[i]==' ')
    {
      count=count+1;
      b[++j]=i;
    }
    i=i+1;
  }
  //printf("%d\n",i);
  //printf("%d\n",count);
  //for(i=0;i<=j;i++)
  //printf("%d ",b[i]);
  int size=i;
  str[i]='\0';
  int temp=b[j]+1,temp1=size,r=0;
  char ptr[size];

  while(j!=-1)
  {
    for(k=temp;k<temp1;k++)
    {
      ptr[r++]=str[k];
    }
    temp1=b[j];
    temp=b[--j];
    if(j==0)
         ptr[r++]=' ';
  }
  ptr[r]='\0';
  i=0;
  while(str[i]!='\0')
  {
  str[i]=ptr[i];
  i=i+1;
  }
  str[i]='\0';
}
int main() {
	char *str;
	str=(char *)malloc(sizeof(char));
	scanf("%[^\n]s",str);
	revWordsOrder(str);
	printf("%s",str);
	return 0;
}

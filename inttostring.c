#include<stdio.h>
#include<math.h>
void itoa(int num, char* result)
{
  int count=1,i;
  int num1=num,temp;
  while(num1/10!=0)
  {
    count=count+1;
    num1=num1/10;
  }
  result[count]='\0';
  printf("%c",result[i]);
  for(i=count-1;i>=0;i--)
  {
    temp=num%10;
    result[i]=temp+'0';
    num=num/10;
  }
  printf("%s",result);
}
int atoi(char *str)
{
  int i=0,j=0,temp=1;
  int num=0;
  while(str[i++]!='\0');
  int size=i-1;
  while(j!=size)
  {
     num=num+(str[size-j-1]-'0')*temp;
     temp=temp*10;
     j=j+1;
  }
  return num;
}
int main()
{
    char* str="4563";
    char result[4];
    //int temp=atoi(str);
    //printf("%d\n",temp);
    itoa(123,result);
    return 0;
}


#include <stdio.h>

char* strtok_code(char *str1, char delim)
{
  int i=0;
 while(str1[i]!='\0')
 {
   if(str1[i]!=delim)
 	printf("%c",str1[i]);
   else
     printf("\n");
   i=i+1;
 }
  return str1;
}

int main()
{
  int t,i,j=0;
  char str[50];
  char ch[2];
  char **ptr;
  scanf("%d", &t);
  while(t--)
  {
    scanf("%s %c", str,ch);

    ptr=strtok_code(str,ch[0]);

  }
  return 0;
}

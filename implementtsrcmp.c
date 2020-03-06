#include<stdio.h>
#include<string.h>
int strcmp(const char *str1, const char *str2)
{
    int k=0,l=0,i,j,size1,size2,tc,count=0,check=7;
    while(str1[k]!= '\0')
    {
      count=count+1;
      k++;
    }
    size1=count;
    count=0;
    while(str2[l]!='\0')
    {
      count=count+1;
      l++;
    }
    size2=count;
      for(i=0;i<size1;i++)
      {
        if(str1[i]==str2[i])
        {
          check=0;
        }
        else
        {
          check=1;
          char a=str1[i];
          char b=str2[i];
          if(a>b)
            return a-b;
          else
            return a-b;
		}
      }
      if(check==0)
        return 0;
 }
 int main()
{
     int result,i ;
     int tc;
     scanf("%d",&tc);
     for(i=0;i<tc;i++)
     {

         result=strcmp();
         printf("\n%d",result);
     }
     return 0;


}



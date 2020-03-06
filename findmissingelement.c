#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,i,j,count=0,k,size1,size2;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d%d",&size1,&size2);
    int a[size1],b[size2];
    for(j=0;j<size1;j++)
      scanf("%d",&a[j]);
    for(j=0;j<size2;j++)
      scanf("%d",&b[j]);
    for(j=0;j<size1;j++)
    {
      k=0;
      while(k<size2)
      {
        if(a[j]==b[k])
        {
          count=1;
          break;
        }
        k++;
      }
      if(count!=1)
      {
        printf("%d",a[j]);
        break;
      }
      count=0;
    }
  }
    return 0;
}

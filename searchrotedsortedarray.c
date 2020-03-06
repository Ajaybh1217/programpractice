#include<stdio.h>
void searchRotatedSortedArray(int *a,int size)
{
  int i;
  int temp,count=-1;
  for(i=0;i<size;i++)
  {
    printf("%d\n",a+i);
  }
}
int main()
{
    int a[]={2,3,4,4,5,3,5,4,6,7,8,3,5,4};
    int size=sizeof(a)/sizeof(a[0]);
    int target=5,result;
    searchRotatedSortedArray(&a,size);
    //printf("%d",result);
}



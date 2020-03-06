#include<stdio.h>
void swap(int* i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
int partition(int a[],int low,int high)
{
  int i,j,pivot;
  pivot=a[high];
  i=low-1;
  j=low;
  while(j<=high-1)
  {
      if(a[j]<=pivot)
      {
          i=i+1;
          swap(&a[i],&a[j]);
      }
      j+=1;
  }
  swap(&a[i+1],&a[high]);
  return (i+1);
}
void quicksort(int a[],int low,int high)
{

    if(low<high)
    {
        int pi;
        pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }

}
int main()
{
    int a[]={5,4,3,2,1},i;
    int size=sizeof(a)/sizeof(a[0]);
    int low=0,high=size-1;
    quicksort(a,low,high);
    for(i=0;i<5;i++)
        printf("%d\n",a[i]);
    return 0;
}

#include<stdio.h>
void printarray(int a[],int low,int high)
{
    int i;
    for(i=low;i<=high;i++)
        printf("%d\n",a[i]);
}
void swap(int* i,int* j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
int partition(int a[],int low,int high)
{
    int i=low-1;
    int j;
    int pivot=a[high];
    for(j=low;j<=high-1;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return i+1;

}
void quicksort(int a[],int low,int high)
{
  if(low<high)
  {
  int pi=partition(a,low,high);
  quicksort(a,low,pi-1);
  quicksort(a,pi+1,high);
  }
}
int main()
{
    int a[]={5,4,3,2,1,8,6,7,9,20,15};
    int size=sizeof(a)/sizeof(a[0]);
    int low=0;
    int high=size-1;
    quicksort(a,low,high);
    printarray(a,low,high);

}

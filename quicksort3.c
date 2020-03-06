#include<stdio.h>
void swap(int* i,int* j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
int partition(int a[],int low,int high)
{
    int pivot;
    pivot=a[high];
    int i=low-1,j=low;
    while(j<high)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i],&a[j]);
        }
        j++;

    }
    swap(&a[i+1],&a[j]);
    return i+1;

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
    int a[]={1,2,2,4,1,2},i;
    int size=sizeof(a)/sizeof(a[0]);
    int low=0,high=size-1;
    quicksort(a,low,high);
    for(i=0;i<=high;i++)
        printf("%d\n",a[i]);
}

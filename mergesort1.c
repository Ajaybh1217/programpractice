#include<stdio.h>
void printarray(int a[],int low,int high)
{
    int i;
    for(i=low;i<=high;i++)
    printf("%d\n",a[i]);
}
void merge(int a[],int low,int mid,int high)
{
    int n1,n2,i,j,k;
    n1=mid-low+1;
    n2=high-mid;
    int left[n1],right[n2];
    for(i=0;i<n1;i++)
        left[i]=a[low+i];
    for(j=0;j<n2;j++)
        right[j]=a[mid+1+j];
    i=0;
    j=0;
    k=low;
    while(i<n1&&j<n2)
    {
        if(left[i]<right[j])
        {
            a[k++]=left[i++];

        }
        else
        {

            a[k++]=right[j++];
        }

    }
    while(i<n1)
    {

        a[k++]=left[i++];

    }
    while(j<n2)
    {

        a[k++]=right[j++];
    }

}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=low+(high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int main()
{
    int a[]={5,4,3,2,1};
    int size=sizeof(a)/sizeof(a[0]);
    int low=0,high=size-1;
    mergesort(a,low,high);
    printarray(a,low,high);
    return 0;
}

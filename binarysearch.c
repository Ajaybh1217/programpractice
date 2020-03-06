#include<stdio.h>
void binarysearch(int a[],int size,int key)
{
    int l=0,r=size-1,mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(key==a[mid])
        {
            printf("item %d found at %d location",key,mid+1);
            break;
        }
        else if(key<a[mid])
        {
            r=mid-1;
        }
        else
            l=mid+1;

    }
    if(key!=a[mid])
        printf("value %d not exist",key);
}
int main()
{
    int key,a[]={1,2,3,4,6,8,56,90};
    int size=sizeof(a)/sizeof(a[0]);
    scanf("%d",&key);
    binarysearch(a,size,key);
    return 0;
}

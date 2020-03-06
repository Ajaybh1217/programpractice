#include<stdio.h>
void printSpiral(int a[][4], int r, int c)
{
  int col_lr=c,col_rl=c-1;
  int row_td=r,row_dt=r-1;
  int k=0,i=0,j,l,temp=0;
  while(i<r*c)
  {
     for(j=temp;j<col_lr;j++)
     {
         if(i<r*c)
         { printf("%d\n",a[k][j]);}
         else
         {break;}
         i=i+1;
     }
     temp=temp+1;
     col_lr=col_lr-1;
     k=k+1;

     l=k;
     for(j=l;j<row_td;j++)
     {
         if(i<r*c)
         { printf("%d\n",a[j][col_lr]);}
         else
         {break;}
         i=i+1;
     }
     row_td=row_td-1;
     col_rl=col_rl-1;
     for(j=col_rl;j>=temp-1;j--)
     {
        if(i<r*c)
        {printf("%d\n",a[row_td][j]);}
        else
        {break;}
       i=i+1;
     }
     row_td=row_td-1;
     for(j=row_td;j>=k;j--)
     {
        if(i<r*c)
        {printf("%d\n",a[j][temp-1]);}
        else
        { break;}
        i=i+1;
     }

  }

}
int main()
{
    int a[][3]={4,5,6,7,8,9,10,11,12};
    printSpiral(a,3,3);
    return 1;
}

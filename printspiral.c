#include<stdio.h>
void printSpiral(int a[][3], int r, int c)
{
   int i=0,j,f=0,c1,r1;
   c1=c;
   r1=r;
   c1=c1-1;
   r1=r1-1;
   while(i<r*c)
   {

     for(j=f;j<=c1;j++)
     {
       if(i<r*c)
       {
         printf("%d\n",a[f][j]);
          i=i+1;
       }
       else
         break;
     }
     f=f+1;

     for(j=f;j<=r1;j++)
     {
       if(i<r*c)
       {
         printf("%d\n",a[j][c1]);
         i=i+1;
       }
       else
         break;
     }
     c1=c1-1;
     for(j=c1;j>=f-1;j--)
     {
       if(i<r*c)
       {
         printf("%d\n",a[r1][j]);
         i=i+1;
       }
       else
         break;
     }
     r1=r1-1;
     for(j=r1;j>=f;j--)
     {
       if(i<r*c)
       {
         printf("%d\n",a[j][f-1]);
         i=i+1;
       }
       else
         break;
     }
   }

}
void main()
{
    int a[][3]={1,2,3,4,5,6,7,8,9};
    printSpiral(a,3,3);

}




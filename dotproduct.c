#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,i,j,k,l,m,row1,col1,row2,col2,a[50][50],b[50][50],c[50][50];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=1;j++)
    {
       if(j==0)
       {
         scanf("%d%d",&row1,&col1);
         for(k=0;k<row1;k++)
         {
           for(l=0;l<col1;l++)
           {
             scanf("%d",&a[k][l]);

           }
           //printf("\n");
         }
       }
       else
       {
         scanf("%d%d",&row2,&col2);
         for(k=0;k<row2;k++)
         {
           for(l=0;l<col2;l++)
           {
             scanf("%d",&b[k][l]);
            // printf(" ");
           }
          // printf("\n");
         }
       }

   }
    int s,q=0,temp=0,c[row1][col2];
    for(l=0;l<row1;l++)
    {
        for(s=0;s<col2;s++)
        {
           while(q<col1)
           {
            temp=(a[l][q]*b[q][s])+temp;
            q=q+1;
           }
           q=0;
           c[l][s]=temp;
           temp=0;
           printf("%d ",c[l][s]);

        }
           printf("\n");

    }
}
return 0;
}


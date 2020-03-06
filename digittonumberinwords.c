#include<stdio.h>
void intToWord(int num)
{
  int temp,count=0,div=100000,fdigit,sdigit,temp1,temp5=0;
    if(num==0)
        printf("zero");
    else
    {
        while(num!=0)
        {
            count=count+1;
             if(num/div!=0)
             {
                   temp=num/div;
                         if(temp<20)
                         {
                           if(temp5==1)
                             printf(" ");
                           switch(temp)
                           {
                           case 1:printf("one");
                           break;
                           case 2:printf("two");
                           break;
                           case 3:printf("three");
                           break;
                           case 4:printf("four");
                           break;
                           case 5:printf("five");
                           break;
                           case 6:printf("six");
                           break;
                           case 7:printf("seven");
                           break;
                           case 8:printf("eight");
                           break;
                           case 9:printf("nine");
                           break;
                           case 10:printf("ten");
                           break;
                           case 11:printf("eleven");
                           break;
                           case 12:printf("twelve");
                           break;
                           case 13:printf("thirteen");
                           break;
                           case 14:printf("fourteen");
                           break;
                           case 15:printf("fifteen");
                           break;
                           case 16:printf("sixteen");
                           break;
                           case 17:printf("seventeen");
                           break;
                           case 18:printf("eighteen");
                           break;
                           case 19:printf("nineteen");
                           break;
                           }
                           temp5=1;
                        }
                        else
                        {

                            sdigit=temp/10;
                            fdigit=temp%10;
                            if(sdigit!=0)
                            {
                                 if(temp5==1)
                                 printf(" ");
                                  switch(sdigit)
                                   {
                                       case 2:printf("twenty");
                                       break;
                                       case 3:printf("thirty");
                                       break;
                                       case 4:printf("forty");
                                       break;
                                       case 5:printf("fifty");
                                       break;
                                       case 6:printf("sixty");
                                       break;
                                       case 7:printf("seventy");
                                       break;
                                       case 8:printf("eighty");
                                       break;
                                       case 9:printf("ninety");
                                       break;
                                    }
                                    temp5=1;
                            }
                             if(fdigit!=0)
                            {
                                if(temp5==1)
                                printf(" ");

                                switch(fdigit)
                              {
                                   case 1:printf("one");
                                   break;
                                   case 2:printf("two");
                                   break;
                                   case 3:printf("three");
                                   break;
                                   case 4:printf("four");
                                   break;
                                   case 5:printf("five");
                                   break;
                                   case 6:printf("six");
                                   break;
                                   case 7:printf("seven");
                                   break;
                                   case 8:printf("eight");
                                   break;
                                   case 9:printf("nine");
                                   break;
                                }
                                temp5=1;

                            }
                        }
                             switch(count)
                             {
                                 case 1:printf(" lakhs");
                                 break;
                                 case 2:printf(" thousand");
                                 break;
                                 case 3:printf(" hundred");
                                 break;
                             }
                            num=num%div;
                           if(count!=2)
                           {

                            div=div/100;
                           }
                           else
                             div=div/10;
                       temp5=1;
                   }
               else
               {
                 if(count!=2)
                   {

                    div=div/100;
                   }
                   else
                     div=div/10;

               }
            }
        }

    temp5=0;
}





int main()
{
    int num;
    scanf("%d",&num);
    intToWord(num);
    return 0;
}

#include<stdio.h>
int main()
{
    int c =1;
    do
    {
        int n, a, b;
        printf(" Which operation you want to perform \n");
    
        printf(" Enter 1 for addition \n");
        printf(" Enter 2 for substraction \n");
    
        printf(" Enter 3 for multiplication \n");
    
        printf(" Enter 4 for divsion and print the quotent \n");
        printf(" Enter 5 for division and print the remainder \n");

        scanf("%d",&n);

        switch(n)
        {
            case 1 :
            printf(" Then enter the numbers ");

            printf(" First ");
            scanf("%d",&a);

            printf(" Second ");
            scanf("%d",&b);
        
            int sum = a+b;
            printf(" Sum = %d",sum);
            break;

            case 2 :
            printf(" Then enter the numbers ");

            printf(" First ");
            scanf("%d",&a);

            printf(" Second ");
            scanf("%d",&b);
        
            int  dif = a-b;
            printf(" Difference = %d",dif);
            break;

             case 3 :
             printf(" Then enter the numbers ");

             printf(" First ");
             scanf("%d",&a);

             printf(" Second ");
             scanf("%d",&b);
        
             int pro = a*b;
             printf(" Product = %d",pro);
             break;
    
             case 4 :
             printf(" Then enter the numbers ");

             printf(" First ");
             scanf("%d",&a);

             printf(" Second ");
             scanf("%d",&b);
        
             float qu = a/b;
             printf(" Quotent = %f",qu);
             break;

             case 5 :
             printf(" Then enter the numbers ");

             printf(" First ");
             scanf("%d",&a);

             printf(" Second ");
             scanf("%d",&b);
        
        
             int rem = a%b;
             printf(" Remainder = %d", rem);
             break;

             default:
             printf(" Invalid Entry ");
        }
        printf("\n Do you want you continue ? if yes enter else 0 :");
        scanf("%d",&c);
    
    } while (c==1);
    
}
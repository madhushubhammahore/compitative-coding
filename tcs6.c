//for the series 0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16,8.....
//to find the nth term

#include<stdio.h>
int main(){
    int a=0,b,i,n;
    printf ("please enter nth term");
    scanf("%d",&n);

    if (n%2==0)
    {
        for (i=0;i<n/2;i++)
        {
            b=i;
        }
        printf("\n the %dth term is =%d",n,b);
    }
    else 
    {
            for (i=0;i<n/2;i++)
            {
                a=a+2;
            }
            printf("\n the %dth term is=%d",n,a);

        }
        return 0;

    }


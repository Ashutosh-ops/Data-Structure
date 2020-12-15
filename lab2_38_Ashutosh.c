#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    for(int i = (a>b)? a:b; i <= a*b; i+=(a>b)? a:b)
    {
        if(i%a==0 && i%b==0){
            printf("\nThe LCM is %d and HCF is %d\n",i,(a*b)/i);
            break;
        }
    }
    // int i = (a>b)? a:b;
    // while(i <= a*b)
    // {
    //     if(i%a==0 && i%b==0){
    //         printf("\nThe LCM is %d and HCF is %d\n",i,(a*b)/i);
    //         break;
    //     }
    //     i+=(a>b)? a:b;
    // }
    return 0;
}

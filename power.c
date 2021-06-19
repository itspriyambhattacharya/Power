#include <stdio.h>
int power (int a , int b)
{
    // int c = a * power(a , b - 1);
    // return c ;
    if (b == 0)
    {
        return 1 ;
    }
    else 
    {
        return a * power(a,b-1);
    }
    
}
int main(int argc, char const *argv[])
{
    printf("To Calculate a^b \n\n Enter a \t");
    int a,b;
    scanf("%d", &a);
    printf("Now Enter b \t");
    scanf("%d" , &b);
    int pow = power(a,b);
    printf("%d ^ %d = %d" ,a,b, pow);
    return 0;
}

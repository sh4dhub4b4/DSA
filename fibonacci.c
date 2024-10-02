
#include <stdio.h>
int fib(int n){
    
    if( n<3 ) return n-1;
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main()
{
    printf("Enter the th-term number:");
    int n;scanf("%d",&n);
    printf("%d th-term number of fib series = %d",n,fib(n));

    return 0;
}

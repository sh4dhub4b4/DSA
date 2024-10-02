
#include <stdio.h>
int fac(int n){
    //n*n(n-1)*(n-2)*.....2*1
    //n*n(n-1)*(n-2)*.....2 = 2! = 2*1 = 2
    //base case:
    if(n<3 && n>0) return n;
    else{
        return n*fac(n-1);
    }
}
int main()
{
    printf("enter the number:");
    int n;scanf("%d",&n);
    printf("Factorial of %d = %d",n,fac(n));

    return 0;
}

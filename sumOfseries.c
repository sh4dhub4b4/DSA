
#include <stdio.h>
int sum(int n){
    
    if(n==1) return n;
    else{
        return n+sum(n-1);
    }
}
int main()
{
    printf("enter the number:");
    int n;scanf("%d",&n);
    printf("Sum from 1 till %d = %d",n,sum(n));

    return 0;
}

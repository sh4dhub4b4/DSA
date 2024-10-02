
#include <stdio.h>

int main()
{
    printf("Enter the array Size:");
    int len;scanf("%d",&len);
    int a[len];printf("Enter the array:");
    for(int i=0;i<len;i++)scanf("%d",&a[i]);

    for(int i=1;i<len;i++){
        
        int element = a[i];
        int element_idx=i;
        
        for( int prev_idx = i-1 ; prev_idx>=0 ; prev_idx-- ){
            
            if(element<a[prev_idx]){
                a[prev_idx+1]=a[prev_idx];
                element_idx=prev_idx;
            }else break;
        }
        
        a[element_idx]=element;
    }

    for(int i=0;i<len;i++)printf(" %d",a[i]);

    
}
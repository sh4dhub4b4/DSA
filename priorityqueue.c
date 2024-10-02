#include <stdio.h>
#define len 4
int arr[len],h=0,t=-1,size=0;
int main()
{
    int op,idx=0,max=0;
   
    while(1){
        printf("\t1. Insert 2.Delete 3.Display 4.Exit\n\n");
        scanf("%d",&op);
       
        switch(op){
            case 1:
                if(size<len){
                    printf("Enter the number to insert :");
                    scanf("%d",&arr[t+1]);size++;t++;
                    if(max<arr[t]){
                        max=arr[t];idx=t;
                    }
                }
                else{
                    printf("\tArray is fullllll\n");
                }
            break;
            case 2:
                if(size!=0){
                    printf("%d has been deleted from queue\n",max);
                    for(int i=idx;i<=t-1;i++){
                        arr[i]=arr[i+1];
                    }t--;size--;
                    max=0;idx=0;
                    for(int i=h;i<=t;i++){
                        if(max<arr[i]){
                            max=arr[i];idx=i;
                        }
                    }
                }else{
                    printf("\tEmpty Array\n");
                }
            break;
            case 3:
            if(size!=0){
                for(int i=h;i<=t;i++){
                    printf("\t%d",arr[i]);
                }printf("\n\n");
            }else{
                    printf("\tEmpty Array\n");
            }
            break;
            case 4: return 0;
        }
    }

    return 0;
}

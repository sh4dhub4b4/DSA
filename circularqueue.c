#include <stdio.h>
#include <stdbool.h>
#define max 5
int arr[max],h=0,t=-1,s=0;


void increment(int *i){
    *i=(*i+1)%max;
}

int main()
{
    while(true){
        printf("\t1(Insert)\t2(Delete)\t3(Display)\t4(Exit)\n\n");
        int op;
        if(s==max){
            do{
                printf("\tQueue is FULLLLL\nInsert can't be possible.\n");
                scanf("%d",&op);
            }while(op==1 || op>4 || op<0 );
        }else if(s==0){
            do{
                printf("\tQueue is EMPTYYYYYYYY\nDelete & Display can't be possible\n");
                scanf("%d",&op);
            }while(op==2 || op==3 || op>4 || op<0);
        }else{
            scanf("%d",&op);
        }
        switch(op){
        /*Insert*/    case 1:printf("Enter the number you want to Insert\t");
                        int val;scanf("%d",&val);increment(&t);s++;arr[t]=val; 
                        // printf("\n[h:t]=[%d:%d]\n",h,t);
                        break;
        /*Delete*/    case 2:printf("%d has been removed from QUEUE\n",arr[h]);
                        increment(&h);s--; 
                        // printf("\n[h:t]=[%d:%d]\n",h,t); 
                        break;
        /*Display*/   case 3: 
                        if(h<=t){
                            for(int i=h;i<=t;i++){
                                printf("\t%d",arr[i]);
                            }printf("\n");
                        }else{
                            for(int i=h;i<max;i++){
                                printf("\t%d",arr[i]);
                            }
                            for(int i=0;i<=t;i++){
                                printf("\t%d",arr[i]);
                            }printf("\n");
                        }
                        // printf("\n[h:t]=[%d:%d]\n",h,t); 
                        break;
        /*Exit*/      case 4: return 0;
            default:
                printf("Ekhane To code ashbei naaa");
        }
    }

   
}

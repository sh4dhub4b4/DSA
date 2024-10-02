#include<stdio.h>
#define max 999
int queue[max], head = 0, tail = -1;

void insert(int n){
    if(max < tail){
        printf("Queue out of limit!!!");
    }
    else{
        tail++;
        queue[tail] = n;
    }
}

int dlt(){
    int val;
    if(tail < head){
        printf("Empty Queue\n");
        return -999;
    }
    else{
        val = queue[head];
        head++;
        return val;
    }
}

void display(){
    int i;
    if(tail < head){
        printf("Empty Queue\n");
        return;
    }
    printf("The Queue is: ");
    for(i = head; i <= tail; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){
    int op, del, num;
    while(1){
        printf("Choose an Option: \n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        scanf("%d", &op);
        switch(op){
        case 1:
            printf("Enter a number to insert: ");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            del = dlt();
            if(del != -999){
                printf("%d is deleted from queue\n", del);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("Wrong Input!!!\n");
        }
    }
    return 0;
}
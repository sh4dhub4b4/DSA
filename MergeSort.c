#include <string.h>
#include <stdio.h>

void display(int arr[],int len){
    for(int i=0;i<len;i++)printf("%d ",arr[i]);
    printf("\n");
}

void sort(int a[], int from/*imp*/, int to/*imp*/){

if(from<to){

int mid=(from+to)/2;

sort(a,from,mid);
sort(a,mid+1,to);

int len_l=mid-from+1,len_r=to-mid;//=to-(mid+1)+1;
int l[len_l],r[len_r];

//left:
printf("Left: ");
for(int i=from,k=0;i<=mid;i++,k++){
    l[k]=a[i];printf("%d ",a[i]);
}printf("\t");
//right:
printf("Right: ");
for(int i=mid+1,j=0;i<=to;i++,j++){
    r[j]=a[i];printf("%d ",a[i]);
}printf("\n");

//merge
int i=0,j=0,k=from;
while(i<len_l&&j<len_r){
    if(l[i]<=r[j]){
        a[k]=l[i];
        i++;
    }
    else{
        a[k]=r[j];
        j++;
    }
    k++;
}
while(i<len_l){
    a[k]=l[i];
    i++;k++;
}
while(j<len_r){
    a[k]=r[j];
    j++;k++;
}

for(int i=from;i<=to;i++)printf("%d ",a[i]);
    printf("\n");

}else return;
}
int main()
{
    int a[]={11,10,9,11,13,12,8,7,6,5,4,3,2,1};
    display(a,sizeof(a)/sizeof(a[0]));
    sort(a,0,sizeof(a)/sizeof(a[0])-1);
    return 0;
}
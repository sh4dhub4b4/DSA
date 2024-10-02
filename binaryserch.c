
#include <stdio.h>
int binserch(int *a,int len,int t){
    int s=0,e=len-1;
    while(s<e){
        int mid=(s+e)/2;
        if (a[mid]<t){
            s=mid+1;
        }else if(t<a[mid]) e=mid-1; 
        
        else return mid;
    }
    return -1;
}
int main()
{
    printf("Enter the array size:");
    int len;scanf("%d",&len);
    
    int a[len];
    printf("Enter the sorted (low to high) array:\t");
    for (int i=0;i<len;i++){
	        scanf("%d",&a[i]);   }
		
	int t;printf("Enter the number for Search:");
	scanf("%d",&t);
	
	int idx=binserch(a,len,t);
	
	if(idx!=-1) printf("%d is at %d index",t,idx);
	else printf("%d is not in array.",t);
	
    return 0;
}

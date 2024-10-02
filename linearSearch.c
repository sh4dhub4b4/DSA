
#include <stdio.h>

int main()
{
    printf("Enter the array size:");
    int len;scanf("%d",&len);
    
    int a[len];
    printf("Enter the array:\t");
    for (int i=0;i<len;i++){
	        scanf("%d",&a[i]);   }
		
	int t;printf("Enter the number for Search:");
	scanf("%d",&t);
	
	int check=0;
	
	for (int i=0;i<len;i++){
	    if(a[i]==t){
	        check=1;
	        printf("%d is at %d index\n",t,i);
	    }
	}
	if(check==0){
	    printf("%d is not in the array\n",t);
	}

    return 0;
}

/*
Selection Sort
*/
#include <stdio.h>

int main()
{
    printf("Enter the size of the array: ");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array: ");
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}
	
	
	
	for(int i=0;i<n;i++){
	    int idx=i;// idx of min
	   // min(i+1.....n-1)
	    for(int j=i+1;j<n;j++){
	       if(arr[idx]>arr[j]){
	           idx=j;
	       }
	    }
	    int temp=arr[i];
	    arr[i]=arr[idx];
	    arr[idx]=temp;
	}printf("\n[");

	
	for(int i=0; i<n; i++) {
		printf("\t%d",arr[i]);
	}printf("\t]\n");

    return 0;
}

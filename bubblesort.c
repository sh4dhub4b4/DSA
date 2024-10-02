#include <stdio.h>
#include <stdbool.h>
int
main ()
{
  int len;
  printf("Enter the size of array:");
  scanf("%d",&len);
  int a[len];printf("Enter the array:");
  for (int i = 0; i < len; i++){
    scanf ("%d", &a[i]);
  }

  len=sizeof(a)/sizeof(a[0]);

  for (int i = 0; i < len-1; i++){
    bool  swapped = false;
    for(int j=0;j<len-1-i/*cz for each iteration max will in last idx*/;j++){
      if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        swapped=true;
      }
    }
    if(!swapped)break;
  }
printf("The sorted array:");
  for (int i = 0; i < len; i++)
    {
      printf (" %d", a[i]);
    }

  return 0;
}

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  int a[n],i,j;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(int k=0;k<n/2;k++){
    i=k,j=n-1-k;
    int temp;
    while(i<j){
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
    i++;
    j--;
        
    }
  }
  for(i=0;i<n;i++){
    printf("%d\n",a[i]);
  }
  return 0;
}

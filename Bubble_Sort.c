#include <stdio.h>

int main()
{
    int a[100];
    int i,n;
    printf("Enter size of input\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int j,temp;
    for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
    return 0;
}


#include <stdio.h>
int linearserach(int a[],int n,int x);
int main()
{
    int a[]={9,45,68,4,3,7,45,6,8,12};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("Enter element to search : ");
    scanf("%d",&x);
    int output=linearserach(a,n,x);
    if(output==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at position %d",output);
    }
    return 0;
}

int linearserach(int a[],int n,int x){
    int i;
    for(i=0;i<n;i++)
        if(a[i]==x)
            return i;
    return -1;
}

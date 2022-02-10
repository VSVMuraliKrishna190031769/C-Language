#include <stdio.h>

int binaysearch(int a[],int n,int x){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==x)
        return mid;
        if(a[mid]>x)
        r=mid-1;
        else
        l=mid+1;
    }
    return -1;
}

int main()
{
    int a[]={1,5,6,7,8,9,41,58,98,145,};
    int x,n;
    n=sizeof(a)/sizeof(a[0]);
    printf("Enter an element to search : ");
    scanf("%d",&x);
    int output=binaysearch(a,n,x);
    if(output==-1)
    printf("Element not found");
    else
    printf("Element found at position %d",output);
    return 0;
}


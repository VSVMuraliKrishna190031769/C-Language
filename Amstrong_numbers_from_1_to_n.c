#include <stdio.h>
void isAmstrong(int n);
int main()
{
    int i,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    isAmstrong(i);
    return 0;
}

void isAmstrong(int n){
    int temp=n,r,s=0;
    while(temp!=0){
        r=temp%10;
        temp/=10;
        s+=r*r*r;
    }
    if(s==n)
    printf("\n%d is an Amstrong number",n);
    else
    printf("\n%d is Not an Amstrong number",n);
}

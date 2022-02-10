#include <stdio.h>

int isprime(int n);
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1)
        printf("\n%d is Neither prime nor composite number",i);
        else if(i==2)
        printf("\n%d is a Prime number",i);
        else
        if(isprime(i)==1)
        printf("\n%d is Prime number",i);
        else
        printf("\n%d is Not a Prime number",i);
    }
    return 0;
}

int isprime(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}


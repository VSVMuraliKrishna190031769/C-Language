#include <stdio.h>

int main()
{
    int n,i=0,flag=0;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    } 
    
    if((n%2==0)&&(flag==0)){
        printf("even and prime");
    }
    else if((n%2==0)&&(flag!=0)) {
        printf("even and non-prime");
    }
    else if((n%2!=0)&&(flag==0)){
        printf("odd and prime");
    }
    else{
        printf("odd and non-prime");
    }
    return 0;
}


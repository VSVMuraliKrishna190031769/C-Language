#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("Enter a sentence\n");
    scanf("%[^\n]s",s);
    int i=0,temp,j=strlen(s)-1;
    while(i<j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
puts(s);
}


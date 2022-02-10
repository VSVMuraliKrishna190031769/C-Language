#include<stdio.h>
#include<string.h>
 struct Person{
    char name[100];
    int a;
    float salary;
}p[2];
 
int main(){
    
    int a,i;
    float sal;
    for(i=0;i<2;i++){
       
        printf("Enter name\n");
        scanf("%s",&p[i].name);
        printf("Ënter age and salary\n");
        scanf("%d %f",&p[i].a,&p[i].salary);
    }
    for(i=0;i<2;i++){
        printf("%s %d %f",p[i].name,p[i].a,p[i].salary);
    }
    return 0;
}

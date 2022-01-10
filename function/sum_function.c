#include<stdio.h>

    int sum(int a, int b); //funtion declaration

int main(){
    int c,a,b;
    
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    
    c = sum(a,b);
    printf("%d",c);
    
    return 0;
}

int sum(int a, int b){
    int result;
    
    result = a+b;
    return result;
}
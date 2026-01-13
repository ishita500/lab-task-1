#include <stdio.h>
int main(){
    int n,bin=0,place=1;
    printf("enter a number:");
    scanf ("%d",&n);
    while (n>0){
        bin=bin+(n%2)*place;
        n=n/2;
        place=place*10;
    }
    printf("binary representaion =%d",bin);
    return 0;
}
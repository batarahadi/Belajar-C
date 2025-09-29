#include<stdio.h>

long factor1(int n){
    if(n==0)
        return (1);
    else
        return(n * factor1(n-1));}

long factor2(int n) {
    long i, fac = 1;
    for(i=1; i<=n; i++){
        fac *= i;}
    return (fac);}

int main(){
    int b = 4;
    printf("%ld\n", factor1(b));
    printf("%ld\n", factor2(b));
    return 0;
}
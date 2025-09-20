#include<stdio.h>
int main(){

    int angka[10] = {1,2,3,4,5,6,7,8,9,10};
    int (*ptr)[10] = angka;
    printf("%d\n", *(ptr+1));
    return 0;
}
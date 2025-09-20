#include<stdio.h>
int main(){

    char nama[3][10] = {"bud", "and", "cac"};
    for (int i = 0; i < 3; i++){
        printf("%s\n", nama[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    char huruf = 'a';

    switch (huruf) { // jika di python pake match case
    case ('a'): // bisa pake tanda kurung atau tidak
        // break;
    case 'b':
        printf("hallo\n");
        break;
    default:
        break;
    }
    
    return 0;
}
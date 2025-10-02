#include <stdio.h>

enum boolean {false, true};

enum boolean evenCheck(int n) {
    enum boolean checkResult;
    if (n % 2 == 0) checkResult = true;
    else checkResult = false;
    return checkResult;
}

int main() {
    int num;
    enum boolean result;

    scanf("%d", &num);
    result = evenCheck(num);

    if (result == true) 
        printf("even\n");
    else 
        printf("odd\n");

    return 0;
}

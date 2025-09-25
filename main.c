#include <stdio.h>
 
struct details {int num;};
 
int main() { 
    struct details MainDetails;
    struct details *structptr;
    structptr=&MainDetails;
    structptr->num=20; 
    printf("n%d",MainDetails.num);
 
 
return 0; 
}
#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
    // creating today variable of enum week type
    enum week today;
    today = Sunday;
    printf("Day %d",today+1);
    return 0;
}

/*Penggunaan enum sebagai Stiker saja dan enum bersifat int
dan ini adalah contoh lainnya*/
enum designFlags {
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
};

int main() {
	int myDesign = BOLD | UNDERLINE; 

        //    00000001
        //  | 00000100
        //  ___________
        //    00000101

	printf("%d", myDesign);

	return 0;
}
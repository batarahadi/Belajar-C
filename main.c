#include <stdio.h>

enum suit {
    club = 13954,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main() 
{
    card = club;
	printf("Size of enum variable = %lu bytes", sizeof(card));	
	return 0;
}

//gcc ft_putchar.c -o test

#include <unistd.h> //header line

void ft_putchar(char c) { //function
	write(1, &c, 1); //write c char 1 bit
}

void main() { //run
	ft_putchar('Y'); //Y char write function
	ft_putchar('\n'); //add line
}

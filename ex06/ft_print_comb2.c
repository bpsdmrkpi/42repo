#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(int a, int b, int firstcomb)
{
	ft_putchar('0' + a / 10); //onlar basamagi
	ft_putchar('0' + a % 10); //birler basamagi
	ft_putchar(' ');
	ft_putchar('0' + b / 10); //onlar basamagi
        ft_putchar('0' + b % 10); //birler basamagi
	if(firstcomb != 0)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int finishcomma;

	a = 0;
	finishcomma = 1;
	while(a <= 98)
	{
		b = a + 1;
		while(b <= 99)
		{
			if (a == 98 && b== 99)
			{
				finishcomma = 0;
			}
			
			ft_write_comb(a, b, finishcomma);
			b++;

		}
		a++;
	}
}

void main(void)
{
	ft_print_comb2();
}

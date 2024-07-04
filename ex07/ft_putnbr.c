#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	if(nb >= 10) //sayı tek basamaklı değilse
	{
		ft_putnbr(nb / 10); //rekürsif -recursive-  olarak kendini yineleyip yazdır
		nb %= 10; // 10 ile bölümünden kalanı alır (tek hane)
	}

	ft_putchar(nb + 48); //ASCII 0 = 48 olduğu için 48 ile toplar ve yazdırılır
}

void	main(void)
{
	ft_putnbr(-542);
}

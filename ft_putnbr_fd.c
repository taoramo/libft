#include <unistd.h>

int	ft_abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	int		n;
	char	nbr[13];

	n = 1;
	if (nb < -2147483647)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		write(fd, "-", 1);
	nb = ft_abs(nb);
	nbr[0] = (nb % 10) + 48;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		nbr[n] = (nb % 10) + 48;
		n++;
	}
	n--;
	while (n >= 0)
	{
		write(fd, &nbr[n], 1);
	n--;
	}
}
/*
int	main(void)
{
	ft_putnbr(0);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
}*/

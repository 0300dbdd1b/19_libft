#include "libft.h"

static int		ft_check_base(char *base)
{
	int x;
	int i;

	i = 0;
	if (!base || !base[0] || !base[1])
		return (0);
	while (base[i + 1])
	{
		x = i + 1;
		while (base[x])
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (x);
}

void			ft_putnbr_base(int nbr, char *base)
{
	long int	i;

	i = nbr;
	if (ft_check_base(base) != 0)
	{
		if (i < 0)
		{
			ft_putchar('-');
			i = i * (-1);
		}
		if (i >= (int)ft_strlen(base))
		{
			ft_putnbr_base(i / (int)ft_strlen(base), base);
			ft_putnbr_base(i % (int)ft_strlen(base), base);
		}
		else
			ft_putchar(base[i % (int)ft_strlen(base)]);
	}
}

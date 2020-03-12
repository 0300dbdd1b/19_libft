#include "libft.h"

int main(int ac, char **av)
{
	ft_putnbr_base_fd(atoi(av[1]), BIN_BASE, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:42:03 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/13 16:36:21 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	chck_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ft_strlen(base) <= 1)
		return (1);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;
	int			i;
	int			base_size;

	nb = nbr;
	if (chck_base(base) == 0)
	{	
		base_size = ft_strlen(base);
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb >= base_size)
			ft_putnbr_base(nb / base_size, base);
		i = nb % base_size;
		write(1, &base[i], 1);
	}
}
/*
int	ft_atoi(char	*str)
{
	int	i;
	int	nbr;

	i = 0;
	while (str[i])
        {
                nbr = ((nbr * 10) + str[i]) - 48;
                i++;
        }
	if (str[0] == '-')
		return (nbr *= -1);
        return (nbr);
}	

int	main(int argc, char **argv)
{
	if (argc != 3)
		return 0;
	ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
	return (0);
}
*/

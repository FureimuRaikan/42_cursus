/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:46:31 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/16 16:45:00 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/* retourne la taille de la string donnee en argument*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* donne le nombre de characteres necessaire pour afficher le nb en base BASE*/
int	ft_char_number(int nb, char *base)
{
	long int	nbr;
	int			i;
	int			baselen;

	nbr = nb;
	baselen = ft_strlen(base);
	i = 1;
	if (nb < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr >= baselen)
	{
		nbr /= baselen;
		i++;
	}
	return (i);
}

/* inverse une chaine de caracteres*/
char	*reverse(char *str)
{	
	int		i;
	int		strlen;
	char	temp;

	strlen = ft_strlen(str);
	i = 0;
	while (i < strlen / 2)
	{
		temp = str[i];
		str[i] = str[strlen - 1 - i];
		str[strlen - 1 - i] = temp;
		i++;
	}
	return (str);
}

/* transforme le int donnee en string dans la base BASE*/
char	*ft_itoa(int nb, char *base)
{
	int			i;
	long int	nbr;
	char		*output;
	const int	baselen = ft_strlen(base);

	i = 0;
	nbr = nb;
	output = (char *)malloc(sizeof(char) * (ft_char_number(nbr, base) + 1));
	if (!output)
		return (NULL);
	if (nbr < 0)
		nbr *= -1;
	while (nbr >= baselen)
	{
		output[i] = base[nbr % baselen];
		nbr /= baselen;
		i++;
	}
	output[i++] = base[nbr % baselen];
	if (nb < 0)
		output[i++] = '-';
	output[i] = '\0';
	return (reverse(output));
}
/*
int	main()
{
	int	nb = 7280;
	char	*base = "conard";
	printf("%s\n", ft_itoa(nb, base));
	return (0);
}
*/

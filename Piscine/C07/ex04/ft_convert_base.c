/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:00:04 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/18 15:17:31 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*reverse(char *str);
int		ft_char_number(int nb, char *base);
char	*ft_itoa(int nb, char *base);

/*Renvoie la taille de la base apres verification*/
int	ft_check_base_size(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

/*verifie si le char est un whitespace*/
int	ft_is_whitespace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

/*retourne la position du caractere dans la base donnee*/
int	ft_get_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

/*retourne la string STR donnee en base BASE converti en int*/
int	ft_atoi_base(char *str, char *base)
{
	int	is_negative;
	int	number;
	int	i;
	int	base_size;

	base_size = ft_check_base_size(base);
	is_negative = 1;
	number = 0;
	i = 0;
	if (base_size < 2)
		return (0);
	while (ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (ft_get_in_base(str[i], base) != -1 && base_size >= 2)
	{
		number = (number * base_size) + ft_get_in_base(str[i], base);
		i++;
	}
	return (number * is_negative);
}

/* converti le NBR en base base_from en string en base base_to*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (ft_check_base_size(base_from) < 2
		|| ft_check_base_size(base_to) < 2)
		return (NULL);
	return (ft_itoa(ft_atoi_base(nbr, base_from), base_to));
}

int	main(int argc, char **argv)
{
	(void)argc;
	char	*retour;
	retour = ft_convert_base(argv[1], argv [2], argv[3]);
	printf("%s\n", retour);
	free(retour);
	return (0);
}


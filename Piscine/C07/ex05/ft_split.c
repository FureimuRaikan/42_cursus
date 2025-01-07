/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguinio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:14:56 by yguinio           #+#    #+#             */
/*   Updated: 2024/07/18 11:44:24 by yguinio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/* renvoie 1 si le char c fait partie de la string charset*/
int	check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

/* copie la string src a dest */
void	ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !check_charset(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/* renvoie la taille du mot de la chaine str entre deux caracteres de charset */
int	ft_word_len(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && !check_charset(str[i], charset))
		{
			while (str[i] && !check_charset(str[i], charset))
			{
				count++;
				i++;
			}
			return (count);
		}
		i++;
	}
	return (count);
}

/* compte le nombre de mots de la string str decoupee par les charset */
int	count_words(char *str, char *charset)
{
	int	i;
	int	is_word;
	int	count;

	is_word = 0;
	count = 0;
	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (check_charset(str[i], charset))
			is_word = 0;
		else if (!is_word)
		{
			count++;
			is_word = 1;
		}
		i++;
	}
	return (count);
}

/* fonction split */
char	**ft_split(char *str, char *charset)
{
	int			j;
	int			i;
	char		**tableau;
	const int	word_nbr = count_words(str, charset);

	tableau = (char **)malloc(sizeof(char *) * (word_nbr + 1));
	if (!tableau)
		return (NULL);
	i = 0;
	j = 0;
	while (check_charset(str[j], charset))
		j++;
	while (i < word_nbr)
	{
		tableau[i] = (char *)malloc(sizeof(char *)
				* (ft_word_len(str + j, charset) + 1));
		ft_strcpy(tableau[i], str + j, charset);
		j += ft_word_len(str + j, charset);
		while (check_charset(str[j], charset))
			j++;
		i++;
	}
	tableau[i] = 0;
	return (tableau);
}
/*
int	main(int argc, char **argv)
{
	int			i;
	char		**tableau;

	(void)argc;
	i = 0;
	tableau = ft_split(argv[1], argv[2]);
	while (tableau[i])
	{
		printf("%s\n", tableau[i]);
		i++;
	}
	i = 0;
	while (tableau[i])
	{
		free(tableau[i]);
		i++;
	}
	free(tableau);
	return (0);
}*/

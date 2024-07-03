/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbanabi <abbanabi@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 02:31:59 by abbanabi          #+#    #+#             */
/*   Updated: 2024/02/15 18:32:31 by abbanabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_idx(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_is_basic(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	base_len(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (base && base[i])
	{
		j = i + 1;
		if (ft_isspace(base[i]))
			return (0);
		while (base[j])
		{
			if (base[j] == base[i] || base[i] == '-' || base[i] == '+')
				return (0);
			j++;
		}
		i++;
		len++;
	}
	if (len <= 1)
		return (0);
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	long	sum;
	int		sin;
	int		idx;

	idx = 0;
	sin = 1;
	sum = 0;
	if (!base_len(base))
		return (0);
	while (str && str[idx] && ft_isspace(str[idx]))
		idx++;
	while (str && str[idx] && (str[idx] == '+' || str[idx] == '-'))
	{
		if (str[idx] == '-')
			sin *= -1;
		idx++;
	}
	while (str && str[idx] && ft_is_basic(str[idx], base))
	{
		sum = sum * base_len(base) + base_idx(str[idx], base);
		idx++;
	}
	return (sum * sin);
}

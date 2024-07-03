
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int max = 0;
	int i = 0;
	int swap;
	// while (i < (len - 1))
	// {
	// 	if (tab[i] < tab[i + 1])
	// 	{
	// 		swap = tab[i];
	// 		tab[i] = tab[i + 1];
	// 		tab[i + 1] = swap;
	// 		i = 0;
	// 	}
	// 	else
	// 		i++;
	// }

	while (i < len)
	{
		max = tab[i];
		if(max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
	
}

int main(void)
{
	int tab[] = {3,1,4,9,10};
	printf("%d", max(tab,5));
	return (0);
}
int main(void)
{
	char str[] = "abc   ";
	int i = 0;
	while (str[i])
	{
		if(str[i] == '\t')
			str[i] = 32;
		i++;
	}
	

	return (0);
}
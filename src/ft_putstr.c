void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str && str[i] != '\0')
	{
		ft_putchar(str[i]);
	}
}
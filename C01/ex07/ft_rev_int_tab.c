void ft_rev_int_tab(int *tab, int size)
{
	int a;
	int b;

	b = 0;
	while(b <= size)
	{
		a = tab[b];
		tab[b] = tab[size - b];
		tab[size - b] = a;
		b++;
	}
}

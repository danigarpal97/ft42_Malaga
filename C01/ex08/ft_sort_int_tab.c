void ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int indice;
	int swap;

	a = 0;
	while (a < size - 1)
	{
		indice = a;
		b = a++;
		while(b < size)
		{
			if(tab[b] < tab[indice])
				indice = b;
			b++;
		}
		swap = tab[a];
		tab[a] = tab[indice];
		tab[indice] = swap;
	}
}

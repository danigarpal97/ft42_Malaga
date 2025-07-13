#include <unistd.h>

// Devuelve un puntero a un array de los carácteres 0-9 + a-f (hexa)
char *ft_hex_array(void)
{
	static char hex_array[16];
	int i;

	i = 0;
	while(i < 10)
	{
		hex_array[i] = '0' + i;
		i++;
	}
	while(i < 16)
	{
		hex_array[i] = 'a' + (i - 10);
		i++;
	}
	return hex_array;
}

// Imprime la primera columna y la separación entre primera y segunda columna
void ft_print_address_hex(void *addr)
{
	char hex_address[16];
	char *hex_digits;
	int i;
	unsigned long address;

	i = 15;
        hex_digits = ft_hex_array();
	address = (unsigned long)addr;
	while(i >= 0)
	{
		hex_address[i--] = hex_digits[address % 16];
		address /= 16;
	}
	write(1, hex_address, 16);
	write(1, ": ", 2);
}  

// Imprime la segunda columna y la separación entre segunda y tercera columna
void ft_print_content_hex(void *addr, unsigned int size)
{
	int i;
	char *hex_digits;
	char content[2];
	unsigned char *data;

	data = (unsigned char *)addr;
	i = 0;
	hex_digits = ft_hex_array();
	while(i < 16)
	{
		if(i < size)
		{
			content[0] = hex_digits[data[i] / 16];
                	content[1] = hex_digits[data[i] % 16];
		}
		else
		{
			content[0] = ' ';
			content[1] = ' ';
		}
		write(1, content, 2);
		if(i++ % 2 == 1)
			write(1, " ", 1);
	}
}

// Imprime la tercera y última columna, además de un salto de línea
void ft_print_content_printable(void *addr, unsigned int size)
{
	int i;
	char content;
	unsigned char *data;

	data = (unsigned char *)addr;
	i = 0;
	while(i < 16)
	{
		if(i < size)
		{
			if(data[i] < 32 || data[i] == 127)
				content = '.';
			else
				content = data[i];
		}
		else
			content = ' ';
		write(1, &content, 1);
		i++;
	}
	write(1, "\n", 1);
}

// Función principal que saca una línea en la tabla de datos
void *ft_print_memory(void *addr, unsigned int size)
{
	void *ptr;
	unsigned int offset;

	ptr = addr;
	offset = 0;
	while(offset < size)
	{
		ft_print_address_hex(addr);
		ft_print_content_hex(addr, size - offset);
		ft_print_content_printable(addr, size - offset);
		addr += 16;
		offset += 16;
	}
	return ptr;	
}

// El programa se debe entregar sin main, pero aquí está para comprobar que funciona todo y luego lo borro
/*int main(void)
{
    char data[] = "Bonjour les aminches\n\tc'est fou\ttout ce qu'on peut faire avec...\n\nprint_memory\n\nlol.lol\n \0";

    ft_print_memory(data, sizeof(data));
    return 0;
}*/

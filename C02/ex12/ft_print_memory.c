#include <unistd.h>

void ft_print_address_hexa(void *addr)
{
	char hex_digits[16];

}  

void ft_print_content_hexa(void *addr, unsigned int size)
{

}

void ft_print_content_printable(void *addr, unsigned int size)
{

}

void *ft_print_memory(void *addr, unsigned int size)
{
	void *ptr;
	unsigned int offset;

	ptr = addr;
	offset = 0;
	
	while(offset < size)
	{
		ft_print_address_hexa(addr);
		ft_print_content_hexa(addr, size - offset);
		ft_print_content_printable(addr, size - offset);
		addr += 16;
		offset += 16;
	}

	return ptr;	
}

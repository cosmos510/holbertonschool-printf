#include "main.h"
/**
 * rot13 - function applies the ROT13 substitution cipher to a given string.
 *       It takes a variable argument list pointer ptr containing the string to
 *       be encoded/decoded. It uses a predefined substitution table to perform
 *       the ROT13 transformation. The function iterates through each character
 *       of the input string and applies the ROT13 substitution, printing the
 *       transformed characters using _putchar.
 * @ptr: Pointer to the variable argument list
 * containing the string to be encoded/decoded.
 * Return: count of characters printed after applying the ROT13 transformation.
 **/
int rot13(va_list *ptr)
{
	char in[57] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
				 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
				 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
				 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
				 'w', 'x', 'y', 'z', ' ', '!', '_', ',', '.'};
	char out[57] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
				 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
				 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
				 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
				 'j', 'k', 'l', 'm', ' ', '!', '_', ',', '.'};
	int i = 0;
	int count, pcount;
	int num = 57;
	char *s = va_arg(*ptr, char *);

	while (s[i])
	{
		count = 0;
		while (count < num)
		{
			if (s[i] == in[count])
			{
				_putchar(out[count]);
				pcount++;
				break;
			}
			count++;
		}
		i++;
	}
	return (pcount);
}

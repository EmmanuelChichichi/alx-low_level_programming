#include "main.h"

/**
 * _islower - determines lowecase character
 *  @c: is the char to be checked
 *  Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	
		return (1);
	
	else
	
		return (0);
}

#include "main.h"

/**
 * _isupper - check if c is upper
 *
 * @c: character to check
 *
 * Return: 0 if not and 1 if its uppercase
 */
int _isupper(int c){
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

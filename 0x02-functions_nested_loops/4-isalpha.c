#include "main.h"
/**
 *_isalpha - This file check if a character is in lower case or upper case
 *@c: The parameter to check
 *Return: 1 if the character is lower or upper and 0 if it is bigger
*/
int _isalpha(char c)
{
	return ((c >= 'a' && c <= 'z) || (c >= 'A' && c <= 'Z'));
}

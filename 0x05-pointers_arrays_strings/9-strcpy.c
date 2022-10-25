/**
 * _strcpy - Write a function that copies the string pointed to by src
 * @dest: a pointer to destination of string
 * @src: a pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *mid = dest;

	while (*src)
		*dest++ = *src++;
	return (mid);
}

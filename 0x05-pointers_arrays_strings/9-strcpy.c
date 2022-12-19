/**
 * _strcpy - function that copies the strings pointed to by src
 * @dest: pointer to dsetination
 * @src: pointer to source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dennis = dest;

	while (*src)
		*dest++ = *src++;
	return (dennis);
}

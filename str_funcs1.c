#include "shell.h"

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, size_t n);

/**
 * _strlen - A function that returns the length of a string.
 * @s: A pointer to the string character.
 *
 * Return: To return the length of the character string.
 */
int _strlen(const char *s)
{
	int length = 0;

	if (!s)
		return (length);
	for (length = 0; s[length]; length++)
		;
	return (length);
}

/**
 * _strcpy - That Copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed by des.
 * @dest: A Pointer to the destination of a copied string.
 * @src: A Pointer to the src of the source string.
 *
 * Return: to return Pointer to dest.
 */
char *_strcpy(char *dest, const char *src)
{
	size_t i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - ThatbConcantenates two strings.
 * @dest: A Pointer to destination string.
 * @src: A Pointer to source string.
 *
 * Return: A Pointer to destination string.
 */
char *_strcat(char *dest, const char *src)
{
	char *destTemp;
	const char *srcTemp;

	destTemp = dest;
	srcTemp =  src;

	while (*destTemp != '\0')
		destTemp++;

	while (*srcTemp != '\0')
		*destTemp++ = *srcTemp++;
	*destTemp = '\0';
	return (dest);
}

/**
 * _strncat - That Concantenates two strings where n number
 *            of bytes are copied from the source.
 * @dest: Pointer to destination string.
 * @src: the Pointer to source string.
 * @n: n bytes to copy from src.
 *
 * Return: The Pointer to destination string.
 */
char *_strncat(char *dest, const char *src, size_t n)
{
	size_t dest_len = _strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

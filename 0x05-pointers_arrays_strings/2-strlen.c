/**
 * _strlen - To get the length of a string passed to it
 *
 * @s - The memory address of the string passed
 *
 * Return -  The length of string passed
 */
int _strlen(char *s)
{
	int length = 0;

	while(*s != '\0')
	{
		++length;
		++s;
	}

	return length;

}

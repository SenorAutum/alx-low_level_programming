#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	const char messo[] =  "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, messo, sizeof(message) -1);
	return (1);
}

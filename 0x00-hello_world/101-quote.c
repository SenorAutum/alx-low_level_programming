#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	const char messo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, messo, sizeof(messo) - 1);
	return (1);
}

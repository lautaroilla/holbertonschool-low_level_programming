#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function main.
 * @argc: Element.
 * @argv: Pointer element.
 */
int main(int argc, char *argv[])
{
	while(argc--)
	{
		printf("%i\n", *argv++);
	}
	exit(0);
}

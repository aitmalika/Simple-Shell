#include "main.h"

/**
 *get_sigint - it handles the crtl + c call in prompt
 *@sig: it is signal handler
 */
void get_sigint(int sig)
{
	(void) sig;
	write(STDOUT_FILENO, "\n^-^ ", 5);
}

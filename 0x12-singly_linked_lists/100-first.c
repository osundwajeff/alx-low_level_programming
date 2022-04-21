#include <stdio.h>

void __attribute__((constructor))start(void);
/**
 * start - prints string before main is executed
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n")
}

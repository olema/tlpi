#include <stdio.h>
#include <errno.h>
#include <gnu/libc-version.h>

int main(void)
{
	printf("Hello, World!\n");
	printf("%s\n", gnu_get_libc_version());

	return 0;
}

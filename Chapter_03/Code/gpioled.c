#include <stdio.h>
#include <stdlib.h>		/* atoi()함수 */
#include <string.h>
#include <fcntl.h>
#include <unistd.h>		/* close()함수 */

int ledControl(int gpio)
{
	int df;
	char buf[BUFSIZ];

	fd = open

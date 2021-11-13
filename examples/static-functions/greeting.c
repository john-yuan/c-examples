#include "greeting.h"
#include <stdio.h>

static void print_internal_message () {
	printf("Internal message from greeting.c\n");
}

void greeting (const char *name) {
	printf("Hello, %s!\n", name);
	print_internal_message();
}

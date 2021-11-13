#include <stdio.h>
#include "greeting.h"

// The function `print_internal_message` only
// visible to the file define it. It's name
// can not be same with the global functions
// (which is not static).
static void print_internal_message () {
	printf("Internal message from main.c\n");
}

int main () {
	print_internal_message();
	greeting("John");
	return 0;
}

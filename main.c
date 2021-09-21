#include <stdio.h>

#include "lines.h"

int main()
{
	puts(MESSAGE_WELCOME);

	char *output__ = OUTPUT;
	FILE *output_file = fopen("output.txt", "wb+");
	fwrite(output__, 1, sizeof(OUTPUT), output_file);
	fclose(output_file);

	// Нужное изменение

	// Change 1
	// Change 2
	// Change 3
}

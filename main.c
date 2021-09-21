#include <stdio.h>

#include "lines.h"

int main()
{
	puts(MESSAGE_WELCOME);

	char *output = OUTPUT;
	FILE *output_file = fopen("output.txt", "wb+");
	fwrite(output_file, 1, sizeof(OUTPUT), output_file);
	fclose(output_file);

	// Some changes
	// Нужное изменение
}

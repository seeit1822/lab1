#include <stdio.h>

#define OUTPUT "Some text."

int main()
{
	puts("Welcome, user!");

	char *output = OUTPUT;
	FILE *output_file = fopen("output.txt", "wb+");
	fwrite(output_file, 1, sizeof(OUTPUT), output_file);
	fclose(output_file);
}

#include "monty.h"
bus_tV2 bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *contentV2;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_tV2 *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		contentV2 = NULL;
		read_line = getline(&contentV2, &size, file);
		bus.contentV2 = contentV2;
		counter++;
		if (read_line > 0)
		{
			execute(contentV2, &stack, counter, file);
		}
		free(contentV2);
	}
	free_stack(stack);
	fclose(file);
return (0);
}

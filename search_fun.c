#include "monty.h"
void search_fun(char *opcode, char *value, int ln, int format)
{
	int i = 0;
	int flag = 1;

	instruction_t func_list[] = {
		{"push", push_stack},
		{"pall", prt_st_contents},
		{"pint", top_element},
		{"pop", from_stack},
		{"nop", no_operation},
		{"swap", exchange_elmts},
		{"add", append_elmts},
		{"sub", remove_elmts},
		{"div", partition_elmts},
		{"mul", multply_elmts},
		{"mod", ramainder_cal},
		{"pchar", display_char},
		{"pstr", display_str},
		{"rotl", rotate_left},
		{"rotr", rotate_right},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	while (func_list[i].opcode != NULL)
	{
		if (strcmp(opcode, func_list[i].opcode) == 0)
		{
			execute_fnct(func_list[i].f, opcode, value, ln, format);
			flag = 0;
			break;
		}
		i++;
	}

	if (flag == 1)
		handle_error(3, ln, opcode);
}


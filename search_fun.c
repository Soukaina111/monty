#include "monty.h"
void search_fun(char *oper_code, char *val, int i, int pattern)
{
	int i = 0;
	int fg = 1;

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

	if (oper_code[0] == '#')
		return;

	while (func_list[i].oper_code != NULL)
	{
		if (strcmp(oper_code, func_list[i].oper_code) == 0)
		{
			execute_fnct(func_list[i].f, oper_code, val, i, pattern);
			fg = 0;
			break;
		}
		i++;
	}

	if (fg == 1)
		handle_error(3, i, oper_code);
}


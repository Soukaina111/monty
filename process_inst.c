#include "monty.h"
int process_inst(char *buf, int i, int pattern)
{
	char *oper_code, *val;

	if (buf == NULL)
		handle_error(4);

	oper_code = strtok(buf, "\n ");
	if (oper_code == NULL)
		return pattern;
	val = strtok(NULL, "\n ");

	switch (pattern)
	{
		case 0:
			if (strcmp(oper_code, "stack") == 0)
				return 0;
			break;
		case 1:
			if (strcmp(oper_code, "queue") == 0)
				return 1;
			break;
		default:
			break;
	}

	search_fun(oper_code, val, i, pattern);
	return pattern;
}


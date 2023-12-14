#include "monty.h"
void execute_fnct(op_func func, char *oper_code, char *va, int l, int pattern)
{
	stack_t *nd;
	int fg;
	int i;

	fg = 1;
	if (strcmp(oper_code, "push") == 0)
	{
		if (va != NULL && va[0] == '-')
		{
			va = va + 1;
			fg = -1;
		}
		if (va == NULL)
			handle_error(5, l);

		i = 0;
		while (va[i] != '\0')
		{
			if (isdigit(va[i]) == 0)
				handle_error(5, l);
			i++;
		}

		nd = crt_stack_nd(atoi(va) * fg);
		switch (pattern)
		{
			case 0:
				func(&nd, l);
				break;
			case 1:
				enq_stack(&nd, l);
				break;
			default:
				break;
		}
	}
	else
		func(&head, l);
}

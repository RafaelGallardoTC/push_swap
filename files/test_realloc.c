#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	int			len;
	t_stack		*stack_a;

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	/* Creation of b_stack must be modified */
	stack_a = stack_new(42);
	stack_a->next = stack_new(64);


	while (argv[i])
	{
		printf("stack_a: %d		input: %s		stack_a->next: %d\n", stack_a->value, argv[i], stack_a->next->value);
		i++;
	}

	free(stack_a->next);
	free(stack_a);
	return (0);
}

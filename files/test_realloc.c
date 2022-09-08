#include "../push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	int			len;
	t_stacks	st;

	i = 1;
	len = argc - 1;
	if (argc <= 1)
		return (-1);
	/* Creation of b_stack must be modified */
	st.stack_a = (int *)malloc(len * sizeof(*st.stack_a));
	st.stack_b = (int *)malloc(len * sizeof(*st.stack_b));
	if (!st.stack_a || !st.stack_b)
		return (-1);
	if ((st.stack_b = ft_realloc(st.stack_b, len * (sizeof(*st.stack_b) + 4))) == NULL)
	{
		printf("Error 001\n");
		exit(-1);
	}
	if (char_to_int_array(&argv[1], st.stack_a) == -1)
	{
		printf("Error\n");
		exit(-1);
	}

	while (argv[i])
	{
		printf("sa: %d		input: %s		sb: %d\n", st.stack_a[i - 1], argv[i], st.stack_b[i]);
		i++;
	}

	free(st.stack_a);
	free(st.stack_b);
	return (0);
}

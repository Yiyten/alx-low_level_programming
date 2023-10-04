#include <stdio.h>
#include <stdlib.h>

/**
 *main-print sum of 2 nums
 *@argc:num of cmdline argu
 *@argv:pointer to an array of cmdline argu
 *Return:0-success, non-zero-fail
 */

int main(int argc, char *arv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

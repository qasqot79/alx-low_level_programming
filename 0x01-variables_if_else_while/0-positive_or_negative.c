#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main -Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
}
printf("%i is zero\n", n);
}

=======
* main -Entry point
*
* Return: Always 0 (success/correct)
*/
int main(void)

{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
}
printf("%i is zero\n", n);
}
>>>>>>> faf7e379d399572254bb29060865ac45eb8fb5a2
else if (n < 0)
{
printf("%i is negative\n", n);
}

else
{
printf("%i is positive\n", n);
}

return (0);
<<<<<<< HEAD

=======
}
>>>>>>> faf7e379d399572254bb29060865ac45eb8fb5a2

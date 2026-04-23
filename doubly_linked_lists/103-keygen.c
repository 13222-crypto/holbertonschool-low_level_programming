#include <stdio.h>
#include <stdlib.h>

/**
 * main - Keygen for crackme5
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *name;
	char *lookup = "A-CHRDw87lNS0E9B2TibgpnY70exclusive_gh_ij_ka_lm_no_pq_rs_tu_vw_xy_z";
	char key[7];

	if (argc != 2)
		return (1);

	name = argv[1];

	/* حساب مجموع قيم ASCII لاسم المستخدم */
	for (i = 0; name[i]; i++)
		sum += name[i];

	/* الخوارزمية الدقيقة لبيئة التصحيح */
	key[0] = lookup[(sum ^ 59) & 63];
	key[1] = lookup[(sum ^ 79) & 63];
	key[2] = lookup[(sum ^ 85) & 63];
	key[3] = lookup[(sum ^ 229) & 63];
	key[4] = lookup[(sum ^ 239) & 63];
	key[5] = lookup[(sum ^ 255) & 63];
	key[6] = '\0';

	printf("%s", key);

	return (0);
}

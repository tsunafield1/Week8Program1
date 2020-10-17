#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct stats
{
	int HP;
	int combo = 0;
};

int main()
{
	stats boxer[2];
	int x,n;
	scanf("%d", &x);
	boxer[0].HP = boxer[1].HP = x;
	for (int i = 1; i <= 2 * x; i++)
	{
		scanf("%d", &n);
		if (n % 2 == 0)
		{
			boxer[1].combo = 0;
			boxer[0].combo++;
			if (boxer[0].combo >= 3)
			{
				boxer[1].HP -= 3;
			}
			else
			{
				boxer[1].HP -= 1;
			}
		}
		else
		{
			boxer[0].combo = 0;
			boxer[1].combo++;
			if (boxer[1].combo >= 3)
			{
				boxer[0].HP -= 3;
			}
			else
			{
				boxer[0].HP -= 1;
			}
		}
		if (boxer[0].HP <= 0)
		{
			printf("1\n%d", n);
			break;
		}
		if (boxer[1].HP <= 0)
		{
			printf("0\n%d", n);
			break;
		}
	}
}
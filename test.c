#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:4996)//取消scanf返回值的警告

//统计空格  制表符 和换行符个数


#include <stdio.h>

int main()
{
	int c, nb, nt, nl;//统计空格  制表符  换行符
	nb = 0;
	nt = 0;
	nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c==' ')
		{
			++nb;
		}
		if (c == '\t')
		{
			++nt;
		}
		if (c == '\n')
		{
			++nl;
		}
	}
	printf("%d %d %d\n", nb, nt, nl);//ctrl+z可以结束

	return 0;
}
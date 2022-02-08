/*************************************************************************
	> File Name: while.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 05:09:46 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int sum=0,i=1;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("%d\n",sum);
	return 0;
}


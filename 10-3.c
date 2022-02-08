/*************************************************************************
	> File Name: 10-2.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 06:57:21 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int k,j,num=0x5c;
	printf("%#hx\n",num);
	printf("please input k :");
	scanf("%d",&k);
	printf("num=%#hx\n",(num &(0xe0<<k)));
	return 0;
}


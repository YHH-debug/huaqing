/*************************************************************************
	> File Name: 10-1.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 06:46:12 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	unsigned long int a=0x12345678, i,j;
	printf("gao= %#hx,di= %#hx ",((a>>16)|0x0000),(a|0x0000));
	
	return 0;
}


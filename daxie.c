/*************************************************************************
	> File Name: daxie.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 04:41:50 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int i;
	char j;
	printf("please input a char:");
	scanf("%c",&j);
	switch(j)
	{
	case 65 ... 90: 
		{
			printf("it is big\n");
			printf("xiaoxie is %c\n",j+32);
			break;
		}
	case 97 ... 122:
		{
		printf("it is small\n");
		printf("daxie is %c\n",j-32);
		break;
		}
	default : printf("error\n");

	}
	return 0;
}


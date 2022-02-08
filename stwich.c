/*************************************************************************
	> File Name: stwich.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 03:48:46 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int i,j;
	printf("please input interger:");
	scanf("%d",&i);
	switch(i/10)
	{
		case 0 ... 5: printf("bujige\n");break;
	    case 6: printf("jige\n");break;
	    case 7: printf("zhongdeng\n");break;
	    case 8: printf("lianghao\n");break;
	    case 9 ... 10: printf("youxiu\n");break;
		default: printf("error\n");					
	}
	return 0;
}


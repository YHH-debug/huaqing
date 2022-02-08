/*************************************************************************
	> File Name: 10-4.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 07:11:41 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int i,j,k,a,b;
	char m,l;
	printf("please nan | nv 1|2\n");
	scanf("%d",&i);
	//scanf("%d",&j);
	if(i==1)
	{
		printf("please input tizhong:");
		scanf("%d",&a);
		switch(a)
		{
		case 140 ... 500: printf("xue is 200ml\n");break;
		case 0 ... 139: printf("xue is 180ml\n");break;

		}
	}

	if(i==2)
	{
		
		printf("please input tizhong:");
		scanf("%d",&b);
		switch(b)
		{
		case 100 ... 500:printf("xue is 120ml\n");break;
        default:printf("xue is 120\n");break;
		}
	}
	return 0;
}


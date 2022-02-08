/*************************************************************************
	> File Name: 10-5.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 07:25:46 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int weight,distance,price,freight;
	float discount;
	printf("重量，路程，单价：");
	scanf("%d %d %d",&weight,&distance,&price);
	switch(distance)
	{
		case 0 ... 250:discount=0;break;
		case 251 ... 500:discount=0.02;break;
		case 501 ... 1000:discount=0.05;break;
		case 1001 ... 2000:discount=0.08;break;
		case 2001 ... 3000:discount=0.1;break;
		default:discount=0.15;break;
	}
	freight=weight*distance*price*(1-discount);
	printf("the sum is %d\n",freight);
	return 0;
}


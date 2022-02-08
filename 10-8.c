/*************************************************************************
	> File Name: 10-8.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 08:08:01 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	float temp=0.0,htemp=0.0;
	int i,j=0;
	do
	{
	htemp=(9.0/5.0)*temp+32.0;
	printf("temp=%.2f,htemp=%.2f  ",temp,htemp);
	j++;
	temp+=20.0;
	if(j==2)
	{
		printf("\n");
		j=0;
	}

	}while(temp<=250.0);
	return 0;
}


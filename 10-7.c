/*************************************************************************
	> File Name: 10-7.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 07:58:00 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	float temp,htemp=0.0;
	int i,j=0,k;
	for(temp=0.0;temp<=250;temp+=20)
	{
		htemp=(9.0/5.0)*temp+32.0;
		printf("temp=%.2f,htmp=%.2f  ",temp,htemp);
		j++;
		if(j==2)
		{
			printf("\n");
			j=0;
		}
	}
	printf("\n");
	return 0;
}


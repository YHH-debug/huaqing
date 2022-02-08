/*************************************************************************
	> File Name: 10-6.c
	> Author: YHH
	> Mail: 2353914883@qq.com
	> Created Time: Tue 08 Feb 2022 07:44:58 PM CST
 ************************************************************************/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	float temp=0,htemp;
	int j=0,k=0;
	while(temp<=250)
	{
		htemp=(9.0/5.0)*temp+32.0;
		printf("temp=%.2f,htemp=%.2f    ",temp,htemp);
		temp+=20.0;
		j++;
		if(j==3)
		{
			printf("\n");
			j=0;
		}
	
	}
	printf("\n");
	return 0;
}


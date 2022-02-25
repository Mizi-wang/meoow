#include <stdio.h>  
#include <stdbool.h>
#include <time.h>

//#define MateTimes struct MATETIMES
	

	//MateTimes{
	//int times;
	//int moretimes;
	//};
	int search(int *NullTimes,int returnsize);
	char* hour(int d);
void main() {
	
	int hash = 0;
	char d = 0;
	int timeout[] = {1,2,3,4,13,14,15,21,23,24,25,35,36,37,47 };
	/*
	MateTimes timeTrue[] = {
		//			-----示例------
		//		30*n== n/2 hour		--- 30*5=2:30=凌晨两点半
		//		60*n== n hour		--- 60*5=5:00=早上五点   
		//		720+60*n==12+n hour	--- 720+60*3=15:00 = 下午3点
		//以此类推，手动敲入蟹蟹
			
	
					};
					*/
	//time(NULL)/60/30%48
	//search(timeout,sizeof(timeout)/sizeof(int)/*sttim->tm_hour*/)
		if (search(timeout, sizeof(timeout) / sizeof(int))) {
			while (d != EOF) {
				while ((d = getchar()) != '\n') {
					hash = ((hash * 31) + d) % 10000; //和hash相乘的 31 可以改为你喜欢的散列，可以为任一 （1<<2*n）-1，即 费马小定理下的数字 值越大越散
				}
				printf("%d\n", hash>0?hash:-hash);
				hash = 0;
			}
		}
		
		return 0;
}

char* hour(int d) {
	char a, b = 0;
	b = d & 1 ? 30 - '0' : '0';
	a = d / 2;
	char NewTime_hour[3] = {a,':',b};
}
int search(int *NullTimes,int returnsize) {
	int i, d = ((time(NULL)+28800)% 86400)/1800;
	

	for (i = 0; i < returnsize; i++) {
		if (( d==NullTimes[i])) {
			return true;
		}
	}
	printf("错误！时段错误-\n可用时段：\n");
	for (i = 0; i < returnsize; i++) {
		printf("%s , ",hour(NullTimes[i]));
	}
	getchar();
	return false;
}
//(time(NULL) / 60) % 24 % 30
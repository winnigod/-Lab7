#include <stdio.h>

long convert(long h, long m, long s);

int main(){
	long hours,minutes,seconds;
	scanf("%d %d %d",&hours, &minutes, &seconds);
	printf("%d",convert(hours,minutes,seconds));
}

long convert(long h, long m, long s){
	long sec;
	sec = (h*3600)+(m*60)+s;
	return sec;
}
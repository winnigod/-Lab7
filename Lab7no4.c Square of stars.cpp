#include <stdio.h>

void printHead(int w);
void printBody(int w, int h);

int main() {
	int width,height;
	scanf("%d %d",&width,&height);
	printHead(width);
	printBody(width,height);
	printHead(width);
}

void printHead(int w){
	int i;
	for(i=0;i<w;i++){
		printf("* ");
	}
	printf("\n");
}
void printBody(int w, int h){
	int i,j;
	for(j=0;j<h-2;j++){
		printf("*");
		for(i=0;i<(w-2)*2+1;i++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
}

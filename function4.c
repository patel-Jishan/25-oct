#include<stdio.h>
int calculatecube(int i){
	return i*i*i;
	
}
int main(){
	int i;
	printf("enter any number :");
	scanf("%d",&i);
	int cube =calculatecube(i);
	printf("cube is :%d\n",cube);
}

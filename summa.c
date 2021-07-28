#include<stdio.h>
//struc node {
//int data;
//struct node *next;
//};
//void i
void func(int n){
	if(n>0){
		func(--n);
		printf("%2d",n);
		func(--n);
	}
	
}
void main(){
	func(4);
	
}

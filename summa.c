// #include<stdio.h>
// //struc node {
// //int data;
// //struct node *next;
// //};
// //void i
// // void func(int n){
// // 	if(n>0){
// // 		func(--n);
// // 		printf("%2d",n);
// // 		func(--n);
// // 	}
	
// // }
// // void main(){
// // 	func(4);
	
// // }

// int main(){
	
// 	int a=1;
	
// 	printf("%d",a+=(a+=3,5,a));


// }
#include<stdio.h>

   int findMinSubArray(int S, int n,int arr[]) {
    // TODO: Write your code here
    int sum=0,start=0,min=-1;
    for(int i=0;i<n;i++){
      sum+=arr[i];
      if(sum>=S){
        if(i-start+1<min){
          min=i-start+1;
        }
        sum-=arr[start++];
      }
    }
    if(min!=-1)
      return min;
    return -1;
  }

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		int s;
		scanf("%d",&s);
	printf("%d",findMinSubArray(s,n,arr));
}
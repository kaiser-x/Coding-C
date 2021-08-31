// // #include<stdio.h>

// // int bits_cal(int n){
// //     int count=0;
// // 		while(n>0) {
// // 			n=n&(n-1);
// // 			count++;
// // 		}
// //         return count;
// // }
// // int main(){
// //     // printf("helloworld");
// //     // int age;
// //     // scanf("%d",&age);
// //     // printf("\n%d",age);
// //     int n
// //     return 0;
// // }

// #include<stdio.h>
// int main(){
//     int n,num;
//     scanf("%d",&n);
//     for(int i=1,k=0;i<=n;i++,k=k+2){
//         num=i;
//         for(int j=i;j<i*2;j++){
//             printf("%d",num);
//             num++;
//         }
//         num=num-2;
//         for(int j=1;j<i;j++){
//             printf("%d",num);
//             num--;
//         }
//           printf("\n");
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int rem;
//     while(n!=0){
//         rem=n%10;
//         printf("%d",rem);
//         n=n/10;
//     }
// }
 #include <stdio.h>
#include<stdlib.h>
float findMedian(int* a, int n)
{
 for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++){
 if(a[i]>a[j]){
 int temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 }
if (n % 2 != 0)
return a[n/2];
return (a[n/2] + a[n/2-1])/2.0;
}
int main()
{
 int n;
 scanf("%d",&n);
 int* a;
 a=(int*)malloc(sizeof(int)*n);
 for(int i=0;i<n;i++){
 scanf("%d",&a[i]);
 }
 printf("%f",findMedian(a,n));
return 0;
} 
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


// // }

// #include<stdio.h>

//    int findMinSubArray(int S, int n,int arr[]) {
//     // TODO: Write your code here
//     int sum=0,start=0,min=-1;
//     for(int i=0;i<n;i++){
//       sum+=arr[i];
//       if(sum>=S){
//         if(i-start+1<min){
//           min=i-start+1;
//         }
//         sum-=arr[start++];
//       }
//     }
//     if(min!=-1)
//       return min;
//     return -1;
//   }

// int main(){
// 	int n;
// 	scanf("%d",&n);
// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 		scanf("%d",&arr[i]);
// 		int s;
// 		scanf("%d",&s);
// 	printf("%d",findMinSubArray(s,n,arr));
// }

#include<stdio.h>
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t-->0){
//         int n;
//         scanf("%d",&n);
//         int sum=0;
//         while(n>1){
//             if(n%2==0){
//                 sum+=n/2;
//                 n=n/2;
//             }
//             else{
//                 sum+=n/2;
//                 sum++;
//                 n=n/2;
//             }
//         }
//         printf("%d\n",sum);
//     }
// }

// int main(){
//     int htl;
//     scanf("%d",&htl);
//     int id[htl],md[htl],mdc[htl],idr[htl],idrc[htl];
//     for(int i=0;i<htl;i++){
//         scanf("%d\n%d\n%d\n%d\n%d",&id[i],&md[i],&mdc[i],&idr[i],&idrc[i]);
//     }
//     int chr,bdg,com,pd,tax;
//     char pr;
//     scanf("%d\n%d\n%d\n%d\n%c\n%d",&chr,&bdg,&com,&pd,&pr,&tax);

//     for(int i=0;i<htl;i++){
//         int sum=0;
//         if(chr<=md[i])
//             sum+=mdc[i];
//         else{
//             sum+=((chr-md[i])%idr[i])*idrc[i];
//         }
//         sum+=(sum/100)*com;
//         if(pr=='Y')
//             sum+=(sum/100)*pd;
//         sum+=(sum/100)*tax;

//         if(sum<=bdg)
//             printf("%d\n",id[i]);
//     }

// // }

// int main(){
//     int y,m,d;
//     int n;
//     int t[12] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
//     scanf("%d",&n);
//     while(n--){
//         scanf("%d-%d-%d",&y,&m,&d);
       
//     y -= m < 3;
//    printf ("%d", y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
//     }
// }
/* A program to find day of a given date */
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int r,c;
//         scanf("%d,%d",&r,&c);
//         int k=0;
//         for(int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 if(i==0&&j==0)
//                     printf("[");
//                 if(j==0)
//                     printf("[");
//                 printf("%d",++k);
//                 if(j<c-1)
//                     printf(", ");
//                 if(j==c-1)
//                     printf("]");
//                 if(j==c-1&&i!=r-1)
//                     printf(", ");
//                 if(i==r-1&&j==c-1)

//                     printf("]");
//                 // printf("%d,",k++);
                
//             }
//         }
//         printf("\n");
//     }
// }
// #include<stdio.h>
// int sod(int n){
//     int rm,sum=0;
//     while(n!=0){
//         sum+=n%10;
//         n=n/10;
//     }
//     return sum;
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t-->0){
//         int n,f=1,ch=1;
//         scanf("%d",&n);
//         while(1){
//             if(n<=0||sod(n)%3==0){
//                 f=0;
//                 break;
//             }
//             n=n-1;
//             ch=!ch;
//         }
//         if(ch==1)
//             printf("Mike\n");
//         else
//             printf("Jim\n");
//     }
// }

#include<stdio.h>
// int main(){
//     int n,q;
//     scanf("%d %d",&n,&q);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int j=0;j<q;j++){
//         int u,v;
//         scanf("%d %d",&u,&v);
//         int sum=0;
//         for(int k=u-1;k<v;k++){
//             sum=sum^arr[k];
//         }
//     printf("%d\n",sum);
//     }


// }

// int main(){
//     int n,k;
//     scanf("%d %d",&n,&k);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int count=0;
//     for
// }
int get();
int main() {
    // int n,m,c=1;
    // scanf("%d %d",&n,&m);
    // int a[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    // for(int i=1;i<n;i++){
    //     if(a[i-1]+m<=a[i])
    //         printf("%d ",++c);
    //     else{
    //         c=1;
    //         printf("%d ",c);
    //     }
    // }
    // const int i=0;
    // printf("%d",i++);
    // int a[3][3]={1,12,63,94};
    // printf("%d",*(*(a))+1);
    // const int x=get();
    // printf("%d",x);}
    // int get(){
    //     return 10;
    // }
    // const char *s="";
    // char str[4]="hii";
    // s=str;
    // while(*s){
    //     printf("%c",*s++);
    // }
    // printf("%lu",sizeof(NULL));
    // const int x=7;
    
}
//display true or false if a subset with that sum is present

//recursion exponential 2^n TC

#include<stdio.h>
#include<stdbool.h>
bool subset(int arr[],int n,int sum){
    if(sum==0)
        return true;
    if(sum!=0&&n==0)
        return false;
        
    if(arr[n-1]>sum)
        return subset(arr,n-1,sum);

    return subset(arr,n-1,sum)|| subset(arr,n-1,sum-arr[n-1]);

}

// //Using DP

// bool subsetdp(int arr[],int n,int sum){

//     bool dp[n+1][sum+1];

//     for(int i=0;i<sum+1;i++){
//         dp[0][i]=false;
//     }
//     for(int i=0;i<sum+1;i++){
//         dp[i][0]=true;
//     }

//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){

//                 if(arr[i][j]>=sum){


//                 }

//             }
//         }
// }

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("sum\n:");
    scanf("%d",&sum);
    if(subset(arr,n,sum)== true)
        printf("subsset true");
    else
        printf("subset fals:");
}

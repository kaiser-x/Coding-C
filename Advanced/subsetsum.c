//display true or false if a subset with that sum is present

//recursion exponential 2^n TC

#include<stdio.h>
#include<stdbool.h>
bool subset(int arr[],int n,int sum){
    if(sum==0)
        return 1;
    if(sum!=0&&n==0)
        return 0;
    if(arr[n-1]>sum)
        return subset(arr,n-1,sum);

    return subset(arr,n-1,sum)|| subset(arr,n-1,sum-arr[n-1]);

}

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

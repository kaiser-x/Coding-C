// remove dupplicates in a sorted array and return the length of new arr
//{1,1,2,2,2,3,3,3}
//op-3 because{1,2,3}
#include<stdio.h>
int removedup(int arr[],int n){
    int i=0,j;
    for(j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("length is:%d",removedup(arr,n));
}
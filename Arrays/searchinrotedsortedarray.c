//search  element in a rotated sorted array;
#include<stdio.h>
int search(int arr[],int n,int x){

    int left=0;
    int right=n-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        
        if(arr[mid]==x)
            return mid;
        
        else if(arr[mid]>=arr[left]){
                if(x<=arr[mid]&&x>=arr[left])
                    right=mid-1;
                    else
                    left=mid+1;
        }
        else{
            if(x>=arr[mid]&&x<=arr[right])
                left=mid+1;
            else
                right=mid-1;
        }

    }
    return -1;
}

int main(){
    int arr[9]={7,8,0,1,2,3,4,5,6};
    printf("found at: %d",search(arr,9,5));
}
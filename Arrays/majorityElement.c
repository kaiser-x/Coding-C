//the element that occurs more than n/2 times

//brute force is obviously having two for loops O(n2)

//better would be to use hashmap with frequecy as value

//but theres is a optimal approach with O(n) TC and inplace with just tw temp varialbles;

//its called as Moore's voting algorithm, the no.of  majority = minority,so at the last suffix array 

//the temp element will have the majority element,the majority and minority element in the prefix array beffore to the 

//the suffix array has minority ele=majority ele, that's the intution behind this

        
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int count=0,ele=0;
    for(int i=0;i<n;i++){

        if(count==0)
            ele=arr[i];
        
        if(ele==arr[i])
            count++;

        else    
            count--;
    }

    printf("\n:%d",ele);
}

// int main(){
// int max=0,ele,count;
// int n;
// scanf("%d",&n);
// int arr[n];
// for(int i=0;i<n;i++)
//     scanf("%d",&arr[i]);
// for(int i=0;i<n;i++){
//     count=0;
//     for(int j=0;j<n;j++){
//         if(i!=j)
//         {
//         if(arr[i]==arr[j])
//             count++;        
//         }
//     }
//     if(count>max){
//     max=count;
//      ele=arr[i];;
//       }
//     }
// if(max!=0)
//     printf("%d",ele);
// else    printf("-1");

// }


//Print the non fibonacci numbers in the given range


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=0,d=0;

    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        d=a+b;
        for(int j=c+1;j<d;j++){
            if(j<=n)
                printf("%d ",j);
            else
                break;
        }
    }
}
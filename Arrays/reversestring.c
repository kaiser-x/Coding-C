/// Hi Zoho 
//Op - Zoho Hi


#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
        scanf("%[^\n]%s",s);
        int start,end;

        for(int start=end=strlen(s)-1;start>=-1;start--){
            if(s[start]==' '||start==-1){
                for(int j=start+1;j<=end;j++)
                    printf("%c",s[j]);
                    printf(" ");
                    end=start-1;
            }
        }
}
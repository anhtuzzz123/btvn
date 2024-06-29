#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int m[1000]={0};
int main(){
    char c[1000];
    gets(c);
    int n=strlen(c);
    int a[1000];
    int t=0;
    for(int i=0;i<n;i+=2){
        a[t++]=(c[i]-'0')*10+(c[i+1]-'0');
    }
    for(int i=0;i<t;i++){
        if(m[i]==0){
            for(int j=i+1;j<t;j++){
                if(a[i]==a[j]){
                    m[j]=1;
                }
            }
            printf("%d ",a[i]);
        }
    }
    }

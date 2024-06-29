#include<stdio.h>
#include<string.h>
int main()
{
    char c[500];
    gets(c);
    int n =strlen(c);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=c[i]-'0';
    }
    if(sum%3==0) printf("YES");
    else printf("NO");
}

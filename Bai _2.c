#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
struct num{
    char val[100];
    int fre;
    };

typedef struct num num;
int tn(char c[]){
    int n=strlen(c);
    for(int i=0;i<n/2;i++){
        if(c[i]!=c[n-i-1]) return 0;
    }
    return 1;
    }

    int n=0;
    num a[1000];
    int find(char c[])
    {
        for(int i=0;i<n;i++)
        {
            if(strcmp(c,a[i].val)==0) return i; // tim thay
        }
        return -1;
    }
int main()

{
    char c[50];
    while(scanf("%s",c)!= -1)
    {
        if(tn(c))
        {
            int pos=find(c);
            if(pos != -1)
            {
                a[pos].fre++;
            }
            else
            {
                strcpy(a[n].val,c);
                a[n].fre =1;
                ++n;
            }

        }
    }
    for(int i = 0; i < n; i++)
	{
		printf("%s %d\n", a[i].val, a[i].fre);
	}
}

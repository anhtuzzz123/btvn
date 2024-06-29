#include<string.h>
int main() {
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
	    int n, i;
	    scanf("%d", &n);
	    int a[100],count[100],max=0,pos[100];
	    for(i=0;i<n;i++){
	    	count[i]=0;
		}
	    for (i = 0; i < n; i++) {
	        scanf("%d", &a[i]);
	    }
	    for(i=0;i<n-1;i++){
	    	if(a[i]>=a[i+1]){
	    		count[i+1]=0;
			}
			else{
				count[i+1]=count[i]+1;
				if(count[i+1]>max) max=count[i+1];
			}
		}
		i=0;
		int z=0;
		while(i<n){
			if(count[i]==max){
				pos[z]=i;
				z++;
			}
			i++;
		}
		printf("Test %d:\n",k+1);
		printf("%d\n",max+1);
		for(i=0;i<z;i++){
			int j;
			for(j=pos[i]-max;j<=pos[i];j++){
				printf("%d ",a[j]);
			}
			printf("\n");
		}
	}
    return 0;
}

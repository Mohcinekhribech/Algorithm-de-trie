#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);
    int t[n];
    int a,b;
    int j;
    int i;

    for(i=0;i<n;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    printf("***********************************");
    for(i=0;i<n-1;i++){

        for(j=i;j<n;j++){
            if(t[i]>t[j]){
                b=j;
                a=t[b];
        t[b]=t[i];
        t[i]=a;
            }
        }

    }
    for(i=0;i<n;i++)
        printf("\n t[%d]=%d \n",i+1,t[i]);


    return 0;
}

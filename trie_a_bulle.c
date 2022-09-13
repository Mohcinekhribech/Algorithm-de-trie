#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("donne n :");
    scanf("%d",&n);
    int t[n];
    int a=1;
    int b;

    for(int i=0;i<n;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    while(a==1){
            a=0;
        for(int i=0;i<n-1;i++){
        if(t[i]>t[i+1]){
            b=t[i];
            t[i]=t[i+1];
            t[i+1]=b;
            a=1;
        }
    }
    }
    printf("*************************\n");
     for(int i=0;i<n;i++)
        printf("t[%d] = %d\n",i+1,t[i]);

    return 0;
}

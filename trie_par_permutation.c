#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("donne n :");
    scanf("%d",&n);
    int t[n];
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(t[i]>t[j]){
                ++a;
            }
        }
        b=t[a];
        t[a]=t[i];
        t[i]=b;
        a=0;


    }
     for(int i=0;i<n;i++)
        printf("t[%d] = %d\n",i+1,t[i]);
    return 0;
}

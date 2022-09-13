#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("donne n :");
    scanf("%d",&n);
    int t[n];
    int j;
    int a;
    for(int i=0;i<n;i++){
        printf("t[%d] = ",i+1);
        scanf("%d",&t[i]);
    }
    for(int i=0;i<n;i++){
        j=i;
        while(t[j]<t[j-1]&&j>=0){
            a=t[j-1];
            t[j-1]=t[j];
            t[j]=a;
            j--;
        }

    }
printf("***********\n");

    for(int i=0;i<n;i++)
    printf("t[%d] = %d\n",i+1,t[i]);
    return 0;
}

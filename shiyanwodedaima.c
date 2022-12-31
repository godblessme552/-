#include <stdio.h>
#include <stdlib.h>
int n,light[2000001],a;
int main()
{
    scanf("%d",&n);
    double t;
    for(int i=0;i<n;i++){
        scanf("%lf %d",&t,&a);
        for(int j=1;j<=a;j++){
            light[(int)(j*t)]=light[(int)(j*t)]==0?1:0;
        }
    }
    for(int i=0;i<2000001;i++){
        if(light[i]==1){
            printf("%d",i);
            break;
        }
    }
    system("pause");
    return 0;
}
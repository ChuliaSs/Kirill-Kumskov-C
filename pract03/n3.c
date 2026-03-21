#include <stdio.h>

int main() {
    int n,a,max,index;
    max=1000000;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        if (max>n){
            max=n;
            index=i;
        }
    }
    printf("min=%d, index=%d",max,index);

    return 0;
}

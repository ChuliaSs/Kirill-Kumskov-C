#include <stdio.h>

int main() {
    int n,a,sum;
    sum=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        sum+=n;
    }
    printf("sum=%d",sum);

    return 0;
}

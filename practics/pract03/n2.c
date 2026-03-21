#include <stdio.h>

int main() {
    int n,a,max;
    max=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        if (max<n){
            max=n;
        }
    }
    printf("max=%d",max);

    return 0;
}

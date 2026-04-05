#include <stdio.h>

int main() {
    int n,a,dq;
    float su=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        su+=n;

    }
    dq=su/a;
    printf("SrAr=%d",dq);

    return 0;
}

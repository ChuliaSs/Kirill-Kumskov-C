#include <stdio.h>

int main() {
    int n,a,max;
    max=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        if (n<0){
            mass[i]=0;
        }
    }
    for (int i =0;i<a;i++){
        printf("%d ",mass[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int n,a,max,index;
    max=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        if (0>n){
            max+=1;
        }
    }
    printf("%d",max);

    return 0;
}

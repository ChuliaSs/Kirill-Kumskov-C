#include <stdio.h>

int main() {
    int n,a,sunder;
    float su=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;


    }
    sunder=mass[0];
    mass[0]=mass[a-1];
    mass[a-1]=sunder;
        for (int i = 0;i<a;i++){
        printf("%d ",mass[i]);

        }
    return 0;
}

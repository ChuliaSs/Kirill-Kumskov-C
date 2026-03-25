#include <stdio.h>

int main() {
    int n;
    int mass[10];
    for (int i = 0;i<=9;i++){
        scanf("%d", &n);
        mass[i]=n;
    }
    for (int i = 9;i>=0;i--){
        printf("%d ",mass[i]);

    }
    return 0;
}

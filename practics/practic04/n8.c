#include <stdio.h>

int main() {
    int n,a,max,index;
    max=0;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        if (n%2==0){
            max=1;
        }
    }
    if (max==1){
        printf("четное число есть");
    }
    else printf("четных нет");


    return 0;
}

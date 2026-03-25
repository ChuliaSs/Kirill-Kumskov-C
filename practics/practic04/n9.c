#include <stdio.h>

int main() {
    int n,a,max,index;
    max=1;
    scanf("%d", &a);
    int mass[a];
    for (int i = 0;i<a;i++){
        scanf("%d", &n);
        mass[i]=n;
        }
    for (int i = 0;i<a-1;i++){
        if (mass[i]>mass[i+1]){
            max=0;
        }

    }
    
    if (max==1){
        printf("по возрастанию");
    }
    else printf("не по возрастанию");


    return 0;
}

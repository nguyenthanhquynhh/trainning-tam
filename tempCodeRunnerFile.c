#include<stdio.h>
int main(){
    int n;
    printf("Moi nhap n\n");
    scanf("%d", &n);
    for(int i = 90; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
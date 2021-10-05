#include<stdio.h>
int a, b, c;
void gtln(){
    int max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    printf("Gia tri lon nhat: %d", max);
}
int main(){
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    gtln();
    return 0;
}
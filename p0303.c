#include <stdio.h>

main(){
    double engel;
    double shokuhi;
    double sishutu;

    printf(" 飲食費： ");
    scanf("%lf", &shokuhi);
    printf(" 支出：　");
    scanf("%lf", &sishutu);

    engel = (shokuhi / sishutu) * 100;

    printf("%f",engel);
}
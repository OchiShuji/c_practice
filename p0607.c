#include <stdio.h>
#include <math.h>

int main(){
    double x,f,df,a,x_prev;
    int i;
    i = 0;
    x = 1;
    a = 0.375;

    do{
        f = pow(x,2)-a;
        df = 2*x;
        x_prev = x;
        x = x - f / df;
        i++;
    }
    while(fabs(x-x_prev)>0.0000000001);
    printf("sol:%f,iteration:%d \n",x,i);
}
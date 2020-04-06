#include <stdio.h>
#include <math.h>

int main(){
    double theta;
    double x,y;
    double a,b;
    double T[2][2];

    printf("(x,y) = ... ");
    scanf("%lf %lf",&x, &y);
    printf("theta = ... ");
    scanf("%lf", &theta);

    T[0][0] = cos(theta);
    T[0][1] = -sin(theta);
    T[1][0] = sin(theta);
    T[1][1] = cos(theta);

    a = T[0][0]*x+T[0][1]*y;
    b = T[1][0]*x+T[1][1]*y;

    printf("(a,b)=(%f,%f)\n",a,b);
}
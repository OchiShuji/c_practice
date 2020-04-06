#include <stdio.h>
#include <math.h>

int main(){
    int i,iteration;
    double result;
    double first,second;
    printf("iteration:");
    scanf("%d", &iteration);
    first = 0.0;
    second = 0.0;
    
    for(i=0;i<iteration;i++){
        first = first + pow(-1,i)/(2*i+1)*pow(pow(5,-1),2*i+1);
        second = second + pow(-1,i)/(2*i+1)*pow(pow(239,-1),2*i+1);
    }
    result = 4*(4*first-second);
    printf("approx. value of pi by Machin: %f \n",result);
}
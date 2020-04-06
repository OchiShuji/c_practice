#include <stdio.h>

int main(){
    int day,month,year;
    int c_year,c_month;
    char week[7];
    int num_of_days;
    int i;

    printf("what\'s date today?:");
    scanf("%d %d %d",&year, &month, &day);
    printf("what cal do you want?:");
    scanf("%d %d",&c_year,&c_month);

    for (i=month-1;i<=12;i++){
        num_of_days = num_of_days + days(year,i);
    }

    num_of_days = num_of_days - day;


    for (i=year+1;i<c_year;i++){
        if (i % 4 == 0) {
            num_of_days = num_of_days+366;
        }
        else {
            num_of_days = num_of_days+365;
        }
    }

    for (i=0;i<c_month;i++){
        num_of_days = num_of_days + days(c_year,i);
    }


}

int days(int year,int index) {
    int l;
    int days[12];
    for (l=0;l<=12;l++) {
        if (l==2) {
            if (year %4 == 0) {
                days[l-1] = 29;
            }
            else {
                days[l-1] =28;
            }
        }
        else if (l==4 || l==6 || l==9 || l==11) {
            days[l-1] = 30;
        }
        else {
            days[l-1] =31;
        }
    } 
    return days[index];  
}
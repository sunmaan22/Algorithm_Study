#include <iostream>

using namespace std;

int m1, d1, m2, d2,sum1=0,sum2=0;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int day_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=1;i<m1;i++){
        sum1+=day_month[i];
    }
    for(int j=1;j<m2;j++){
        sum2+=day_month[j];
    }
    int pivot = sum1 + d1;
    int day = sum2 + d2;
    if(pivot>=day){
        int minus = pivot-day;

        if(minus%7==0){
            cout<<"Mon";
        }
        else if(minus%7==1){
            cout<<"Sun";
        }
        else if(minus%7==2){
            cout<<"Sat";
        }
        else if(minus%7==3){
            cout<<"Fri";
        }
        else if(minus%7==4){
            cout<<"Thu";
        }
        else if(minus%7==5){
            cout<<"Wed";
        }
        else if(minus%7==6){
            cout<<"Tue";
        }
    }

    else{
        int minus = day-pivot;

        if(minus%7==0){
            cout<<"Mon";
        }
        else if(minus%7==1){
            cout<<"Tue";
        }
        else if(minus%7==2){
            cout<<"Wed";
        }
        else if(minus%7==3){
            cout<<"Thu";
        }
        else if(minus%7==4){
            cout<<"Fri";
        }
        else if(minus%7==5){
            cout<<"Sat";
        }
        else if(minus%7==6){
            cout<<"Sun";
        }
    }


    // Please write your code here.

    return 0;
}
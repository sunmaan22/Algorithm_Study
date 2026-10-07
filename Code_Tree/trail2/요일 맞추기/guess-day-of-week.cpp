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

/*
#include <iostream>
#include <string>

using namespace std;

int NumOfDays(int m, int d) {
    // 계산 편의를 위해 월마다 몇 일이 있는지를 적어줍니다. 
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    
    // 1월부터 (m - 1)월 까지는 전부 꽉 채워져 있습니다.
    for(int i = 1; i < m; i++)
        total_days += days[i];
    
    // m월의 경우에는 정확히 d일만 있습니다.
    total_days += d;
    
    return total_days;
}

int main() {
    // 변수를 선언하고 입력을 받습니다.
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    // 두 날짜간의 차이가 몇 일인지를 구합니다.
    int diff = NumOfDays(m2, d2) - NumOfDays(m1, d1);
    
    // 음수인 경우에는, 양수로 넘겨 계산해주면 올바르게 계산이 됩니다. 
    while(diff < 0)
        diff += 7;
    
    // 알맞은 요일의 이름을 출력합니다.
    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << day_of_week[diff % 7] << '\n';
    return 0;
}

*/
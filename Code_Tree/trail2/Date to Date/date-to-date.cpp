#include <iostream>

using namespace std;

int m1, d1, m2, d2, sum=0;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int day_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(m1==m2&&d1==d2){
        cout<<1;
    }
    else if(m1==m2){
        cout<<d2-d1+1;
    }
    else{
    //7월 8일 과 5월 2일이라치면
    for(int i=m1+1;i<m2;++i){
        sum+=day_month[i];
    }
    cout<< day_month[m1]-d1+d2+sum+1<<endl;

    // Please write your code here.
    }
    return 0;
}
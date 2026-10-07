#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int total = c+b*60+a*24*60;
    int pivot = 11+11*60+11*24*60;

    if(total<pivot){
        cout<<-1;
    }
    else{
        cout<<total-pivot;
    }
    // Please write your code here.

    return 0;
}
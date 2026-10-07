#include <iostream>
#define MAX 100
using namespace std;

int n,digit[MAX],cnt=-1;

int get_digit(int n){
    while(n!=0){
        cnt++;
        digit[cnt] = n%2;
        n = n/2;

    }
    return digit[MAX],cnt;
}


int main() {
    cin >> n;
    if(n==0){
        cout<<0;
    }
    get_digit(n);

    for(int i=cnt;i>=0;--i){
        cout<<digit[i];
    }

    // Please write your code here.

    return 0;
}
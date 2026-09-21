#include <iostream>

using namespace std;

int N;

int sumtoN(int N){
    if(N==1)return 1;
    return sumtoN(N-1)+N;

}

int main() {
    cin >> N;
    cout<<sumtoN(N);

    // Please write your code here.

    return 0;
}
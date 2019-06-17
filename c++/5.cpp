#include <iostream>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}


int main(){
    int answer = 1;
    for(int i = 1; i <= 21; i++){
        answer *= i / gcd(abs(answer), abs(i));
    }
    cout << answer;
}

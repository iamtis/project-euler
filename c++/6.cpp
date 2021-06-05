#include <iostream>

using namespace std;

int main(){
    long sumOfSquare = 0;
    long squareOfSum = 0;
    for(int i = 1; i <= 100; i++){
        sumOfSquare += i * i;
        squareOfSum += i;
    }
    squareOfSum = squareOfSum * squareOfSum;
    cout << squareOfSum - sumOfSquare << endl;
    return 0;
}

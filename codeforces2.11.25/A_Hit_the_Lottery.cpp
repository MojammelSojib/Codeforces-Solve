#include <iostream>
using namespace std;

int main() {
    int n, bills = 0;
    cin >> n;

    bills += n / 100; n %= 100;
    bills += n / 20;  n %= 20;
    bills += n / 10;  n %= 10;
    bills += n / 5;   n %= 5;
    bills += n;  

    cout << bills << endl;
    return 0;
}

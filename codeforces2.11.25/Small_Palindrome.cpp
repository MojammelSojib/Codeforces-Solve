#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;

        string left = "", right = ""; 

        for (int i = 0; i<x/2;i++)
        {
            left +='1';
            right='1'+ right;
        }
        for (int i = 0; i<y; i++)
        {
            left += '2';
        }
        string palindrome = left + right;
        cout << palindrome << endl;
    }

    return 0;
}

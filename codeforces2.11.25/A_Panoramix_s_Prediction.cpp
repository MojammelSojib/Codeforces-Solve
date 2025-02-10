#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n1, n2;
   cin >> n1 >> n2;
   int res;
   for(int i=n1+1; ; ++i){
    int t=0;
    for(int j=i-1; j>=2; j--){
        if(i%j==0){
            t=1;
            break;
        }
    }
    if(t==0){
        res = i;
        break;
    }
    }
   //  cout << res << endl;
    if(res==n2){
        cout << "YES";
    }else{
      cout << "NO\n";
    }
   }
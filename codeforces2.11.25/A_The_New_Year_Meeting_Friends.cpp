#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin>>a>>b>>c;

    int array[]={a,b,c};
    sort(array,array+3);

    int md=array[1];

    int distance=abs(md- array[0])+abs(md-array[2]);


    cout<<distance<<'\n';
    
    return 0;
}
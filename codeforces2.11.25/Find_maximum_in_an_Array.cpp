#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n) ;
	for (int i = 0; i < n; i++)
	{
	    int x;
	    cin >> x;
	    v.push_back(x);
	}
	int mx=*max_element(v.begin(),v.end());
	cout << mx << std::endl;
	
	}
	
	
}

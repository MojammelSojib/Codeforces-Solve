#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	string target="ADVITIYA";
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    if(s==target)
	    {
	    cout<<0<<endl;
	    continue;
    	}
	int totalstep=0;
	for(int i=0;i<8;i++)
	{
	    int step=(target[i]-s[i]+26)%26;
	    totalstep+=step;
	}
	
	std::cout << totalstep << std::endl;
}
return 0;
}

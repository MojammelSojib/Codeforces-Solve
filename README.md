#include <iostream>
#include<string>
using namespace std;

int main() {
    string name;
    cin>>name;
  cout << "Hello, "<< name <<endl;
  return 0;
}
problem 2
#include<iostream>
using namespace std;

int main()
{
    int i;
    long long lld;
    char ch;
    float f;
    double lf;

    cin>>i>>lld>>ch>>f>>lf;

    cout<<i<<endl;
    cout<<lld<<endl;
    cout<<ch<<endl;
    cout<<f<<endl;
    cout<<lf<<endl;

    return 0;
}
simple calculator
#include <iostream>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;

    long long summation = X + Y;
    long long multiplication = X * Y;
    long long subtraction = X - Y;

    cout << X << " + " << Y << " = " << summation << endl;
    cout << X << " * " << Y << " = " << multiplication << endl;
    cout << X << " - " << Y << " = " << subtraction << endl;

    return 0;
}
##
#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >>A>>B>>C>> D;

    long long X =(A*B)-(C*D);

    cout<<"Difference = "<< X << endl;
    return 0;
}
Area of a Circle
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double R;
    cin >>R;

    double area = 3.141592653*R*R;

    cout<< fixed << setprecision(9) << area << endl;
    return 0;
}

H.Two Numbers
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    double M,N;
    cin >> M >> N;


    cout<<"floor"<<" "<< M <<" / "<< N <<" = "<<floor(M/N) <<endl;
    cout<<"ceil"<<" "<< M <<" / "<< N <<" = "<<ceil(M/N) <<endl;
    cout<<"round"<<" "<<M <<" / "<< N <<" = "<<round(M/N) <<endl;

    return 0;
}
I
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int A,B;
    cin >> A>> B;

    if(A>=B){
        cout<<"Yes";
    }
    else
        cout<<"No";
    return 0;
}

k
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int max =A;
    int min =A;

    if(B>max)
        {
            max=B;
         }
    if(C>max)
    {
        max=C;
       
       }


       if(B<min)
       {
        min=B;
        }
    if(C<min)
        min=C;
    cout << min << " " << max << endl;

    return 0;
}

string compare
#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[200],b[200],c[200],d[200];

    cin>>a>>b>>c>>d;
    if(strcmp (b,d) ==0)
    {
        cout<<"ARE Brothers";
    }
    else {
        cout<<"NOT";
    }

    return 0;
}
Capital or Small or Digit
#include <bits/stdc++.h>
using namespace std;

int main() {
    char X;

    cin>>X;
    if(X>='0' && X<='9')
    {
        cout<<"IS DIGIT";
    }
    else if (X >='A' &&  X<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
   
    else
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";

    }
    return 0;
}


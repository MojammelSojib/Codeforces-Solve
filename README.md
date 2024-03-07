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
#N. Char
#include <bits/stdc++.h>
using namespace std;

int main() {
    char X;

    cin>>X;
   
    if (X >='A' &&  X<='Z')
    {
        X=X+32;
        cout<<X;
    }
   
    else
    {
        X=X-32;
        cout<<X;

    }
    return 0;
}
O. Calculator
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    char S;

    cin>>A>>S>>B;
   
    if (S=='+')
    {
        cout<<A+B<<endl;
    }
   
   else if (S=='-')
    {
        cout<<A-B<<endl;
    }
       else if (S=='*')
    {
        cout<<A*B<<endl;
    }
       else if (S=='/')
    {
        cout<<A/B<<endl;
    }
    return 0;
}

#First digit
#include <bits/stdc++.h>
using namespace std;

int main() {

    int X; 
    cin>>X;
   
   int rem=X/1000;

       if (rem%2==0)
    {
        cout<<"EVEN"<<endl;
    }

   else
    {
        cout<<"ODD"<<endl;
    }
    return 0;
}


Q. Coordinates of a Point
#include <bits/stdc++.h>
using namespace std;

int main() {

    float X,Y; 
    cin>>X>>Y;

       if (X>0 && Y>0)
    {
        cout<<"Q1"<<endl;
    }

   else if(X<0 && Y>0)
    {
        cout<<"Q2"<<endl;
    }
      else if(X<0 && Y<0)
    {
        cout<<"Q3"<<endl;
    } 
       else if(X>0 && Y<0)
    {
        cout<<"Q4"<<endl;
    }
       else if(X==0 && Y==0)
    {
        cout<<"Origem"<<endl;
    }
       else if(X!=0 && Y==0)
    {
        cout<<"Eixo X"<<endl;
    }
       else if(X==0 && Y!=0)
    {
        cout<<"Eixo Y"<<endl;
    }
    return 0;
}
R.Ages
#include <bits/stdc++.h>
using namespace std;

int main() {

    int N; 
    cin>>N;

    cout<<N/365<<" years"<<endl;
    N=N%365;
    cout<<N/30<<" months"<<endl;
    N=N%30;
    cout<<N<<" days"<<endl;

   
    return 0;
}
#Last 2 digit

#include <bits/stdc++.h>
using namespace std;

int main() {

   long long A,B,C,D;
   cin>>A>>B>>C>>D;

   A=A%100;
   B=B%100;
   C=C%100;
   D=D%100;

   int X=A*B*C*D;
   int Y=X%100;

   if(Y<10){
    cout<<"O"<<Y<<endl;
   }

   else
    cout<<Y<<endl;

    return 0;
}
#Sorting
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;

    cin>>a>>b>>c;
    int array[3];
    array[0]=a;
    array[1]=b;
    array[2]=c;

    sort(array,array+3);
    cout<<array[0]<<endl; 
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;  

    cout<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
   
    return 0;
}

#COMPARISON V
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B;
    char s;
    cin>>A>>s>>B;


    if(s=='>')
    {
        if(A>B){
            cout<<"Right"<<endl;
        } else{

     cout<<"Wrong"<<endl;
        }
    }
   else if(s=='<')
    {
        if(A<B){
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }

    else if (s== '=')
    {
        if(A==B){
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }

    return 0;

}

w.mathmetival expression
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,d;
    char S,Q;

    cin>>A>>S>>B>>Q>>C;
    
    if(S=='+')
    {
       d=A+B;
    }
    else if(S=='-')
    {
         d=A-B;
    }
    else if(S=='*')
    {
         d=A*B;
    }

    if(C==d)
        cout<<"Yes"<<endl;
    else
        cout<<d;

    return 0;

}
Y.The last 2 digit
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A,B,C,D;
    cin >>A>>B>>C>>D;

    A=A%100;
    B=B%100;
    C=C%100;
    D=D%100;

    int x=A*B*C*D;
    int y=x%100;

    if(y<10){
        cout<<0<<y<<endl;
    }
    else{
        cout<<y<<endl;
    }

    return 0;

}

Z..
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    if (B* log (A)> D *log(C)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

Contest #1
Problem A :Winter Sale
#include <bits/stdc++.h>
using namespace std;

int main() {
    double X,P ;
    cin>>X>>P;
    double x=P*(100/(100-X));

    cout<<fixed << setprecision(2)<< x <<endl;
    
    return 0;
}




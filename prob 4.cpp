#include <iostream>
using namespace std;

int main() 
{ 
int a;
cout << "enter a number=";
cin >>a;
 if((a%5==0)&&(a%11==0))
            {
                   cout<<" a is Divisible by 5 and 11";
            }
          else
           {
                  cout<<"a is not Divisible by 5 and 11";
            }
	return 0;
}

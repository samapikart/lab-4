 #include <iostream>
using namespace std;

int main() 
{ 
int a,b,c,big;
cout << "enter a number=";
cin >>a;
cout << "enter a number=";
cin >>b;
cout <<"enter a number=";
cin >>c;
if(a>b && a>c)

{
cout<<"a is greatest";
}
else
if(b>c && b>a)
{
cout<<"b is greatest";
}
else
if(c>a && c>b)
{
cout<<"c is greatest";
}


		
	return 0;
}

#include<iostream>
using namespace std;

namespace s1
{
	void add(int a , int b)
	{
		cout<<"Sum is = " << a+b << endl;
	}
}

namespace s2
{
	void add(float a , float b)
	{
		cout<<"Sum is = " << a+b << endl;
	}
}

using namespace s1;

int main()
{
	//add( 5,7);
	//add(3.4f , 5.3f);
	add(1 , 9.7f);
	//add(0,0);
	//add(4.4 , 0);
	}

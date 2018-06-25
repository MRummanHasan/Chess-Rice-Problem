#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	unsigned long long x=1, y=1;
	int n = 1;
	
	cout<< endl;
	
	while(n != 64)
	{
		cout<<"Rice at box no. "<< n <<" would be : "<< x << endl;
		cout<<"Total rice of "<< n <<" boxes would be :"<< y <<endl<<endl;
		
		x = x * 2;
		y = y + x;
		n++;
	}
	
	cout<<"Rice at box no. "<< n <<" would be : "<< x << endl;
	cout<<"Total Rice required would be : "<<y<<endl;
	cout<<endl<<endl;
	system("pause");
}

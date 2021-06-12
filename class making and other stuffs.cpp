                                       //class making and other stuff
#include<iostream>
using namespace std;
class ahadraza:
{
private:
int X , Y;
public:
int ahadraza(int a,int b )
{
	X=a;
	Y=b;
}
int area()
{
	cout<<"area if the rectangle"<<(X*Y);
}
};
int main()
{
	ahadraza r1:
		r1.setvalues(44,22);
		r1.area();
		return 0;
}

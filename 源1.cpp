#include<iostream>
#include<cmath>
using namespace std;
double rectangle(double, double);
int main()
{
	double a, b, s;
	cout << "�����볤�Ϳ�" << endl;
	cin >> a >> b;
	s = rectangle(a, b);
	cout << "���������Ϊ��" << s << endl;
	return 0;
}
double rectangle(double x, double y){
	double z;
	z = x * y;
	return z;
}



#include<iostream>
#include<cmath>
#define PI 3.1415926
using namespace std;
double circle(double);
int main(){
	double r, s;
	cout << "����뾶��" << endl;
	cin >> r;
	s = circle(r);
	cout << "Բ�����Ϊ��" << s << endl;
	return 0;
}
double circle(double x)
{
	double y;
	y = PI * x * x;
	return y;
}




#include<iostream>
#include<cmath>
using namespace std;
double area(double, double, double);
int main()
{
	double a, b, c, d;
	cout << "�����������ߣ�";
	cin >> a >> b >> c;
	d = area(a, b, c);
	cout << "���Ϊ:" << d << endl;
	return 0;
}
double area(double x, double y, double z)
{
	double w, v, u;
	w = (x + y + z) / 2;
	v = w*(w - x)*(w - y)*(w - z);
	u = sqrt(v);
	return u;
}
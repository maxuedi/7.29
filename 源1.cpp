#include<iostream>
#include<cmath>
using namespace std;
double rectangle(double, double);
int main()
{
	double a, b, s;
	cout << "请输入长和宽：" << endl;
	cin >> a >> b;
	s = rectangle(a, b);
	cout << "长方形面积为：" << s << endl;
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
	cout << "输入半径：" << endl;
	cin >> r;
	s = circle(r);
	cout << "圆的面积为：" << s << endl;
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
	cout << "请输入三条边：";
	cin >> a >> b >> c;
	d = area(a, b, c);
	cout << "面积为:" << d << endl;
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
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	double x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	printf("%.8lf\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
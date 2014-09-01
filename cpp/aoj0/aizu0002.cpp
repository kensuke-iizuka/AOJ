#include<iostream>
using namespace std;
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)){
	int n = 1;
	int c = a+b;
	while(c > 10){
	    c /=10;
	    n++;
	}
	cout << n << endl;
    }
}

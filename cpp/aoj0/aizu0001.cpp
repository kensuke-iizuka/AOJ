#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int> vi;
    for(int i=0;i<10;i++){
	scanf("%d",&n);
    	vi.push_back(n);
    }
    sort(vi.begin(),vi.end(),greater<int>());
    for(int i=0;i<3;i++){
    	cout << vi[i] << endl;
    }
    return 0;
}

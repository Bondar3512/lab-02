#include <iostream>
using namespace std;
int main(){
    int a; cin>>a; if(a<1582||a>2200){
		cout<<"Error"; return 0;}
	if (a%400==0||(a%4==0&&a%100!=0)){
		cout<<"Leap"; return 0;}
	else{cout<<"Normal"; return 0;
	}
}

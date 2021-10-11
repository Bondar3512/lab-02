#include <iostream>
using namespace std;
int main(){
char a;
cin>>a;
if (a>='0'&&a<='9') {
	cout <<"DIGIT"<< endl;
}
else if (a>='a'&&a<='z') {
	cout <<"CAPITAL"<< endl;
}
else if (a>='A'&&a<='Z') {
	cout <<"LOWERCASE"<< endl;
}
else{
	defauit:cout<<"NON‐ALPHANUMERIC"<<endl;return 0;
	}
}

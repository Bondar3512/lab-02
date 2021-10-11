#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double x, y,eps=0-9;
cout << "Coordinates x,y:\n";
    cin >> x >> y;
if ((y<=-x)&&(x<=y)&&(y=x*x-2)) cout << "YES\n";
	else cout<<"NO\n";return 0;
}

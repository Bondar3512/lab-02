#include <iostream>
using namespace std;
int main(){
setlocale(LC_ALL,"ru");
int year, t1, t2;
	std::cin>>year;
	    t1 = year % 10;
	    t2 = year % 100;
    if(t1 == 1 && t2 != 11)
		{std::cout<<year<<" год";}
    if(t1 >= 2 && t1 <= 4 && (t2 < 10 || t2 >= 20))
		{std::cout<<year<<" года";}
    else {std::cout<<year<<" лет";}
}

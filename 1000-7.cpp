#include  <iostream>
#include <Windows.h>
using namespace std;

int deadincide (int a){
	if(a!=-1){
	cout<<a<<" - 7 = "<<a-7<<endl;
	a=a-7;
	Sleep(50);
	deadincide(a);
}
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
int a = 1000;
deadincide(a);

system("pause");
return 0;
}


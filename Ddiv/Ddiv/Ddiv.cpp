#include <iostream>
#include "windows.h" 
#include"C:\Users\13427\Desktop\Alib\Alib\Alib.h"
#include"Bdll.h"
#include"C:\Users\13427\Desktop\Cdll\Cdll\Cdll.h"
using namespace std;
long double Div(float a,float b)
{
	return long double(a/b);
}
int main ()
{
	float a;
	float b;
	cin>>a>>b;
	cout<<"加为"<<Add(a,b)<<endl;
	cout<<"减为"<<Sub(a,b)<<endl;
HMODULE hmod = LoadLibrary("C://Users//13427//Desktop//Cdll//Debug//Cdll.dll"); //  //用于加载dll
   if(hmod == NULL)
    {
        FreeLibrary(hmod);
        cout<<"Dll loaded is fail..."<<endl;
        getchar();
        return -1;
    }
typedef long double(*LoadProc)(float x, float y);
LoadProc Load_proc = (LoadProc)GetProcAddress(hmod, "Mul");
//GetProcAddress()用于获得函数地址
long double iRet = Load_proc(a, b);
    cout<<"乘为"<<iRet<<endl;
	FreeLibrary(hmod);
	if(b==0)
   {
	   cout<<"不能除以0"<<endl;
    }
	else
	{
	cout<<"除为"<<Div(a,b)<<endl;
	}
	system("pause");
}
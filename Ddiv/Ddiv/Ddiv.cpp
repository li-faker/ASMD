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
	cout<<"��Ϊ"<<Add(a,b)<<endl;
	cout<<"��Ϊ"<<Sub(a,b)<<endl;
HMODULE hmod = LoadLibrary("C://Users//13427//Desktop//Cdll//Debug//Cdll.dll"); //  //���ڼ���dll
   if(hmod == NULL)
    {
        FreeLibrary(hmod);
        cout<<"Dll loaded is fail..."<<endl;
        getchar();
        return -1;
    }
typedef long double(*LoadProc)(float x, float y);
LoadProc Load_proc = (LoadProc)GetProcAddress(hmod, "Mul");
//GetProcAddress()���ڻ�ú�����ַ
long double iRet = Load_proc(a, b);
    cout<<"��Ϊ"<<iRet<<endl;
	FreeLibrary(hmod);
	if(b==0)
   {
	   cout<<"���ܳ���0"<<endl;
    }
	else
	{
	cout<<"��Ϊ"<<Div(a,b)<<endl;
	}
	system("pause");
}
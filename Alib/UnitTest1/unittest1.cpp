#include "stdafx.h"
#include "CppUnitTest.h"
#include"C:\Users\13427\Desktop\Alib\Alib\Alib.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Assert::AreEqual(6.0,Add(2.0,3.0),0.01);
			Assert::AreEqual(5.0,Add(2.0,3.0),0.01);
		}

	};
}
#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\13427\Desktop\Ddiv\Ddiv\Ddiv.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Assert::AreEqual(Div(4.0,2.0),2.0,0.01);
		}

	};
}
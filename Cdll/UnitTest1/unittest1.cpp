#include "stdafx.h"
#include "CppUnitTest.h"
#include"..\Cdll\Cdll.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			Assert::AreEqual(Mul(10,3),2.0,0.001);
		}

	};
}
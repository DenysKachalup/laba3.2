#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.2.2/Man.cpp"
#include "../lab3.2.2/Man.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Man a("name", 10);
			Assert::AreEqual(a.getA(), 10);
		}
	};
}

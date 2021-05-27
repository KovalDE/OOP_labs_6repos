#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6_1/Array.h"
#include "../Lab_6_1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array m(1);
			m[0] = 1;
			Assert::AreEqual(m.Suma(), 1.0);
		}
	};
}

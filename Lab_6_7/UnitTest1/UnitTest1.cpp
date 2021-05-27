#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6_7/Array.h"
#include "../Lab_6_7/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Zero<int> a;
			Assert::AreEqual(a.operator()(2), false);
		}
	};
}

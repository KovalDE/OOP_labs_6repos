#include "pch.h"
#include "CppUnitTest.h"

#include "../Lab_6_4/vector.h"
#include "../Lab_6_4/vector.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> V(2);
			V[0] = 1;
			V[1] = 1;
			bool r = Odn(&V[0], &V[1]);
			bool f = false;
			Assert::AreEqual(r, f);
		}
	};
}

#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0;
			int y = 1;
			int t = (sin(x) * sin(x) + cos(y) * cos(y)) / (1 + abs(x * y));
			Assert::AreEqual(t, 0);
		}
	};
}

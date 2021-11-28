#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2 rec/lab6.2 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestrec
{
	TEST_CLASS(UnitTestrec)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 10;
			int c[n] = { 46, 24, 36, 20, 24, 12, 56, 66, 40, 6 };

			int sum = 0;
			int count = 0;

			int expectedSum = 46 + 24 + 36 + 20 + 24 + 12 + 56 + 66 + 40 + 6;

			Calculate(c, n, sum, count, 0);

			Assert::AreEqual(expectedSum, sum);
		}
	};
}
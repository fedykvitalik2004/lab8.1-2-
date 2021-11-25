#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1 (3).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* final = new char[10]{ "AGA OGO" };
			int test_1 = Count(final,1);
			int a = 2;
			Assert::AreEqual(test_1, a);
		}
	};
}

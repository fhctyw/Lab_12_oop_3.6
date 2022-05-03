#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_3.6\B1.cpp"
#include "..\Lab_12_oop_3.6\B2.cpp"
#include "..\Lab_12_oop_3.6\B3.cpp"
#include "..\Lab_12_oop_3.6\D1.cpp"
#include "..\Lab_12_oop_3.6\D2.cpp"
#include "..\Lab_12_oop_3.6\D3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(is_base_of<B2, D2>::value);
		}
	};
}

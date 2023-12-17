#include "pch.h"
#include "CppUnitTest.h"
#include "../ChallengeProject/MyClass.h" // TODO: Add relative paths to headers in the main project

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChallengeProjectUnitTests
{
	TEST_CLASS(ChallengeProjectUnitTests)
	{
	public:

		TEST_METHOD(TwoPlusTwoEqualsFour)
		{
			// Example: 2+2=4
			Assert::AreEqual(4, 2 + 2, L"2+2=4");

			//// Uncomment to see how a failed test would be reported:
			//Assert::AreEqual(4, 2 + 3, L"2+2=4");
		}

		TEST_METHOD(UsingMyClassFunction)
		{
			// Example: Referencing MyClass
			MyClass my {};
			Assert::AreEqual(3, my.getValue(), L"2+2=4");
		}
	};
}

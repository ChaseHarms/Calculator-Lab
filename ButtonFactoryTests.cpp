#include "pch.h"
#include "CppUnitTest.h"
#include "main.h"
#include "ButtonFactory.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:

		main* testing = new main();
		ButtonFactory BF = ButtonFactory(testing);
		//binary tests
		TEST_METHOD(CreateButton)
		{

			wxButton* thing = BF.CreateAddButton("16", 50, 80);
			Assert::AreEqual(thing->GetId(), 16);


		}
	};
}
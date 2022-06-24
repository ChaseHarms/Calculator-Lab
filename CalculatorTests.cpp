#include "Header.h"
#include "CppUnitTest.h"
#include "Processor.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:

		std::string Equation = "";
		std::string E_answer = "";
		//binary tests
		TEST_METHOD(Testing_binary)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(89);
			std::string ans = "00000000000000000000000001011001";
			Assert::AreNotEqual(_processor->GetBinary(), ans);
		}
		TEST_METHOD(Testing_binary2)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(890);
			std::string ans = "00000000000000000000000001011001";
			Assert::AreNotEqual(_processor->GetBinary(), ans);
		}
		TEST_METHOD(Testing_binary3)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(2099);
			std::string ans = "00000000000000000000100000110011";

			Assert::AreNotEqual(_processor->GetBinary(), ans);
		}

		//hex tests
		TEST_METHOD(Testing_hex)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(87);
			std::string ans = "0x57";
			Assert::AreEqual(_processor->GetHexadecimal(), ans);
		}
		TEST_METHOD(Testing_hex2)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(24);
			std::string ans = "0x37E";
			Assert::AreNotEqual(_processor->GetHexadecimal(), ans);
		}
		TEST_METHOD(Testing_hex3)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(999);
			std::string ans = "0x37E";
			Assert::AreEqual(_processor->GetHexadecimal(), ans);
		}

		TEST_METHOD(Addition)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(99);
			double ans = 100;
			double num = std::stod(_processor->Add(99, 1));
			Assert::AreEqual(num, ans);
		}
		TEST_METHOD(Subtract)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(76);
			double ans = 56;
			double num = std::stod(_processor->Sub(76, 20));
			Assert::AreEqual(num, ans);

		}
		TEST_METHOD(Multiply)
		{
			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(2);
			double ans = 4;
			double num = std::stod(_processor->Mult(2, 2));
			Assert::AreEqual(num, ans);
		}

		TEST_METHOD(Divide)
		{

			processor* _processor = processor::GetInstance();

			_processor->SetBaseNum(69);
			double ans = 23;
			double num = std::stod(_processor->Div(69, 3));
			Assert::AreEqual(num, ans);
		}
	};
}
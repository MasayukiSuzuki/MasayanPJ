#include "stdafx.h"
#include "CppUnitTest.h"
#include "responceFIzzBuzz.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FizzBuzz
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		responceFIzzBuzz *responceFizzBuzz;

		// responce���\�b�h

		// ���l�P��n���ƕ�����P��Ԃ�
		TEST_METHOD(���l�P��n���ƕ�����P��Ԃ�)
		{
			// TODO: �e�X�g �R�[�h�������ɑ}�����܂�
			Assert::AreEqual("1", responceFizzBuzz->responce(1).c_str());
		}
		// ���l�Q��n���ƕ�����Q��Ԃ�
		TEST_METHOD(���l�Q��n���ƕ�����Q��Ԃ�) {
			Assert::AreEqual("2", responceFizzBuzz->responce(2).c_str());
		}
		// ���l�R��n���ƕ�����Fizz��Ԃ�
		TEST_METHOD(���l�R��n���ƕ�����Fizz��Ԃ�) {
			Assert::AreEqual("Fizz", responceFizzBuzz->responce(3).c_str());
		}
		// ���l�T��n���ƕ�����Buzz��Ԃ�
		TEST_METHOD(���l�T��n���ƕ�����Buzz��Ԃ�) {
			Assert::AreEqual("Buzz", responceFizzBuzz->responce(5).c_str());
		}
		// ���l�U��n���ƕ�����Fizz��Ԃ�
		TEST_METHOD(���l�U��n���ƕ�����Fizz��Ԃ�) {
			Assert::AreEqual("Fizz", responceFizzBuzz->responce(6).c_str());
		}
		// ���l�P�O��n���ƕ�����Buzz��Ԃ�
		TEST_METHOD(���l�P�O��n���ƕ�����Buzz��Ԃ�) {
			Assert::AreEqual("Buzz", responceFizzBuzz->responce(10).c_str());
		}
		// ���l�P�T��n���ƕ�����FizzBuzz��Ԃ�
		TEST_METHOD(���l�P�T��n���ƕ�����FizzBuzz��Ԃ�) {
			Assert::AreEqual("FizzBuzz", responceFizzBuzz->responce(15).c_str());
		}

	};
}
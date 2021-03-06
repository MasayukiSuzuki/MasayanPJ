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

		// responceメソッド

		// 数値１を渡すと文字列１を返す
		TEST_METHOD(数値１を渡すと文字列１を返す)
		{
			// TODO: テスト コードをここに挿入します
			Assert::AreEqual("1", responceFizzBuzz->responce(1).c_str());
		}
		// 数値２を渡すと文字列２を返す
		TEST_METHOD(数値２を渡すと文字列２を返す) {
			Assert::AreEqual("2", responceFizzBuzz->responce(2).c_str());
		}
		// 数値３を渡すと文字列Fizzを返す
		TEST_METHOD(数値３を渡すと文字列Fizzを返す) {
			Assert::AreEqual("Fizz", responceFizzBuzz->responce(3).c_str());
		}
		// 数値５を渡すと文字列Buzzを返す
		TEST_METHOD(数値５を渡すと文字列Buzzを返す) {
			Assert::AreEqual("Buzz", responceFizzBuzz->responce(5).c_str());
		}
		// 数値６を渡すと文字列Fizzを返す
		TEST_METHOD(数値６を渡すと文字列Fizzを返す) {
			Assert::AreEqual("Fizz", responceFizzBuzz->responce(6).c_str());
		}
		// 数値１０を渡すと文字列Buzzを返す
		TEST_METHOD(数値１０を渡すと文字列Buzzを返す) {
			Assert::AreEqual("Buzz", responceFizzBuzz->responce(10).c_str());
		}
		// 数値１５を渡すと文字列FizzBuzzを返す
		TEST_METHOD(数値１５を渡すと文字列FizzBuzzを返す) {
			Assert::AreEqual("FizzBuzz", responceFizzBuzz->responce(15).c_str());
		}

	};
}
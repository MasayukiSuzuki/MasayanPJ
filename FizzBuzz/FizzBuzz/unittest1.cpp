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

		// responceƒƒ\ƒbƒh

		// ”’l‚P‚ð“n‚·‚Æ•¶Žš—ñ‚P‚ð•Ô‚·
		TEST_METHOD(”’l‚P‚ð“n‚·‚Æ•¶Žš—ñ‚P‚ð•Ô‚·)
		{
			// TODO: ƒeƒXƒg ƒR[ƒh‚ð‚±‚±‚É‘}“ü‚µ‚Ü‚·
			Assert::AreEqual("1", responceFizzBuzz->responce(1).c_str());
		}
		// ”’l‚Q‚ð“n‚·‚Æ•¶Žš—ñ‚Q‚ð•Ô‚·
		TEST_METHOD(”’l‚Q‚ð“n‚·‚Æ•¶Žš—ñ‚Q‚ð•Ô‚·) {
			Assert::AreEqual("2", responceFizzBuzz->responce(2).c_str());
		}
		// ”’l‚R‚ð“n‚·‚Æ•¶Žš—ñFizz‚ð•Ô‚·
		TEST_METHOD(”’l‚R‚ð“n‚·‚Æ•¶Žš—ñFizz‚ð•Ô‚·) {
			Assert::AreEqual("Fizz", responceFizzBuzz->responce(3).c_str());
		}
		// ”’l‚T‚ð“n‚·‚Æ•¶Žš—ñBuzz‚ð•Ô‚·
		TEST_METHOD(”’l‚T‚ð“n‚·‚Æ•¶Žš—ñBuzz‚ð•Ô‚·) {
			Assert::AreEqual("Buzz", responceFizzBuzz->responce(5).c_str());
		}
		// ”’l‚U‚ð“n‚·‚Æ•¶Žš—ñFizz‚ð•Ô‚·
		TEST_METHOD(”’l‚U‚ð“n‚·‚Æ•¶Žš—ñFizz‚ð•Ô‚·) {
			Assert::AreEqual("Fizz", responceFizzBuzz->responce(6).c_str());
		}
		// ”’l‚P‚O‚ð“n‚·‚Æ•¶Žš—ñBuzz‚ð•Ô‚·
		TEST_METHOD(”’l‚P‚O‚ð“n‚·‚Æ•¶Žš—ñBuzz‚ð•Ô‚·) {
			Assert::AreEqual("Buzz", responceFizzBuzz->responce(10).c_str());
		}
		// ”’l‚P‚T‚ð“n‚·‚Æ•¶Žš—ñFizzBuzz‚ð•Ô‚·
		TEST_METHOD(”’l‚P‚T‚ð“n‚·‚Æ•¶Žš—ñFizzBuzz‚ð•Ô‚·) {
			Assert::AreEqual("FizzBuzz", responceFizzBuzz->responce(15).c_str());
		}

	};
}
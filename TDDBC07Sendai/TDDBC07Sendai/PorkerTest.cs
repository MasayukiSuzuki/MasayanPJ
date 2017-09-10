using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using NUnit;
using NUnit.Framework;

namespace Porker
{
    [TestFixture]
    public class PorkerTest
    {
        [SetUp]
        public void Setup() { }

        //getCardNotationのテスト
        [Test]
        public void スートがハートでランクがAの場合にAハートを返す()
        {
           Assert.AreEqual("A♥", new Card("♥", "A").GetNotation());
        }
        [Test]
        public void スートがスペードでランクが2の場合に2スペードを返す()
        {
            Assert.AreEqual("2♠", new Card("♠", "2").GetNotation());
        }
        
        //hasSameSuitのテスト
        [Test]
        public void 異なるスートを比較するとFalseを返す_Jのクラブと6のダイヤ()
        {
            Card card1 = new Card("♣", "J");
            Card card2 = new Card("♦", "6");
            Assert.AreEqual(false, card1.HasSameSuit(card2));
            Assert.AreEqual(false, card2.HasSameSuit(card1));
        }

        [Test]
        public void 同じスートを比較するとTrueを返す_Qのクラブと8のクラブ()
        {
            Card card1 = new Card("♣", "Q");
            Card card2 = new Card("♣", "8");
            Assert.AreEqual(true, card1.HasSameSuit(card2));
            Assert.AreEqual(true, card2.HasSameSuit(card1));
        }

        //hasSameRankのテスト
        [Test]
        public void 異なるランクを比較するとFalseを返す_Kのハートと9のスペード()
        {
            Card card1 = new Card("♥", "K");
            Card card2 = new Card("♠", "9");
            Assert.AreEqual(false, card1.HasSameRank(card2));
            Assert.AreEqual(false, card2.HasSameRank(card1));
        }

        [Test]
        public void 同じランクを比較するとTrueを返す_10のハートと10のスペード()
        {
            Card card1 = new Card("♥", "10");
            Card card2 = new Card("♠", "10");
            Assert.AreEqual(true, card1.HasSameRank(card2));
            Assert.AreEqual(true, card2.HasSameRank(card1));
        }

    }
}

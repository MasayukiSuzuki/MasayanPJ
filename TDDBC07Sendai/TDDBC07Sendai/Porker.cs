using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


    namespace Porker
    {
        class Card
        {
            private string _suit, _rank;

            public Card(string suit, string rank) {
                _suit = suit;
                _rank = rank;
            }
            public string GetNotation()
            {
                return _rank+_suit;
            }

            public bool HasSameSuit(Card card)
            {
                return (this._suit == card._suit) ;
            }

             public bool HasSameRank(Card card)
             {
                return (this._rank == card._rank);
             }
        }
    }


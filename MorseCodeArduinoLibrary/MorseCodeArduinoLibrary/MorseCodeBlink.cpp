/**
    Morse Code Blink library for Arduino Uno

    This library contains LED blink sequences for Morse Code on Arduino boards.
    By default, this library works with a given output pin of an Arduino Uno.

    Published under GNU General Public License v3

    @author Chris Cannon
    @version 0.1 08/28/2016
*/

using namespace std;

#include "MorseCodeBlink.h"
#include "sstream"

MorseCodeBlink::MorseCodeBlink(uint8_t pin, uint16_t blinkDuration)
{
  _pin = pin;
  _blinkDuration = blinkDuration;

  pinmode(pin, OUTPUT);
}

MorseCodeBlink::sendWord(std::string word)
{
  for(int i = 0; i < word.length(); i++)
  {
    sendLetter(word[i]);
  }

}

MorseCodeBlink::sendSentence(std::string sentence)
{
  istringstream sentenceStream;
  sentenceStream.str(sentence);

  while(sentenceStream >> word){
    sendWord(word);
  }
}

MorseCodeBlink::sendLetterA()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterB()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterC()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterD()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterE()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterF()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterG()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterH()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterI()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterJ()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterK()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterL()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterM()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterN()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterO()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterP()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterQ()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterR()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterS()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterT()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterU()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterV()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterW()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterX()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::snedLetterY()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendLetterZ()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit0()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit1()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit2()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit3()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit4()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit5()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit6()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit7()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit8()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendDigit9()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolFullStop()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolComma()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolColon()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolQuestionMark()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolApostrophe()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolHyphen()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolForwardSlash()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolBrackets()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolQuotationMarks()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolAtSign()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendSymbolEqualsSign()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink::sendProsignAA()
{
  sendLetterA();

  //character break
  delay(blinkDuration * 3);

  sendLetterA();
}

MorseCodeBlink::sendProsignAR()
{
  sendLetterA();

  //character break 
  delay(blinkDuration * 3);

  sendLetterR();
}

MorseCodeBlink::sendProsignAS()
{
  sendLetterA();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();
}

MorseCodeBlink::sendProsignBK()
{
  sendLetterB();

  //character break
  delay(blinkDuration * 3);

  sendLetterK();
}

MorseCodeBlink::sendProsignBT()
{
  sendLetterB();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();
}

MorseCodeBlink::sendProsignCL()
{
  sendLetterC();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();
}

MorseCodeBlink::sendProsignCT()
{
  sendLetterC();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();
}

MorseCodeBlink::sendProsignDO()
{
  sendLetterD();

  //character break
  delay(blinkDuration * 3);

  sendLetterO();
}

MorseCodeBlink::sendProsignKN()
{
  sendLetterK();

  //character break
  delay(blinkDuration * 3);

  sendLetterN();
}

MorseCodeBlink::sendProsignSK()
{
  sendLetterN();

  //character break
  delay(blinkDuration * 3);

  sendLetterK();
}

MorseCodeBlink::sendProsignSN()
{
  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterN();
}

MorseCodeBlink::sendProsignSOS()
{
  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterO();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();
}

MorseCodeBlink::sendQCodeQSL()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();
}

MorseCodeBlink::sendQCodeQSLQuery()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();

  //character break
  delay(blinkDuration * 3);

  sendSymbolQuestionMark();
}

MorseCodeBlink::sendQCodeQRX()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterX();
}

MorseCodeBlink::sendQCodeQRXQuery()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterX();

  //character break
  delay(blinkDuration * 3);

  sendSymbolQuestionMark();
}

MorseCodeBlink::sendQCodeQRV()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterV();
}

MorseCodeBlink::sendQCodeQRVQuery()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterV();

  //character break
  delay(blinkDuration * 3);

  sendSymbolQuestionMark();
}

MorseCodeBlink::sendQCodeQRL()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();
}

MorseCodeBlink::sendQCodeQRLQuery()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();

  //character break
  delay(blinkDuration * 3);

  sendSymbolQuestionMark();
}

MorseCodeBlink::sendQCodeQTH()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();

  //character break
  delay(blinkDuration * 3);

  sendLetterH();
}

MorseCodeBlink::sendQCodeQTHQuery()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();

  //character break
  delay(blinkDuration * 3);

  sendLetterH();

  //character break
  delay(blinkDuration * 3);

  sendSymbolQuestionMark();
}

MorseCodeBlink::sendERROR()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);

  //component break
  delay(blinkDuration);

  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

private void sendLetter(char letter)
{
  if(letter == 'a' || letter == 'A')
  {
    sendLetterA();
  }else if(letter == 'b' || letter == 'B')
  {
    sendLetterB();
  }else if(letter == 'c' || letter == 'C')
  {
    sendLetterC();
  }else if(letter == 'd' || letter == 'D')
  {
    sendLetterD();
  }else if(letter == 'e' || letter == 'E')
  {
    sendLetterE();
  }else if(letter == 'f' || letter == 'F')
  {
    sendLetterF();
  }else if(letter == 'g' || letter == 'G')
  {
    sendLetterG();
  }else if(letter == 'h' || letter == 'H')
  {
    sendLetterH();
  }else if(letter == 'i' || letter == 'I')
  {
    sendLetterI();
  }else if(letter == 'j' || letter == 'J')
  {
    sendLetterJ();
  }else if(letter == 'k' || letter == 'K')
  {
    sendLetterK();
  }else if(letter == 'l' || letter == 'L')
  {
    sendLetterL();
  }else if(letter == 'm' || letter == 'M')
  {
    sendLetterM();
  }else if(letter == 'n' || letter == 'N')
  {
    sendLetterN();
  }else if(letter == 'o' || letter == 'O')
  {
    sendLetterO();
  }else if(letter == 'p' || letter == 'P')
  {
    sendLetterP();
  }else if(letter == 'q' || letter == 'Q')
  {
    sendLetterQ();
  }else if(letter == 'r' || letter == 'R')
  {
    sendLetterR();
  }else if(letter == 's' || letter == 'S')
  {
    sendLetterS();
  }else if(letter == 't' || letter == 'T')
  {
    sendLetterT();
  }else if(letter == 'u' || letter == 'U')
  {
    sendLetterU();
  }else if(letter == 'v' || letter == 'V')
  {
    sendLetterV();
  }else if(letter == 'w' || letter == 'W')
  {
    sendLetterW();
  }else if(letter == 'x' || letter == 'X')
  {
    sendLetterX();
  }else if(letter == 'y' || letter == 'Y')
  {
    sendLetterY();
  }else if(letter == 'z' || letter == 'Z')
  {
    sendLetterZ();
  }
}

/**
    Morse Code Blink library for Arduino Uno

    This library contains LED blink sequences for Morse Code on Arduino boards.
    By default, this library works with a given output pin of an Arduino Uno.

    Published under GNU General Public License v3

    @author Chris Cannon
    @version 0.1 08/28/2016
*/

using namespace std;

#include "MorseCodeBlink_H"
#include "sstream"
#include "stream"

MorseCodeBlink_H::MorseCodeBlink(uint8_t pin, uint16_t blinkDuration)
{
  _pin = pin;
  _blinkDuration = blinkDuration;

  pinmode(pin, OUTPUT);
}

MorseCodeBlink_H::sendWord(std::string word)
{
  for(int i = 0; i < word.length(); i++)
  {
    sendLetter(word[i]);
  }

}

MorseCodeBlink_H::sendSentence(std::string sentence)
{
  istringstream sentenceStream;
  sentenceStream.str(sentence);

  while(sentenceStream >> word){
    sendWord(word);
  }
}

MorseCodeBlink_H::sendLetterA()
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

MorseCodeBlink_H::sendLetterB()
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

MorseCodeBlink_H::sendLetterC()
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

MorseCodeBlink_H::sendLetterD()
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

MorseCodeBlink_H::sendLetterE()
{
  //dit
  digitalWrite(_pin, HIGH);
  delay(blinkDuration);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink_H::sendLetterF()
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

MorseCodeBlink_H::sendLetterG()
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

MorseCodeBlink_H::sendLetterH()
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

MorseCodeBlink_H::sendLetterI()
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

MorseCodeBlink_H::sendLetterJ()
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

MorseCodeBlink_H::sendLetterK()
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

MorseCodeBlink_H::sendLetterL()
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

MorseCodeBlink_H::sendLetterM()
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

MorseCodeBlink_H::sendLetterN()
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

MorseCodeBlink_H::sendLetterO()
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

MorseCodeBlink_H::sendLetterP()
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

MorseCodeBlink_H::sendLetterQ()
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

MorseCodeBlink_H::sendLetterR()
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

MorseCodeBlink_H::sendLetterS()
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

MorseCodeBlink_H::sendLetterT()
{
  //dah
  digitalWrite(_pin, HIGH);
  delay(blinkDuration * 3);
  digitalWrite(_pin, LOW);
}

MorseCodeBlink_H::sendLetterU()
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

MorseCodeBlink_H::sendLetterV()
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

MorseCodeBlink_H::sendLetterW()
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

MorseCodeBlink_H::sendLetterX()
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

MorseCodeBlink_H::snedLetterY()
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

MorseCodeBlink_H::sendLetterZ()
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

MorseCodeBlink_H::sendDigit0()
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

MorseCodeBlink_H::sendDigit1()
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

MorseCodeBlink_H::sendDigit2()
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

MorseCodeBlink_H::sendDigit3()
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

MorseCodeBlink_H::sendDigit4()
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

MorseCodeBlink_H::sendDigit5()
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

MorseCodeBlink_H::sendDigit6()
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

MorseCodeBlink_H::sendDigit7()
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

MorseCodeBlink_H::sendDigit8()
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

MorseCodeBlink_H::sendDigit9()
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

MorseCodeBlink_H::sendSymbolFullStop()
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

MorseCodeBlink_H::sendSymbolComma()
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

MorseCodeBlink_H::sendSymbolColon()
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

MorseCodeBlink_H::sendSymbolQuestionMark()
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

MorseCodeBlink_H::sendSymbolApostrophe()
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

MorseCodeBlink_H::sendSymbolHyphen()
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

MorseCodeBlink_H::sendSymbolForwardSlash()
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

MorseCodeBlink_H::sendSymbolBrackets()
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

MorseCodeBlink_H::sendSymbolQuotationMarks()
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

MorseCodeBlink_H::sendSymbolAtSign()
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

MorseCodeBlink_H::sendSymbolEqualsSign()
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

MorseCodeBlink_H::sendProsignAA()
{
  sendLetterA();

  //character break
  delay(blinkDuration * 3);

  sendLetterA();
}

MorseCodeBlink_H::sendProsignAR()
{
  sendLetterA();

  //character break 
  delay(blinkDuration * 3);

  sendLetterR();
}

MorseCodeBlink_H::sendProsignAS()
{
  sendLetterA();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();
}

MorseCodeBlink_H::sendProsignBK()
{
  sendLetterB();

  //character break
  delay(blinkDuration * 3);

  sendLetterK();
}

MorseCodeBlink_H::sendProsignBT()
{
  sendLetterB();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();
}

MorseCodeBlink_H::sendProsignCL()
{
  sendLetterC();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();
}

MorseCodeBlink_H::sendProsignCT()
{
  sendLetterC();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();
}

MorseCodeBlink_H::sendProsignDO()
{
  sendLetterD();

  //character break
  delay(blinkDuration * 3);

  sendLetterO();
}

MorseCodeBlink_H::sendProsignKN()
{
  sendLetterK();

  //character break
  delay(blinkDuration * 3);

  sendLetterN();
}

MorseCodeBlink_H::sendProsignSK()
{
  sendLetterN();

  //character break
  delay(blinkDuration * 3);

  sendLetterK();
}

MorseCodeBlink_H::sendProsignSN()
{
  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterN();
}

MorseCodeBlink_H::sendProsignSOS()
{
  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterO();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();
}

MorseCodeBlink_H::sendQCodeQSL()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterS();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();
}

MorseCodeBlink_H::sendQCodeQSLQuery()
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

MorseCodeBlink_H::sendQCodeQRX()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterX();
}

MorseCodeBlink_H::sendQCodeQRXQuery()
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

MorseCodeBlink_H::sendQCodeQRV()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterV();
}

MorseCodeBlink_H::sendQCodeQRVQuery()
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

MorseCodeBlink_H::sendQCodeQRL()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterR();

  //character break
  delay(blinkDuration * 3);

  sendLetterL();
}

MorseCodeBlink_H::sendQCodeQRLQuery()
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

MorseCodeBlink_H::sendQCodeQTH()
{
  sendLetterQ();

  //character break
  delay(blinkDuration * 3);

  sendLetterT();

  //character break
  delay(blinkDuration * 3);

  sendLetterH();
}

MorseCodeBlink_H::sendQCodeQTHQuery()
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

MorseCodeBlink_H::sendERROR()
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

/**
    Morse Code Blink library for Arduino Uno

    This library contains LED blink sequences for Morse Code on Arduino boards.
    By default, this library works with pin 13 of an Arduino Uno.

    Published under GNU General Public License v3

    @author Chris Cannon
    @version 0.1 08/28/2016
*/

#include "MorseCodeBlink_H"

MorseCodeBlink_H::MorseCodeBlink(uint8_t pin, uint16_t blinkDuration)
{
  _pin = pin;
  _blinkDuration = blinkDuration;

  pinmode(pin, OUTPUT);
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

}

MorseCodeBlink_H::sendSymbolComma()
{

}

MorseCodeBlink_H::sendSymbolColon()
{

}

MorseCodeBlink_H::sendSymbolQuestionMark()
{

}

MorseCodeBlink_H::sendSymbolApostrophe()
{

}

MorseCodeBlink_H::sendSymbolHyphen()
{

}

MorseCodeBlink_H::sendSymbolForwardSlash()
{

}

MorseCodeBlink_H::sendSymbolBrackets()
{

}

MorseCodeBlink_H::sendSymbolQuotationMarks()
{

}

MorseCodeBlink_H::sendSymbolAtSign()
{

}

MorseCodeBlink_H::sendSymbolEqualsSign()
{
  
}

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

/**
    Morse Code Blink library for Arduino Uno

    This library contains LED blink sequences for Morse Code on Arduino boards.
    By default, this library works with pin 13 of an Arduino Uno.

    Published under GNU General Public License v3

    @author Chris Cannon
    @version 0.1 08/28/2016
*/

#ifdef MorseCodeBlink_H
#define MorseCodeBlink_H

include "Arduino.h"

class MorseCodeBlink
{
    public:
        MorseCodeBlink(uint8_t pin, uint16_t blinkDuration)

        void sendLetterA();
        void sendLetterB();
        void sendLetterC();
        void sendLetterD();
        void sendLetterE();
        void sendLetterF();
        void sendLetterG();
        void sendLetterH();
        void sendLetterI();
        void sendLetterJ();
        void sendLetterK();
        void sendLetterL();
        void sendLetterM();
        void sendLetterN();
        void sendLetterO();
        void sendLetterP();
        void sendLetterQ();
        void sendLetterR();
        void sendLetterS();
        void sendLetterT();
        void sendLetterU();
        void sendLetterV();
        void sendLetterW();
        void sendLetterX();
        void sendLetterY();
        void sendLetterZ();

        void sendDigit0();
        void sendDigit1();
        void sendDigit2();
        void sendDigit3();
        void sendDigit4();
        void sendDigit5();
        void sendDigit6();
        void sendDigit7();
        void sendDigit8();
        void sendDigit9();

        void sendSymbolFullStop();
        void sendSymbolComma();
        void sendSymbolColon();
        void sendSymbolQuestionMark();
        void sendSymbolApostrophe();
        void sendSymbolHyphen();
        void sendSymbolForwardSlash();
        void sendSymbolBrackets();
        void sendSymbolQuotationMarks();
        void sendSymbolAtSign();
        void sendSymbolEqualsSign();

        void sendProsignAA();
        void sendProsignAR();
        void sendProsignAS();
        void sendProsignBK();
        void sendProsignBT();
        void sendProsignCL();
        void sendProsignCT();
        void sendProsignDO();
        void sendProsignKN();
        void sendProsignSK();
        void sendProsignSN();
        void sendProsignSOS();

        void sendQCodeQSL();
        void sendQCodeQSLQuery();
        void sendQCodeQRX();
        void sendQCodeQRXQuery();
        void sendQCodeQRV();
        void sendQCodeQRVQuery();
        void sendQCodeQRL();
        void sendQCodeQRLQuery();
        void sendQCodeQTH();
        void sendQCodeQTHQuery();

    private:
        uint8_t _pin;
        uint16_t _blinkDuration;
}

#endif // !MorseCodeBlink_H

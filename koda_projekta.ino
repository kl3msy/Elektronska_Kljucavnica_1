#include <Keypad.h>

int pin = 9;
int stikac = 10;
int st = 0;
int vpis = 0;
boolean preveri = false;
int code = 5555;


const byte ROWS = 4;
const byte COLS = 3;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'},
  };

byte rowPins[ROWS] = {8, 7, 6, 5};
byte colPins[COLS] = {4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup()
  {
    pinMode(pin, OUTPUT);
    pinMode(stikac, INPUT);
    Serial.begin(9600);
  }

void loop()
  {
   while(digitalRead(stikac) == HIGH)
   { 
      char customKey = customKeypad.getKey();

      if(customKey)
      {
        Serial.print(customKey);
      }

      if (customKey == '1')
        {
          vpis = vpis * 10 + 1;
          st++;
        }
      else if (customKey == '2')
        {
          vpis = vpis * 10 + 2;
          st++;
        }
      else if (customKey == '3')
        {
          vpis = vpis * 10 + 3;
          st++;
        }
      else if (customKey == '4')
        {
          vpis = vpis * 10 + 4;
          st++;
        }
      else if (customKey == '5')
        {
          vpis = vpis * 10 + 5;
          st++;
        }
      else if (customKey == '6')
        {
          vpis = vpis * 10 + 6;
          st++;
        }
      else if (customKey == '7')
        {
          vpis = vpis * 10 + 7;
          st++;
        }
      else if (customKey == '8')
        {
          vpis = vpis * 10 + 8;
          st++;
        }
      else if (customKey == '9')
        {
          vpis = vpis * 10 + 9;
          st++;
        }
      else if (customKey == '*')
        {
          vpis = 0;
          st = 0;
          digitalWrite(pin, LOW);
          preveri=false;
        }
      else if (customKey == '0')
        {
          vpis = vpis * 10 + 0;
          st++;
        }
      else if (customKey == '#')
        {
          preveri = true;
        }
delay(250);

     if(preveri == true)
    {
      if(st==4 && vpis==code)
      {
        digitalWrite(pin, HIGH);
      }
      else
      {
        preveri = false;
        digitalWrite(pin, LOW);
      }
    }
   }
  }

// C++ code
//

int buttonState = 0;
int pinInp = 5;
int pinOneOut = 8;
int pinTwoOut = 10;
int pinThreeOut = 13;

void setup()
{
  pinMode(pinInp, INPUT);
  pinMode(pinOneOut, OUTPUT);
  pinMode(pinTwoOut, OUTPUT);
  pinMode(pinThreeOut, OUTPUT);
  
}

void loop()
{
  buttonState = digitalRead(pinInp);
  if (buttonState == HIGH)
  {
  	digitalWrite(pinOneOut, HIGH);
    digitalWrite(pinTwoOut, LOW);
    digitalWrite(pinThreeOut, LOW);
    delay (500);
    digitalWrite(pinOneOut, LOW);
    digitalWrite(pinTwoOut, HIGH);
    digitalWrite(pinThreeOut, LOW);
    delay (500);
    digitalWrite(pinOneOut, LOW);
    digitalWrite(pinTwoOut, LOW);
    digitalWrite(pinThreeOut, HIGH);
    delay (500);
    digitalWrite(pinOneOut, LOW);
    digitalWrite(pinTwoOut, HIGH);
    digitalWrite(pinThreeOut, LOW);
    delay (500);
  } 
  else
  {
    digitalWrite(pinOneOut, LOW);
    digitalWrite(pinTwoOut, LOW);
    digitalWrite(pinThreeOut, LOW);
  }  
}  
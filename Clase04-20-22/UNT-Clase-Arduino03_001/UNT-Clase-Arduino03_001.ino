// C++ code
//
int Led_PinV = 3;
int Led_PinA = 5;
int Led_PinR = 10;
int Pot_Pin = A5;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
  pinMode(Led_PinV, OUTPUT);
  pinMode(Led_PinA, OUTPUT);
  pinMode(Led_PinR, OUTPUT);
  Test_Led();
}
void loop()
{
  sensorValue = analogRead(Pot_Pin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(Led_PinV, outputValue); 
  analogWrite(Led_PinA, outputValue);
  analogWrite(Led_PinR, outputValue);
}
void Test_Led()
{
  digitalWrite(Led_PinV, HIGH);
  digitalWrite(Led_PinA, LOW);
  digitalWrite(Led_PinR, HIGH);
  delay(1000);
  digitalWrite(Led_PinV, HIGH);
  digitalWrite(Led_PinA, LOW);
  digitalWrite(Led_PinR, LOW);
  delay(1000);
  digitalWrite(Led_PinV, LOW);
  digitalWrite(Led_PinA, LOW);
  digitalWrite(Led_PinR, HIGH);
  delay(1000);
  digitalWrite(Led_PinV, LOW);
  digitalWrite(Led_PinA, HIGH);
  digitalWrite(Led_PinR, HIGH);
  delay(1000);
  digitalWrite(Led_PinV, LOW);
  digitalWrite(Led_PinA, LOW);
  digitalWrite(Led_PinR, HIGH);
  delay(1000);
  digitalWrite(Led_PinV, LOW);
  digitalWrite(Led_PinA, HIGH);
  digitalWrite(Led_PinR, LOW);
  delay(1000);
  digitalWrite(Led_PinV, HIGH);
  digitalWrite(Led_PinA, HIGH);
  digitalWrite(Led_PinR, LOW);
  delay(1000);
  digitalWrite(Led_PinV, HIGH);
  digitalWrite(Led_PinA, HIGH);
  digitalWrite(Led_PinR, HIGH);
  delay(1000);
  digitalWrite(Led_PinV, LOW);
  digitalWrite(Led_PinA, LOW);
  digitalWrite(Led_PinR, LOW);
}

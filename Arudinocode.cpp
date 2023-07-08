int const LEDPin = 5; int const triggerpin int const buzzerpin = 2; int const echopin = 3;
void setup()
{
4;
pinMode(triggerPin, OUTPUT); pinMode(echopin, INPUT);
pinMode(buzzerPin, OUTPUT); pinMode(LEDPin, OUTPUT);
}
void loop()
(
int duration, distance;
digitalWrite(triggerPin, HIGH);
delay(1);
digitalWrite(triggerpin, LOW);
duration pulseIn (echopin, HIGH); distance (duration/2) / 29.1;
if(distance <= 200 && distance >= 0)
{
digitalwrite (buzzerPin, HIGH); digitalWrite(LEDPin, HIGH);
delay(500);
digitalWrite(LEDPin, LOW);
delay(500);
}
else
{
}
digitalWrite(buzzerPin, LOW); digitalWrite(LEDPin, LOW);
delay(60);

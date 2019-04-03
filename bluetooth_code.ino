#define LED 7
char input;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  Serial.println(" Enter 1 for ON and 0 fir OFF");
}

void loop() {
  again:
if(Serial.available())
{
  input =Serial.read();

  if(input == '1')
  {
    digitalWrite(LED,HIGH);
  }
  else if(input == '0')
  {
    digitalWrite(LED,LOW);
  
}
 else
 {
  Serial.println("Please enter value 0 or 1");
  goto again;
 }
}
delay(100);
}

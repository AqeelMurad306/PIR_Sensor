int PIR = 6;
const int led_red = 2;
const int led_blue = 3;

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int status = digitalRead(PIR);
  
  Serial.println(status);

  if (status == 1) {
    digitalWrite(led_blue, LOW);
    digitalWrite(led_red, HIGH);
    delay(2000);
    digitalWrite(led_red, LOW);
  }
  else {
    digitalWrite(led_blue, HIGH);
    delay(1000);
  }
  
  delay(50);
}

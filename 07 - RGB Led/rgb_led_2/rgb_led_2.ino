byte led_blue = 3;
byte led_green = 5;
byte led_red = 6;
int t = 50;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_blue, OUTPUT);
}
void loop() {
  for (int i = 255; i > -1; i++)
  {
    analogWrite(led_red, i);
    delay(t);
  }
  for (int i = 255; i > -1; i++)
  {
    analogWrite(led_green, i);
    delay(t);
  }
  for (int i = 255; i > -1; i++)
  {
    analogWrite(led_blue, i);
    delay(t);
  }
}

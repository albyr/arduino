// Fading LED

#define LED 9
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  i = random(0,255);
  analogWrite(LED, i);
  delay(250);
}



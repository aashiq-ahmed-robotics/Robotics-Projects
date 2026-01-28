int moistureSensor = A0;
int pump = 5;
int ldr = A1;
int light = 6;

void setup() {
  pinMode(pump, OUTPUT);
  pinMode(light, OUTPUT);
}

void loop() {
  int moisture = analogRead(moistureSensor);
  int lightLevel = analogRead(ldr);

  if (moisture < 400) digitalWrite(pump, HIGH);
  else digitalWrite(pump, LOW);

  if (lightLevel < 300) digitalWrite(light, HIGH);
  else digitalWrite(light, LOW);

  delay(1000);
}

int motorA = 2;
int motorB = 3;

void setup() {
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int itemDetected = analogRead(A0);

  if (itemDetected > 500) {
    Serial.println("Item Detected");
    digitalWrite(motorA, HIGH);
    digitalWrite(motorB, HIGH);
  } else {
    digitalWrite(motorA, LOW);
    digitalWrite(motorB, LOW);
  }

  delay(500);
}

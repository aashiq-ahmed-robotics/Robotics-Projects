#include <WiFi.h>

const char* ssid = "TrafficSignal";
const char* password = "12345678";

WiFiServer server(80);

int motor1 = 26;
int motor2 = 27;

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);

  WiFi.softAP(ssid, password);
  server.begin();
}

void stopVehicle() {
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
}

void moveVehicle() {
  digitalWrite(motor1, HIGH);
  digitalWrite(motor2, HIGH);
}

void loop() {
  WiFiClient client = server.available();
  if (!client) return;

  String signal = client.readStringUntil('\n');

  if (signal == "RED") stopVehicle();
  else if (signal == "GREEN") moveVehicle();

  client.stop();
}

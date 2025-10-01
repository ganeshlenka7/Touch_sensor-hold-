// Touch Sensor with Arduino to directly switch LED ON/OFF

int touchPin = 2;    // Touch sensor OUT pin
int ledPin = 13;     // LED pin

void setup() {
  pinMode(touchPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
  Serial.println("Touch Sensor LED Control Ready...");
}

void loop() {
  int sensorValue = digitalRead(touchPin); // Read sensor (HIGH or LOW)

  if (sensorValue == HIGH) {   // If touched (Active HIGH mode)
    digitalWrite(ledPin, HIGH);
    Serial.println("LED ON (Touched)");
  } else {                     // If not touched
    digitalWrite(ledPin, LOW);
    Serial.println("LED OFF");
  }

  delay(200); // Small delay to stabilize readings
}

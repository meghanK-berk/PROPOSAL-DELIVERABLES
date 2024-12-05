// Pin definitions
const int trigPin = 9;     // Ultrasonic sensor trig pin
const int echoPin = 10;    // Ultrasonic sensor echo pin
const int buttonPin = 2;   // Button pin
const int flexPin1 = A0;   // Flex sensor 1 pin
const int flexPin2 = A1;   // Flex sensor 2 pin
const int flexPin3 = A2;   // Flex sensor 3 pin

// Variables for ultrasonic sensor
float duration, distance;

// Variables for button and flex sensors
int buttonState;
int flexValue1, flexValue2, flexValue3;
int flexPercent1, flexPercent2, flexPercent3;

// Calibration values for the flex sensors
const int minFlexValue = 300; // Adjust based on your sensors
const int maxFlexValue = 700;

void setup() {
  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP);

  // Initialize Serial Monitor
  Serial.begin(9600);

  Serial.println("Setup Complete! Monitoring Sensors...");
}

void loop() {
  // --- Ultrasonic Sensor ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the echo duration and calculate distance
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.0343) / 2;

  // Print distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // --- Flex Sensors ---
  // Read and map flex sensor 1
  flexValue1 = analogRead(flexPin1);
  flexPercent1 = map(flexValue1, minFlexValue, maxFlexValue, 0, 100);
  flexPercent1 = constrain(flexPercent1, 0, 100);

  // Read and map flex sensor 2
  flexValue2 = analogRead(flexPin2);
  flexPercent2 = map(flexValue2, minFlexValue, maxFlexValue, 0, 100);
  flexPercent2 = constrain(flexPercent2, 0, 100);

  // Read and map flex sensor 3
  flexValue3 = analogRead(flexPin3);
  flexPercent3 = map(flexValue3, minFlexValue, maxFlexValue, 0, 100);
  flexPercent3 = constrain(flexPercent3, 0, 100);

  // Print flex sensor values
  Serial.print("Flex 1: ");
  Serial.print(flexPercent1);
  Serial.print("%, Flex 2: ");
  Serial.print(flexPercent2);
  Serial.print("%, Flex 3: ");
  Serial.print(flexPercent3);
  Serial.println("%");

  // --- Button ---
  // Read button state
  buttonState = digitalRead(buttonPin);

  // Print button state
  Serial.print("Button State: ");
  Serial.println(buttonState == LOW ? "Pressed" : "Released");

  // --- Actions Based on Sensor Readings ---
  if (distance < 20) {
    // Example: Warn if object is too close
    Serial.println("Warning: Object too close!");
  }

  if (flexPercent1 > 80 || flexPercent2 > 80 || flexPercent3 > 80) {
    // Example: Trigger action if any flex sensor is bent significantly
    Serial.println("Significant flex detected!");
  }

  // Delay for readability in Serial Monitor
  delay(200);
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

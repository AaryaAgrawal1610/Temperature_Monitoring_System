const int tempPin = A0; // LM35 connected to A0

void setup() {
  Serial.begin(9600); // Begin serial communication
}

void loop() {
  int reading = analogRead(tempPin);       // Read analog value
  float voltage = reading * 5.0 / 1023.0;   // Convert to voltage
  float temperature = voltage * 100;       // LM35 gives 10mV per °C
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);  // Wait 1 second
}

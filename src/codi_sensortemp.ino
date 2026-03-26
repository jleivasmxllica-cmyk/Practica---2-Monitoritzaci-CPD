const int pinLM35 = 34;   // pin analògic

void setup() {
  Serial.begin(115200);
}

void loop() {
  int valorADC = analogRead(pinLM35);

  // Conversió corregida per ESP32
  float voltatge = (valorADC / 4095.0) * 1.1;
  float temperatura = voltatge * 100;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  delay(1000);
}

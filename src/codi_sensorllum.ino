const int pinLDR = 2;      // si tens LDR aquí
const int pinLM35 = 34;    // CANVI IMPORTANT
const int pinLED = 25;     // el teu LED

float temperatura = 0;

void setup() {
  Serial.begin(115200);

  pinMode(pinLED, OUTPUT);
  digitalWrite(pinLED, LOW);
}

void loop() {

  // Llegir LM35
  int valorADC = analogRead(pinLM35);

  float voltatge = (valorADC / 4095.0) * 3.3;
  temperatura = voltatge * 100;

  Serial.print("Temp: ");
  Serial.println(temperatura);

  // ALERTA
  if (temperatura > 25) {
    digitalWrite(pinLED, HIGH);
    Serial.println("ALERTA TEMPERATURA!");
  }

  delay(2000);
}

️ Monitorització Ambiental d’un CPD
(ESP32)
📖 Descripció
Sistema de monitorització ambiental desenvolupat amb una ESP32 per controlar les
condicions d’una sala de servidors (CPD). El sistema utilitza sensors per mesurar la
temperatura i la llum, generant alertes automàtiques en cas de risc.

🎯 Objectius
● Llegir sensors analògics amb ESP32
● Monitoritzar temperatura amb LM35
● Detectar llum amb LDR
● Automatitzar alertes
● Interactuar via Serial

🧰 Components
● ESP32 (SteamMakers)
● LM35 (temperatura)
● LDR + resistència 10kΩ
● LED
● Protoboard

🔌 Connexions
️ LM35
● VCC → 3.3V
● OUT → GPIO 34
● GND → GND
💡 LDR (divisor de tensió)
● LDR → 3.3V

● Resistència 10kΩ → GND
● Punt mig → GPIO 2
🔴 LED
● GPIO 25 → resistència → LED → GND

⚙️ Funcionament
️ Temperatura
● Conversió ADC → voltatge → oC
● 10mV = 1°C
💡 Llum
● Lectura analògica (0–4095)
● Depèn de la llum ambiental

🚨 Alertes
● 🔥 Temperatura > 25°C → LED ON + alerta
● 💡 Llum alta → avís per Serial

💬 Comandes Serial
Comanda Acció
STATUS Mostra dades
LED_OFF Apaga LED
AUTO Mode automàtic

📂 Estructura del projecte
practica2/
├── README.md
├── src/

│ └── main.ino
├── doc/
│ └── documentacio.pdf

🧪 Resultats
● Lectura correcta de temperatura (~20–30°C)
● Sistema d’alertes funcional
● Interacció per Serial operativa

⚠️ Problemes i solucions
● ADC ESP32 → ajust a 1.1V
● LDR → necessita divisor de tensió
● Pins analògics → ús de GPIO 34

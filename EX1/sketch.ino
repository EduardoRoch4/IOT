void setup() {
  pinMode(12, OUTPUT); // Configura o pino 12 como saída
}

void loop() {
  digitalWrite(12, HIGH); // Liga o pino 12
  delay(1000);            // Espera 1 segundo
  digitalWrite(12, LOW);  // Desliga o pino 12
  delay(1000);            // Espera 1 segundo
}

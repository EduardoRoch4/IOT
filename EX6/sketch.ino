const int ledVermelho = 13;
const int ledAmarelo = 12;
const int ledVerde = 11;

const int botaoPin = 2;

int estadoBotao = 0;           
int estadoAnteriorBotao = 0;   
bool ledLigado = false;       

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  pinMode(botaoPin, INPUT_PULLUP);
}

void loop() {
  estadoBotao = digitalRead(botaoPin);

  if (estadoBotao == LOW && estadoAnteriorBotao == HIGH) {
    delay(50);
    
    ledLigado = !ledLigado;

    if (ledLigado) {
      digitalWrite(ledVermelho, HIGH);
      digitalWrite(ledAmarelo, HIGH);
      digitalWrite(ledVerde, HIGH);
    } else {
      digitalWrite(ledVermelho, LOW);
      digitalWrite(ledAmarelo, LOW);
      digitalWrite(ledVerde, LOW);
    }
  }

  estadoAnteriorBotao = estadoBotao;
}

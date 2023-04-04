//  Reversing-Meowbit-v1: Test buttons
//  ----------------------------------
//  Autor: Diego Sanz Martín

// Declaración de los pines de los botones
const int UP_BUTTON = 2;
const int DOWN_BUTTON = 13;
const int LEFT_BUTTON = 27;
const int RIGHT_BUTTON = 35;
const int A_BUTTON = 34;
const int B_BUTTON = 12;

void setup() {
  // Inicialización del puerto serie
  Serial.begin(9600);
  Serial.printf("Reversing-Meowbit-v1: Test buttons");
  Serial.printf("\n----------------------------------\n");

  // Configuración de los pines de entrada de los botones
  pinMode(UP_BUTTON, INPUT_PULLUP);
  pinMode(DOWN_BUTTON, INPUT_PULLUP);
  pinMode(LEFT_BUTTON, INPUT_PULLUP);
  pinMode(RIGHT_BUTTON, INPUT);
  pinMode(A_BUTTON, INPUT);
  pinMode(B_BUTTON, INPUT_PULLUP);
}

void loop() {
  // Verificación de cada botón y envío de un mensaje por el puerto serie si se ha pulsado
  if (digitalRead(UP_BUTTON) == LOW) {
    Serial.println("Se ha pulsado el botón ↑");
    delay(100); // Debounce
  }

  if (digitalRead(DOWN_BUTTON) == LOW) {
    Serial.println("Se ha pulsado el botón ↓");
    delay(100); // Debounce
  }

  if (digitalRead(LEFT_BUTTON) == LOW) {
    Serial.println("Se ha pulsado el botón ←");
    delay(100); // Debounce
  }

  if (digitalRead(RIGHT_BUTTON) == LOW) {
    Serial.println("Se ha pulsado el botón →");
    delay(100); // Debounce
  }

  if (digitalRead(A_BUTTON) == LOW) {
    Serial.println("Se ha pulsado el botón A");
    delay(100); // Debounce
  }

  if (digitalRead(B_BUTTON) == LOW) {
    Serial.println("Se ha pulsado el botón B");
    delay(100); // Debounce
  }
}

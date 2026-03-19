#include <Arduino.h>
#define IN_POT A0  
#define IN_ENA 8
#define IN_DIR 9
#define OUT_ENA 5
#define OUT_DIR 4
#define OUT_PUL 3

bool enabled; /* Define se o motor pode girar.
O pino é definido como um input pullup, que ao ser aterrado (gnd) habilita
o movimento (ena). Use um botão de emergencia, ou simplesmente aterre */

bool direction; /* Define a direção de rotação. Também é input pullup, que ao 
ser aterrado (chave gira seletora) altera a direção (dir) */

bool ena;  // Executa o estado do enabled
bool dir;  // Define a direção no driver
bool pul;  // Pino responsável pelo PWM

void setup() {  
  pinMode(IN_ENA, INPUT_PULLUP);
  pinMode(IN_DIR, INPUT_PULLUP);
  pinMode(OUT_ENA, OUTPUT);
  pinMode(OUT_DIR, OUTPUT);
  pinMode(OUT_PUL, OUTPUT);
}

void loop() {
  enabled = digitalRead(IN_ENA);  // Só permitir
  direction = digitalRead(IN_DIR); // Checar o sentido, tem input pullup!

  
}
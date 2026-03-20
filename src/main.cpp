#include <Arduino.h>
#define IN_POT A0  
#define IN_DIR 9
#define IN_START 8
#define OUT_ENA 7
#define OUT_DIR 6
#define OUT_PUL 5

int pot;
int delayStep;
bool started;
bool direction;

void setup() {  
  pinMode(IN_START, INPUT_PULLUP);
  pinMode(IN_DIR, INPUT_PULLUP);
  pinMode(OUT_ENA, OUTPUT);
  pinMode(OUT_DIR, OUTPUT);
  pinMode(OUT_PUL, OUTPUT);

  digitalWrite(OUT_ENA, HIGH);
  }

void loop() {
  started = digitalRead(IN_START);
  direction = digitalRead(IN_DIR);

  if (!started) {
    digitalWrite(OUT_DIR, direction);
    pot = analogRead(IN_POT);
    delayStep = map(pot, 0, 1023, 2000, 200); 

    digitalWrite(OUT_PUL, HIGH);
    delayMicroseconds(delayStep);

    digitalWrite(OUT_PUL, LOW);
    delayMicroseconds(delayStep);
    }
    else {
      digitalWrite(OUT_PUL, LOW);
    }    
  }
// C++ code
//
int botao1 = 0;

int botao2 = 0;

int botao3 = 0;

int pot = 0;

int modo = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  pot = map(analogRead(A0), 0, 1023, 0, 255);
  if (digitalRead(13) == 1) {
    modo = 1;
  }
  if (digitalRead(12) == 1) {
    modo = 2;
  }
  if (digitalRead(8) == 1) {
    modo = 3;
  }
  if (modo == 0) {
    analogWrite(9, pot);
    analogWrite(10, 0);
    analogWrite(11, 0);
  }
  if (modo == 1) {
    analogWrite(9, pot);
    analogWrite(10, 0);
    analogWrite(11, pot);
  }
  if (modo == 2) {
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, pot);
  }
  if (modo == 3) {
    analogWrite(9, 0);
    analogWrite(10, 0);
    analogWrite(11, 0);
    delay(500); // Wait for 500 millisecond(s)
    modo = 0;
  }
}

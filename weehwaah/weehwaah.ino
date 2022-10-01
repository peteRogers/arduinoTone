int x = 1000;
int inc = 1;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  tone(8, x);
  delay(1);
  x = x + inc;
  if (x > 2000 || x < 1000){
    inc = inc *-1;
  }

}


int RED=0;
int YELLOW=1;
int GREEN=2;


void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  digitalWrite(RED, HIGH);
  delay(1000);
        
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);
  delay(1000);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);
  delay(1000);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
        
  digitalWrite(GREEN, HIGH);
  delay(1000);
   digitalWrite(GREEN, LOW);
}
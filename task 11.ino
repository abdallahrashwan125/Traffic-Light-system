
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop()
{
  digitalWrite(8,1);
  delay(700);
  
  digitalWrite(9,1);
   delay(100);
    digitalWrite(9,0);
   delay(100);
  digitalWrite(9,1);
   delay(100);
    digitalWrite(9,0);
   delay(100);
    digitalWrite(9,1);
   delay(100);
    digitalWrite(9,0);
   delay(100);
digitalWrite(10,1);
  delay(100);
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  delay(500);
}
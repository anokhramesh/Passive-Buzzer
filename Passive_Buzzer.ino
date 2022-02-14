int passive_buzzer = 11;
void setup() {
  pinMode (passive_buzzer, OUTPUT);
}

void loop() {
for (int i=0;i<250; i++)
{
  digitalWrite(passive_buzzer,HIGH);
  delay(1);
  digitalWrite(passive_buzzer,LOW);
  delay(1);
}
for (int i=0;i<125; i++)
{
  digitalWrite(passive_buzzer,HIGH);
  delay(2);
  digitalWrite(passive_buzzer,LOW);
  delay(2);
}
}

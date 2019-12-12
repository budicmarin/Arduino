int ledCrvena=6;
int ledZuta=7;
int ledZelena=8;
int pjesakCrveno=9;
int pjesakZeleno=10;
void setup() {
  pinMode(ledCrvena,OUTPUT);
  pinMode(ledZuta,OUTPUT);
  pinMode(ledZelena,OUTPUT);
   pinMode(pjesakCrveno,OUTPUT);
  pinMode(pjesakZeleno,OUTPUT);


}

void loop() {
 digitalWrite(ledCrvena,HIGH);
 digitalWrite(ledZuta,LOW);
  digitalWrite(ledZelena,LOW);
  digitalWrite(pjesakCrveno,LOW);
  digitalWrite(pjesakZeleno,HIGH);
  delay(3000);
  digitalWrite(ledCrvena,LOW);
 digitalWrite(ledZuta,HIGH);
  digitalWrite(ledZelena,LOW);
    digitalWrite(pjesakCrveno,HIGH);
  digitalWrite(pjesakZeleno,LOW);
  delay(1000);
  digitalWrite(ledCrvena,LOW);
 digitalWrite(ledZuta,LOW);
  digitalWrite(ledZelena,HIGH);
    digitalWrite(pjesakCrveno,HIGH);
  digitalWrite(pjesakZeleno,LOW);
  delay(3000);

}

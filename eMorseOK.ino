/*
  Send slow morse code OK  --- -.-
  dot
  dash = 3 dot
  interelem = 1 dot
  interchar = 3 dot
  interworkd = 7 dot
  Buzzer is Sonitron SMA21 connects on pin 2, GND, void
*/

char msg[] = " OK";
int led13 = 13;
int buzz = 2;
int dotTime = 150; //ms per dot about 6WPM
int dashTime = 3 * dotTime;
int interElem = 1 * dotTime;
int interChar = 3 * dotTime;
int interWord = 7 * dotTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(led13, OUTPUT);
  pinMode(buzz, OUTPUT);
  digitalWrite(led13, LOW);
  digitalWrite(buzz, LOW);
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // letter O ---
  for (int i = 0; i < 3; i++)
  {
    //Serial.print("#debug# i is:");
    //Serial.println(i);
    digitalWrite(led13, HIGH);
    digitalWrite(buzz, HIGH);
    delay(dashTime);
    digitalWrite(led13, LOW);
    digitalWrite(buzz, LOW);
    delay(interElem);
  }
  delay(interChar);

  //letter K  _._
  digitalWrite(led13, HIGH);
  digitalWrite(buzz, HIGH);
  delay(dashTime);
  digitalWrite(led13, LOW);
  digitalWrite(buzz, LOW);
  delay(interElem);
  digitalWrite(led13, HIGH);
  digitalWrite(buzz, HIGH);
  delay(dotTime);
  digitalWrite(led13, LOW);
  digitalWrite(buzz, LOW);
  delay(interElem);
  digitalWrite(led13, HIGH);
  digitalWrite(buzz, HIGH);
  delay(dashTime);
  digitalWrite(led13, LOW);
  digitalWrite(buzz, LOW);

  delay(interWord);

}

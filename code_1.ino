int ldrPin=A0;
int butPin=2;
void setup() {
  Serial.begin(9600);
  pinMode(ldrPin,INPUT);
  pinMode(butPin,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(butPin==HIGH)
  {
    int ldrStatus=analogRead(ldrPin);
    Serial.println(ldrStatus);
  }
  // put your main code here, to run repeatedly:
}

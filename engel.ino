byte ses=3;
byte mesafe1=8;
byte mesafe2=6;
byte mesafe3=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(mesafe1,INPUT);
  pinMode(mesafe2,INPUT);
  pinMode(mesafe3,INPUT);
  pinMode(ses,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  byte engel=digitalRead(mesafe1);
  byte engel2=digitalRead(mesafe2);
  byte engel3=digitalRead(mesafe3);
  Serial.print("1.Sensör=");
  Serial.println(engel);
  Serial.print("2.Sensör=");
  Serial.println(engel2);
  Serial.print("3.Sensör=");
  Serial.println(engel3);
  //and && ve operatörü
  //or || veya operatörü
  // == eşit != eşit değil <> eşit değil
  if(engel==0 || engel2==0 && engel3==0 ){
    digitalWrite(ses,1);
  }else{
    digitalWrite(ses,0);
  }
  
  

}

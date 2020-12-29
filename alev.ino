byte alevpin=2;
byte led=7;
byte ses=3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(ses,OUTPUT);
  pinMode(alevpin,INPUT);  
}
void loop() {
  // put your main code here, to run repeatedly:
  
  //Olay Tabanlı Programlı
  int alev=digitalRead(alevpin);
  Serial.println(alev);
  
  if(alev==0){
    digitalWrite(led,HIGH);
    digitalWrite(ses,HIGH);
    delay(50);
    digitalWrite(led,LOW);
    digitalWrite(ses,LOW);
    delay(50);
  }else{
    digitalWrite(led,LOW);
    
  }
  }


 int ml =A0;
 int h=255;
 int l=0;
 String motion;
 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ml,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Silakan ketik 'p' untuk memutar, 's' untuk berhenti");
 while(Serial.available()==0){  }

 motion=Serial.readString();
 if(motion=="p"){
  analogWrite(ml,l);
 }
 if(motion=="s"){
  analogWrite(ml,h);
 }
 }

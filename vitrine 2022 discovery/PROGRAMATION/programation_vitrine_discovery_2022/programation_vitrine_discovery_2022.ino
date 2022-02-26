int ACTION1 = 2;
int ACTION2 = 3;
int ACTION3 = 4;
int ACTION4 = 5;
int ACTION5 = 6;
int ACTION6 = 7;
int ACTION7 = 8;
int ACTION8 = 9;
int ACTION9 = 10;
int ACTION10 = 11;
int ACTION11 = 12;
int ACTION12 = 13;
int SENSOR = 1;

void setup() {
  // put your setup
  
Serial.begin(9600);
pinMode(SENSOR , INPUT);
pinMode(ACTION1 , OUTPUT);
pinMode(ACTION2 , OUTPUT);
pinMode(ACTION3 , OUTPUT);
pinMode(ACTION4 , OUTPUT);
pinMode(ACTION5 , OUTPUT);
pinMode(ACTION6 , OUTPUT);
pinMode(ACTION7 , OUTPUT);
pinMode(ACTION8 , OUTPUT);
pinMode(ACTION9 , OUTPUT);
pinMode(ACTION10 , OUTPUT);
pinMode(ACTION11 , OUTPUT);
pinMode(ACTION12 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int L = digitalRead(SENSOR);
if(L == 0)
{
Serial.println(" Obstacle detected ");
digitalWrite(ACTION1,LOW);
digitalWrite(ACTION2,LOW); 
digitalWrite(ACTION3,LOW); 
digitalWrite(ACTION4,LOW); 
digitalWrite(ACTION5,LOW); 
digitalWrite(ACTION6,LOW); 
digitalWrite(ACTION7,LOW); 
digitalWrite(ACTION8,LOW); 
digitalWrite(ACTION9,LOW); 
digitalWrite(ACTION10,LOW); 
digitalWrite(ACTION11,LOW); 
digitalWrite(ACTION12,LOW);    
}
else{
  Serial.println(" === ALL clear"); 
digitalWrite(ACTION1,HIGH);
delay (250);
digitalWrite(ACTION2,HIGH); 
delay (250);
digitalWrite(ACTION3,HIGH); 
delay (250);
digitalWrite(ACTION4,HIGH);
delay (250); 
digitalWrite(ACTION5,HIGH);
delay (250); 
digitalWrite(ACTION6,HIGH); 
delay (250);
digitalWrite(ACTION7,HIGH);
delay (250); 
digitalWrite(ACTION8,HIGH);
delay (250); 
digitalWrite(ACTION9,HIGH); 
delay (250);
digitalWrite(ACTION10,HIGH); 
delay (250);
digitalWrite(ACTION11,HIGH);
delay (250); 
digitalWrite(ACTION12,HIGH);
delay (250);
}
}

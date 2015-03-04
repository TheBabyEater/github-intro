
int led = 13; //13 is wack yo, you might want to change it

void setup() {                

  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(1000);              
}

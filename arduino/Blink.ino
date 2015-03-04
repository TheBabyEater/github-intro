
int led = 13; //13 is the pin that you need the LED to be on

void setup() {                //for the action that we are going to do

  pinMode(led, OUTPUT);     // states the output
}


void loop() {    //lets this action loop
  digitalWrite(led, HIGH);   //sets the brightness to high
  delay(1000);              //set amount of waiting time
  digitalWrite(led, LOW);    //sets the brightness to low
  delay(1000);              //set amount of waiting time
}

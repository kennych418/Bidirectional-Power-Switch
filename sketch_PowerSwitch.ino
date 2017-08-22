// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
#define mosfet2 2
#define mosfet3 3
#define mosfet4 4
#define mosfet5 5
/*#define mosfet6 6
#define mosfet7 7*/
 
/*#define button0 A0
#define button1 A1
#define button2 16*/

int right = 1;
int left = 0;
int stop = 2;
 
int direction = right;
 
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(mosfet2, OUTPUT);
  pinMode(mosfet3, OUTPUT);
  pinMode(mosfet4, OUTPUT);
  pinMode(mosfet5, OUTPUT);

  digitalWrite(mosfet5, LOW);
  digitalWrite(mosfet2, LOW);
  digitalWrite(mosfet4, LOW);
  digitalWrite(mosfet3, LOW);
  
  /*pinMode(mosfet6, OUTPUT);
  pinMode(mosfet7, OUTPUT);*/
 
  /*pinMode(button0, INPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);*/
}
 
// the loop routine runs over and over again forever:
void loop() {
  
  /*if(analogRead(button0) > 0){
    direction = 0;
    Serial.print("0");
  }
  if(analogRead(button1) > 0){
    direction = 1;
    Serial.print("1");
  }
  if(analogRead(button2) > 0){
    direction = 2;
    Serial.print("2");
  }*/
 
  if(direction == 0){ //left to right    
  digitalWrite(mosfet5, HIGH);
  digitalWrite(mosfet2, HIGH);
  digitalWrite(mosfet4, LOW);
  digitalWrite(mosfet3, LOW);
  /*digitalWrite(mosfet6, HIGH);
  digitalWrite(mosfet7, LOW);*/
 
  }
  
  if(direction == 1){ //right to left
  digitalWrite(mosfet4, HIGH);
  digitalWrite(mosfet3, HIGH);
  digitalWrite(mosfet5, LOW);
  digitalWrite(mosfet2, LOW);
  /*digitalWrite(mosfet6, LOW);
  digitalWrite(mosfet7, HIGH);*/
  }
  
  if(direction == 2){ //off
  digitalWrite(mosfet2, LOW);
  digitalWrite(mosfet3, LOW);
  digitalWrite(mosfet4, LOW);
  digitalWrite(mosfet5, LOW);
  /*digitalWrite(mosfet6, LOW);
  digitalWrite(mosfet7, LOW);*/
  }
  
  
}
 

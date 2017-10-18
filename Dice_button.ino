
// Definerer sjusegment
const int a = 2;
const int b = 3;
const int c = 4;
const int d = 5;
const int e = 6;
const int f = 7;
const int g = 8;

int lag = 100;

const int buttonPin = 12; // the number of the pushbutton pin
int buttonState = 0;  // variable for reading the pushbutton 

void setup() {
  // setup 7segment display
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);

  // setup button
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    int waiting = random(2, 6);
    for(int j = 0; j <= waiting; j++){
      for(int i = 1; i <= 6; i++){
        clearSegment();
        printNumber(i);
        delay(lag);
      }
    }
    int dice = random(1,6);
    clearSegment();
    printNumber(dice);
  }
}

void printNumber(int i){
  if(i == 0){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
  }
  else if(i == 1){
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
  }
  else if(i == 2){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(g,HIGH);
  }
  else if(i == 3){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
  }
  else if(i == 4){
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  else if(i == 5){
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  else if(i == 6){
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  else if(i == 7){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
  }
  else if(i == 8){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
  else if(i == 9){
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
  }
}
void clearSegment(){
  for(int i = 2; i < 9; i++){
    digitalWrite(i,LOW);
  }
}


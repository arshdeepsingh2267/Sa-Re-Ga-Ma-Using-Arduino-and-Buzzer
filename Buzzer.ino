//####Hardware used will be a buzzer, arduino board and connecting wires.####
int buzpin=5;
void setup() {
Serial.begin(9600);
pinMode(buzpin,OUTPUT);
  

}

void loop() {
  /*
  --- Sa 240 Hz, Re 270 Hz, Ga 300 Hz, Ma 320 Hz,Pa 360 Hz, Dha 400 Hz, and Ni 450 Hz (Source : GOOGLE SEARCH)
  --- tone is an inbuilt function in arduino.
  --- noTone is an inbuilt function in arduino.
  We Cant use a Loop here as the sargams frequency do not follow any increment or decrement or any kind of pattern.
  */
  tone(buzpin,240); 
  delay(250);
  noTone(buzpin); 
  delay(250);
  tone(buzpin,270);
  delay(250);
  noTone(buzpin);
  delay(250);
  tone(buzpin,300);
  delay(250);
  noTone(buzpin);
  delay(250);
  tone(buzpin,320);
  delay(250);
  noTone(buzpin);
  delay(250);
  tone(buzpin,360);
  delay(250);
  noTone(buzpin);
  delay(250);
  tone(buzpin,400);
  delay(250);
  noTone(buzpin);
  delay(250);
  tone(buzpin,450);
  delay(250);
  noTone(buzpin);
  delay(250);
  tone(buzpin,500);
  delay(250);
  noTone(buzpin);
  delay(1000);
  //Sa 240 Hz, Re 270 Hz, Ga 300 Hz, Ma 320 Hz,Pa 360 Hz, Dha 400 Hz, and Ni 450 Hz (SOURCE : GOOGLE SEARCH)

}

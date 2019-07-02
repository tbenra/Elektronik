int LED_Pin = 10;
long loopFreq = 1000;
unsigned long zeitdamals = 0;
int Pot_Pin = A0;
int Pot_val= 0 ;
int pwm= 0;



void setup() {

  pinMode(LED_Pin, OUTPUT);
}
void loop() {
  
  unsigned long zeitjetzt = millis();
  if(zeitjetzt - zeitdamals >= loopFreq){
  zeitdamals=zeitjetzt;
  Pot_val= analogRead(Pot_Pin);
  pwm = map(Pot_val, 0, 1023, 0, 255);
  analogWrite(LED_Pin, pwm);
  }
                      
}

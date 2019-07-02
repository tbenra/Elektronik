int LED_Pin = 10;
int LED_status= LOW;
long zeit = 1000;
unsigned long zeitdamals = 0;
int Pot_Pin = A0;
int Pot_val= 0 ;

void setup() {
  pinMode(LED_Pin, OUTPUT);
}

void loop() {
  
  unsigned long zeitjetzt = millis();
  if(zeitjetzt - zeitdamals >= zeit){
  zeitdamals=zeitjetzt;
  Pot_val= analogRead(Pot_Pin);
  zeit = map(Pot_val, 0, 1023, 1000, 1);
  if(LED_status==LOW){
    LED_status=HIGH;
    } 
    else { 
      LED_status==LOW;
      }
      digitalWrite(LED_Pin, LED_status);
      }                  
}

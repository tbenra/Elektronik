int LED_Pin = 10;
int LED_status= LOW;
const long zeit = 1000;
unsigned long zeitdamals = 0;

void setup() {

  pinMode(LED_Pin, OUTPUT);
}

void loop() {
  unsigned long zeitjetzt = millis();
  if(zeitjetzt - zeitdamals >= zeit){
  zeitdamals=zeitjetzt;
  if(LED_status==LOW){
    LED_status=HIGH;
    } 
    else { 
      LED_status==LOW;
      }
      digitalWrite(LED_Pin, LED_status);
  }
                      
}

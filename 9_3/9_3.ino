int LED_Pin = 10;
unsigned long zeitdamals = 0;
int Pot_Pin = A0;
int Pot_val= 0 ;
int LoopFreq= 10;
double Spannung = 0;




void setup() {

  pinMode(LED_Pin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  
  unsigned long zeitjetzt = millis();
  if(zeitjetzt - zeitdamals >= LoopFreq){
  zeitdamals=zeitjetzt;
  Pot_val= analogRead(Pot_Pin);
  Spannung = (Pot_val/1023)*5;
        Serial.print("Die Spannung beträgt "); 
        Serial.print(Spannung);
        Serial.println("V");
  }
                      
}

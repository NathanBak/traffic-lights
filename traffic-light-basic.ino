/*
 * Display green light for 5 seconds, 
 * yellow light for 1 second, and 
 * red light for 4 seconds.
 * 
 * See https://github.com/NathanBak/traffic-lights
 * for setup instructions.
 */

// Give pins meaningful names
static const uint8_t RED    = 16;  // D0
static const uint8_t YELLOW =  5;  // D1
static const uint8_t GREEN  =  4;  // D2

void setup() {
  // Prepare pins to "write" in output mode
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  digitalWrite(GREEN, HIGH);   
  delay(5000); // 5 seconds                     
  digitalWrite(GREEN, LOW);    
  digitalWrite(YELLOW, HIGH);  
  delay(1000); // 1 second                   
  digitalWrite(YELLOW, LOW);    
  digitalWrite(RED, HIGH);   
  delay(4000); // 4 seconds                     
  digitalWrite(RED, LOW);                         
}

//Pin declarations
int LED_PIN_START = 11;
int LED_PIN_NUM = 3;

void setup() {

  //Initializes all LED Pins for output
  for (int i = LED_PIN_START; i < LED_PIN_START + LED_PIN_NUM; i++){
    pinMode(i, OUTPUT);
  }

  Serial.begin(9600);

}

void loop() {
  
  while (true){

    int i = LED_PIN_START;

    while (true){
      digitalWrite(i, HIGH);
      
      if (i == LED_PIN_START){
        digitalWrite(LED_PIN_START + LED_PIN_NUM - 1, LOW);
      } else {
        digitalWrite(i - 1, LOW);
      }

      i += 1;

      if (i == LED_PIN_START + LED_PIN_NUM){
        i = LED_PIN_START;
      }

      delay(300);
    }

  }

}

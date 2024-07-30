// Welcome to Aviyan's Thoughts

int ProximitySensor = 4; // connect OUTPUT pin of IR sensor to Aries GPIO-4
int LED = 22; // Green color LED is internally connected to GPIO-22

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode (ProximitySensor, INPUT); // sensor pin as INPUT
  pinMode (LED, OUTPUT); // Led pin as OUTPUT
}

// the loop function runs over and over again forever
void loop() {
  // reading sensor data
  int statusSensor = digitalRead (ProximitySensor);   
  
  if (statusSensor == 1){
    digitalWrite(LED, HIGH); // LED OFF 
  }
  else {
    digitalWrite(LED, LOW); // LED ON
  }
}


/*
  ReadAnalogVoltage
  Reads an analog input on pin 0, converts it to voltage, and prints the result to the serial monitor.
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.
 
  This example code is in the public domain.
  
  Updated by @mpinner for arduino intro courses at @crashspacela

  You should learn about:
   - analog vs digital
   - analogRead()
   - analogWrite()
   - creating methods
   
 */
 
 #define ANALOG_PIN A0
 #define LED_PIN 9
 
 #define REFERENCE_VOLTAGE 5.0
 #define MAX_ANALOG_VALUE 1023.0


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {

  // read the input on analog pin 0:
  int sensorValue = analogRead(ANALOG_PIN);

  // write analog value to LED (hint: LED_PIN better be a PWM pin)
  analogWrite(LED_PIN, sensorValue / 4);

  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = convertToVoltage(sensorValue);
  
  // print out the value you read:
  Serial.println(voltage);

  delay(100); // this is here to keep your serial monitor happy and avoid overwhelming the serial buffer 
}

float convertAnalogToVoltage(int analogValue) {
  return analogValue * (REFERENCE_VOLTAGE / MAX_ANALOG_VALUE);
}

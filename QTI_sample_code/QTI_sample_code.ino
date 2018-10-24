

//Pins for QTI connections on board
#define lineSensor1 47 
#define lineSensor2 49
#define lineSensor3 51
#define lineSensor4 53
#define lineSensor5 52


void setup() {
  Serial.begin(9600); //start the serial monitor so we can view the output


void loop() {

  int qti1 = RCTime(lineSensor1);     //Calls funtion 'RCTime' Request reading from QTI sensor at pin 'linesensor1' saves value in variable 'qti'
  delay(200);
  int qti2 = RCTime(lineSensor2);     //Calls funtion 'RCTime' Request reading from QTI sensor at pin 'linesensor1' saves value in variable 'qti'
  delay(200);
  int qti3 = RCTime(lineSensor3);     //Calls funtion 'RCTime' Request reading from QTI sensor at pin 'linesensor1' saves value in variable 'qti'
  delay(200);
  int qti4 = RCTime(lineSensor4);     //Calls funtion 'RCTime' Request reading from QTI sensor at pin 'linesensor1' saves value in variable 'qti'
  delay(200);
  int qti5 = RCTime(lineSensor5);     //Calls funtion 'RCTime' Request reading from QTI sensor at pin 'linesensor1' saves value in variable 'qti'
  delay(200);
  Serial.println(qti1);  
  Serial.println(qti2); 
  Serial.println(qti3); 
  Serial.println(qti4); 
  Serial.println(qti5); //Print QTI reading to serial monitor
}

//Defines funtion 'RCTime' to read value from QTI sensor
long RCTime(int sensorIn)
{
  
  long duration = 0;
  pinMode(sensorIn, OUTPUT); // Sets pin as OUTPUT
  digitalWrite(sensorIn, HIGH); // Pin HIGH
  delay(1); // Waits for 1 millisecond
  pinMode(sensorIn, INPUT); // Sets pin as INPUT
  digitalWrite(sensorIn, LOW); // Pin LOW

  while(digitalRead(sensorIn)) { // Waits for the pin to go LOW
    duration++;

  }
return duration; // Returns the duration of the pulse
}

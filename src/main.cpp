#include <Arduino.h>
#include <ESP32Servo.h>
const int VRx = 36;
int xPosition = 0;
const int servoPin = 4;
  Servo myServo;
void setup() {
myServo.attach(servoPin);
Serial.begin(115200);
pinMode(VRx, INPUT);
}

void loop() {
  xPosition = analogRead(VRx);
int servoAngle = map(xPosition, 0, 4095, 0, 180);

  Serial.print("X Position: ");
  Serial.println(xPosition); 
  delay(50); 
  myServo.write(servoAngle);


  

}
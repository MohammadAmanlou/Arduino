#include <Servo.h>
#define BUTTON 8
#define SERVO 9
#define LDR A0

Servo servo;
bool Button;
int input_LDR;

void setup() {
servo.attach(SERVO);
pinMode ( BUTTON , INPUT);
pinMode(LDR , INPUT);
Serial.begin(9600);
}

void loop() {
    Button = digitalRead(BUTTON);
    input_LDR = analogRead (LDR);
    Serial.println(input_LDR);
    if (Button && input_LDR > 10){
      servo.write(90);
      delay(2000);
      servo.write(0);
    }
}

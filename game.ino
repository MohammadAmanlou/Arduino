#define joyX A0
#define joyY A1
#define YELLOW 5
#define ORANGE 4
#define RED 3
#define GREEN 2


int score=0;
int round_of_play =0 ;

void setup() {
    Serial.begin(9600);
    pinMode(YELLOW , OUTPUT);
    pinMode(ORANGE , OUTPUT);
    pinMode(RED , OUTPUT);
    pinMode(GREEN , OUTPUT);
}

int check_joy_arrow(int yValue , int xValue){
    if (yValue > 880 ){
      return YELLOW;
    }
    else if (xValue > 880){
      return ORANGE;
    }
    else if (yValue < 100){
      return RED;
    }
    else if (xValue < 100 ){
      return GREEN ; 
    }
    return 0;
}

void loop() {
  if (round_of_play < 10){
    int my_lamp = random ( 2, 5);
    digitalWrite(my_lamp , HIGH);
    int arrow = 0;
    int lightTime = millis ();
    bool is_arrow_press = 0;
    while (millis() - lightTime < 500 ){
      int yValue = analogRead(joyX);
      int xValue = analogRead(joyY);
      arrow = check_joy_arrow(yValue , xValue);
      if (arrow != 0){
        is_arrow_press = 1;
      }
      if (arrow == my_lamp){
        score ++ ;
        Serial.println("+1");
        round_of_play ++;
      }
      else if (arrow != my_lamp && arrow != 0){
        Serial.println("-1");
        round_of_play ++;
      }
      if (arrow != 0 ){
        break;
      }
    }
      if (arrow == 0){
      Serial.println("Too Slow");
      round_of_play ++;
    }
    digitalWrite(my_lamp , LOW);
    delay(1000); }
    else{
    Serial.print("score: ");
    Serial.println(score);
    delay(10000);
    exit(1);}
    
    
}

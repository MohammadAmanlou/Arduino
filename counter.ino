#define Top 3
#define TopRight 4
#define TopLeft 5
#define Middle 6
#define BotLeft 7
#define BotRight 8
#define Bot 9
#define Green 10
#define Yellow 11
#define Red 12


void setup() {
  pinMode(Top,OUTPUT);
  pinMode(TopRight,OUTPUT);
  pinMode(TopLeft,OUTPUT);
  pinMode(Middle,OUTPUT);
  pinMode(BotLeft,OUTPUT);
  pinMode(BotRight,OUTPUT);
  pinMode(Bot,OUTPUT);
  pinMode(Green , OUTPUT);
  pinMode(Yellow , OUTPUT);
  pinMode(Red , OUTPUT);
}

void zero(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,LOW);
  digitalWrite(Middle,HIGH);
  digitalWrite(BotLeft,LOW);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,LOW);
}


void one(){
  digitalWrite(Top,HIGH);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,HIGH);
  digitalWrite(Middle,HIGH);
  digitalWrite(BotLeft,HIGH);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,HIGH);
}

void two(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,HIGH);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,LOW);
  digitalWrite(BotRight,HIGH);
  digitalWrite(Bot,LOW);
}

void three(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,HIGH);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,HIGH);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,LOW);
}

void four(){
  digitalWrite(Top,HIGH);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,LOW);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,HIGH);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,HIGH);
}

void five(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,HIGH);
  digitalWrite(TopLeft,LOW);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,HIGH);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,LOW);
}

void six(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,HIGH);
  digitalWrite(TopLeft,LOW);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,LOW);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,LOW);
}

void seven(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,HIGH);
  digitalWrite(Middle,HIGH);
  digitalWrite(BotLeft,HIGH);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,HIGH);
}

void eight(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,LOW);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,LOW);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,LOW);
}

void nine(){
  digitalWrite(Top,LOW);
  digitalWrite(TopRight,LOW);
  digitalWrite(TopLeft,LOW);
  digitalWrite(Middle,LOW);
  digitalWrite(BotLeft,HIGH);
  digitalWrite(BotRight,LOW);
  digitalWrite(Bot,LOW);
}

void count_down(){
  nine();
  delay(1000);
  eight();
  delay(1000);
  seven();
  delay(1000);
  six();
  delay(1000);
  five();
  delay(1000);
  four();
  delay(1000);
  three();
  delay(1000);
  two();
  delay(1000);
  one();
  delay(1000);
  zero();
  delay(1000);
}

void loop() {
digitalWrite(Green , HIGH);
count_down();
digitalWrite(Yellow , HIGH);
digitalWrite(Green , LOW);
delay(3000);
digitalWrite(Yellow , LOW);
digitalWrite(Red , HIGH);
count_down();
digitalWrite(Red , LOW);





}

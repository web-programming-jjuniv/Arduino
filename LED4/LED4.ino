// GPIO 핀 정의
#define RED_LED_1 2
#define RED_LED_2 4
#define RED_LED_3 16
#define RED_LED_4 17

#define GREEN_LED_1 5
#define GREEN_LED_2 18
#define GREEN_LED_3 19
#define GREEN_LED_4 21

#define YELLOW_LED_1 22
#define YELLOW_LED_2 23
#define YELLOW_LED_3 25
#define YELLOW_LED_4 26

void setup() {
  // 모든 LED 핀을 출력 모드로 설정
  pinMode(RED_LED_1, OUTPUT);
  pinMode(RED_LED_2, OUTPUT);
  pinMode(RED_LED_3, OUTPUT);
  pinMode(RED_LED_4, OUTPUT);

  pinMode(GREEN_LED_1, OUTPUT);
  pinMode(GREEN_LED_2, OUTPUT);
  pinMode(GREEN_LED_3, OUTPUT);
  pinMode(GREEN_LED_4, OUTPUT);

  pinMode(YELLOW_LED_1, OUTPUT);
  pinMode(YELLOW_LED_2, OUTPUT);
  pinMode(YELLOW_LED_3, OUTPUT);
  pinMode(YELLOW_LED_4, OUTPUT);
}


void loop(){

  digitalWrite(RED_LED_1, HIGH);
  digitalWrite(RED_LED_2, HIGH);
  digitalWrite(RED_LED_3, HIGH);
  digitalWrite(GREEN_LED_4, HIGH);
}

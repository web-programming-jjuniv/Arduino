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
  digitalWrite(RED_LED_4, HIGH);
  delay(1000);

  //1번 초록 점등
  digitalWrite(RED_LED_1, LOW);
  // GREEN_LED_1이 켜질 때 나머지 RED_LED가 켜짐
  digitalWrite(GREEN_LED_1, HIGH);
  delay(5000);// 5초 동안 GREEN_LED_1 유지
  digitalWrite(GREEN_LED_1, LOW);
  digitalWrite(YELLOW_LED_1, HIGH);
  delay(1000); // 3초 동안 YELLOW_LED_1 유지
  digitalWrite(YELLOW_LED_1, LOW); 

  digitalWrite(RED_LED_1, HIGH);
  digitalWrite(RED_LED_2, HIGH);
  digitalWrite(RED_LED_3, HIGH);
  digitalWrite(RED_LED_4, HIGH);
  delay(1000);

  //2번 초록 점등
  digitalWrite(RED_LED_2, LOW);
  // GREEN_LED_1이 켜질 때 나머지 RED_LED가 켜짐
  digitalWrite(GREEN_LED_2, HIGH);
  delay(5000);// 5초 동안 GREEN_LED_1 유지
  digitalWrite(GREEN_LED_2, LOW);
  digitalWrite(YELLOW_LED_2, HIGH);
  delay(1000); // 3초 동안 YELLOW_LED_1 유지
  digitalWrite(YELLOW_LED_2, LOW); 

  digitalWrite(RED_LED_1, HIGH);
  digitalWrite(RED_LED_2, HIGH);
  digitalWrite(RED_LED_3, HIGH);
  digitalWrite(RED_LED_4, HIGH);
  delay(1000);

  //3번 초록 점등
  digitalWrite(RED_LED_3, LOW);
  // GREEN_LED_1이 켜질 때 나머지 RED_LED가 켜짐
  digitalWrite(GREEN_LED_3, HIGH);
  delay(5000);// 5초 동안 GREEN_LED_1 유지
  digitalWrite(GREEN_LED_3, LOW);
  digitalWrite(YELLOW_LED_3, HIGH);
  delay(1000); // 3초 동안 YELLOW_LED_1 유지
  digitalWrite(YELLOW_LED_3, LOW); 

  digitalWrite(RED_LED_1, HIGH);
  digitalWrite(RED_LED_2, HIGH);
  digitalWrite(RED_LED_3, HIGH);
  digitalWrite(RED_LED_4, HIGH);
  delay(1000);

  //4번 초록 점등
  digitalWrite(RED_LED_4, LOW);
  // GREEN_LED_1이 켜질 때 나머지 RED_LED가 켜짐
  digitalWrite(GREEN_LED_4, HIGH);
  delay(5000);// 5초 동안 GREEN_LED_1 유지
  digitalWrite(GREEN_LED_4, LOW);
  digitalWrite(YELLOW_LED_4, HIGH);
  delay(1000); // 3초 동안 YELLOW_LED_1 유지
  digitalWrite(YELLOW_LED_4, LOW); 

  digitalWrite(RED_LED_1, HIGH);
  digitalWrite(RED_LED_2, HIGH);
  digitalWrite(RED_LED_3, HIGH);
  digitalWrite(RED_LED_4, HIGH);
  delay(1000);

}

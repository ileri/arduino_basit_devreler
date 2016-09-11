#define Bekle delay(75)
#define UzunBekle delay(1000)
#define Cikis1 pinMode(8, OUTPUT)
#define Cikis2 pinMode(9, OUTPUT)
#define Cikis3 pinMode(10, OUTPUT)
#define Cikis4 pinMode(11, OUTPUT)
#define Yak1 digitalWrite(8, HIGH)
#define Yak2 digitalWrite(9, HIGH)
#define Yak3 digitalWrite(10, HIGH)
#define Yak4 digitalWrite(11, HIGH)
#define Son1 digitalWrite(8, LOW)
#define Son2 digitalWrite(9, LOW)
#define Son3 digitalWrite(10, LOW)
#define Son4 digitalWrite(11, LOW)
void setup() {
  Cikis1;
  Cikis2;
  Cikis3;
  Cikis4;
}
void SoldanSaga(){
  Yak1;
  Bekle;
  Yak2;
  Bekle;
  Yak3;
  Bekle;
  Yak4;
  UzunBekle;
  Son4;
  Bekle;
  Son3;
  Bekle;
  Son2;
  Bekle;
  Son1;
  Bekle;
  UzunBekle;
}

void SagdanSola(){
  Yak4;
  Bekle;
  Yak3;
  Bekle;
  Yak2;
  Bekle;
  Yak1;
  UzunBekle;
  Son1;
  Bekle;
  Son2;
  Bekle;
  Son3;
  Bekle;
  Son4;
  Bekle;
  UzunBekle;
}
void Polis(){
  Yak1;
  Yak2;
  UzunBekle;
  Son1;
  Son2;
  Yak3;
  Yak4;
  UzunBekle;
  Son3;
  Son4;
}
void YanSon(){
  Yak1;
  Yak2;
  Yak3;
  Yak4;
  Bekle;
  Son1;
  Son2;
  Son3;
  Son4;
  Bekle;
}
void Desen(){
  SoldanSaga();
  SagdanSola();
  SoldanSaga();
  SagdanSola();
  Polis();
  Polis();
  Polis();
  Polis();
  Polis();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  YanSon();
  UzunBekle;
}
void loop() {
  Desen();
}

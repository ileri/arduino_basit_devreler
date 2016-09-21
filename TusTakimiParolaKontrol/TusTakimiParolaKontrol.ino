#include <Keypad.h>
#include <string.h>
const byte SATIRLAR = 4;
const byte SUTUNLAR = 3;
char PAROLA[] = "1453";
int yanlisDeneme = 0;
char tuslar[SATIRLAR][SUTUNLAR] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'},
};
byte satirPinleri[SATIRLAR] = {9,8,7,6};
byte sutunPinleri[SUTUNLAR] = {12,11,10};
Keypad tusTakimi = Keypad( 
  makeKeymap(tuslar), 
  satirPinleri, sutunPinleri,
  SATIRLAR, SUTUNLAR 
);
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.print("\nArduino'nuzun Serial Monitorune Hosgeldiniz.\nLutfen parolanizi girin (# ile onaylayin): ");
  if (parolaKontrol() == 0);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(50);
}

int parolaKontrol(){

  char girilen[] = "";
  char girilenChar = tusTakimi.waitForKey();
  int i;
  for(i=0 ; girilenChar != '#';i++){
    Serial.print("*");
    girilen[i] = girilenChar;
    girilenChar = tusTakimi.waitForKey();
  }
  girilen[i] = '\0';
  if (strcmp(PAROLA,girilen) == 0){
    Serial.println("\nGiris basarili. Arduino calistiriliyor...");
    return 0;
  }
  else{
    yanlisDeneme++;
      if(yanlisDeneme < 3){
        Serial.print("\nGirdiginiz parola yanlis. Tekrar deneyiniz.\nLutfen parolanizi giriniz: ");
        parolaKontrol();
      }else{
        Serial.println("\n3  Defa Yanlis Parola Girdiniz. Sistemden cikiliyor...");
        delay(100);
        exit(1);
     } 
  }
}

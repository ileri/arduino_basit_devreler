#include <Keypad.h>
const byte SATIRLAR = 4;
const byte SUTUNLAR = 3;
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
  Serial.begin(9600);

}

void loop() {
  char basilan = tusTakimi.waitForKey();
  Serial.println(basilan);

}

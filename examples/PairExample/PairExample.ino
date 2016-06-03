#include <Pair.h>

void setup() {
  // put your setup code here, to run once:
  Pair<> pair1(1,1);
  Pair<> pair2(1,2);
  Serial.begin(9600);

  Serial.print("pair1 >  pair2?: ");
  Serial.println((pair1 > pair2));
  Serial.print("pair1 <  pair2?: ");
  Serial.println((pair1 < pair2));
  Serial.print("pair1 <  pair2?: ");
  Serial.println((pair1 == pair2));
}

void loop() {
  // put your main code here, to run repeatedly:

}

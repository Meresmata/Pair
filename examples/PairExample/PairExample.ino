#include <Pair.h>

void setup() {
  // put your setup code here, to run once:
  Pair<> c(1,1);
  Pair<> d(1,2);
  Serial.begin(9600);

  if (d> c)
    Serial.print("Pair d > c.");
}

void loop() {
  // put your main code here, to run repeatedly:

}

#include <Pair.h>
#include <Triple.h>

void setup() {
  // put your setup code here, to run once:
  Triple<> d(1,2,1);
  Pair<> c(1,1);
  Serial.begin(9600);
  if (c > d)
    Serial.print(" Pair c > Triple d");
  if (d < c)
    Serial.print("Triple d <  Pair c.");
}

void loop() {
  // put your main code here, to run repeatedly:

}

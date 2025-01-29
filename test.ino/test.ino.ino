#include <LiquidCrystal.h>
int i = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put   your main code here, to run repeatedly:
  Serial.print("The current loop number is ");
  Serial.print(i);
  Serial.print(", which is ");
  if (isOdd(i)) {
    Serial.println("odd");
  }
  else {
    Serial.println("even");
  }
  delay(500);
  i++;
}

void counter(int n) {
      Serial.print("The current loop number is ");
      Serial.println(n);
}

bool isOdd(int n) {
  return n%2;
}
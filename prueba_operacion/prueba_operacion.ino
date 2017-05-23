int rpm;

void setup() {
  Serial.begin(9600);
}

void loop() {
  rpm = 6*10000;
  Serial.println(rpm);
}

int hola;

void setup() {
Serial.begin(115200);

}

void loop(){
  Serial.println("Pido un comando:");
  while(!Serial.available());
  hola=Serial.parseInt();
  Serial.println(hola);
}

int rpm;  // Se desborda, tal y como pone en las espec. https://www.arduino.cc/en/Reference/Int
long rpm_2;

void setup() {
  Serial.begin(9600);
}

void loop() {
  rpm_2 = 6*10000;        // Si multiplicas ints, el cálculo se hace como int (y por tanto no te puedes fiar de él)
  Serial.println(rpm_2);
  
  rpm_2= 6*10000L;        // Basta con indicarle que de ellos uno es long
  Serial.println(rpm_2);

  rpm_2= 6*10000.;        // O double. También valdría 10000.0
  Serial.println(rpm_2);

  rpm_2= 6*(long)(10000); // Al estilo C
  Serial.println(rpm_2);
  
  rpm_2= 6*static_cast<long>(10000);  // Al estilo C++ (mejor que C)
  Serial.println(rpm_2);
  
  rpm= 6*10000.0;         // De hecho, si lo hubieras puesto como double, habrías visto que se te está desbordando exactamente donde debe, en 32767
  Serial.println(rpm);
  
  Serial.println("");
}

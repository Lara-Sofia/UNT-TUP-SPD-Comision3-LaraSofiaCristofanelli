// Codigo Ejemplo
int led_pin = 8;
int pir_pin = 2;
int pir_state = 0;

void setup()
{
  // Configurar pir_pin como Entrada
  pinMode(pir_pin, INPUT);
  // Configurar led_pin como Salida
  pinMode(led_pin, OUTPUT);
}

void loop()
{
  // Leer Estado del Puerto de Entrada
  pir_state = digitalRead(pir_pin);
  // Actual Segun el Estado de la Lectura
  if (pir_state == HIGH){
  //Encender Led en Puerto de Salida
    digitalWrite(led_pin, HIGH);
  } else {
  //Apagar Led en Puerto de Salida
    digitalWrite(led_pin, LOW);
  }
  delay(100);
  // Encender Led en Puerto de Salida
}

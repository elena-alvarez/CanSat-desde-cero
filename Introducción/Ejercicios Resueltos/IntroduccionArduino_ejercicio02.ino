//Ejercicio 2 de introducción Arduino
//Cambiar la frecuencia de Parpadeo de un LED
//Cambiar el número entre paréntesis de la función delay()

//the setup function runs once when you press reset or power the board
void setup() {
// initialize digital pin LED_BUILTIN as an output.
pinMode(12, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);             // 500 ms encendido
  digitalWrite(12, LOW);   // turn the LED off by making the voltage LOW
  delay(500);             // 500 ms apagado
}
//Ejercicio 1 de introducción Arduino
//Parpadeo del led integrado de Arduino UNO (pin 13) o con un LED externo conectado
//En caso de LED externo conectado cambiar pin por el pin al que se conecte (pin 12 por ejemplo)
//Configuración para 1 segundo encendido y un segundo apagado

//the setup function runs once when you press reset or power the board
void setup() {
// initialize digital pin LED_BUILTIN as an output.
pinMode(13, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
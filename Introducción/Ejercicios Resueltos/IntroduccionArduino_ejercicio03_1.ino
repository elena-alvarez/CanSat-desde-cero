//Ejercicio 3.2 Mensaje SOS en código Morse (...---...)
//Punto: 500 ms encendido 500 ms apagado
//Raya: 1000 ms encendido 500 ms apagado
//Señal de inicio (apagar led 2 segundos)
//Esta vez utilizando el bucle for


//the setup function runs once when you press reset or power the board
void setup() {
// initialize digital pin as an output.
pinMode(12, OUTPUT);
}

//the loop function runs over and over again forever
void loop() {
  
  //Código para S: tres puntos
  for (int i=1; i<3; i++){
    digitalWrite(12, HIGH);  
    delay(500);             // 500 ms encendido
    digitalWrite(12, LOW);   
    delay(500);             // 500 ms apagado
  }

  //Código para O: tres rayas
  for (int i=1; i<3; i++){
    digitalWrite(12, HIGH);  
    delay(1000);             // 1000 ms encendido
    digitalWrite(12, LOW);   
    delay(500);             // 500 ms apagado
  }

   //Código para S: tres puntos
  for (int i=1; i<3; i++){
    digitalWrite(12, HIGH);  
    delay(500);             // 500 ms encendido
    digitalWrite(12, LOW);   
    delay(500);             // 500 ms apagado
  }

  //Señal de incio: esperar dos segundos (2000 ms) para volver a empezar  
  delay(2000);             

}
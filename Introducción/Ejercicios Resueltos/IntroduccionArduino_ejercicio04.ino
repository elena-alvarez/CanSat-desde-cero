//Ejercicio 4 Mensaje SOS en código Morse (...---...) 
//Mostrar por puerto serie
//Utilizando el bucle for
//Punto: 500 ms encendido 500 ms apagado
//Raya: 1000 ms encendido 500 ms apagado
//Señal de inicio (apagar led 2 segundos)


// Muestra el mensaje SOS por el puerto serie 

void setup()
{
  pinMode(12, OUTPUT);
  //Iniciar puerto serie
  Serial.begin(9600);
}

void loop()
{
  //Escribir S
  for (int i=1; i<=3; i++){
    digitalWrite(12, HIGH);
    delay(500); 
    digitalWrite(12, LOW);
    delay(500); 
  }
  //mostrar S por puerto serie
  Serial.print("S");
  
  //Escribir O
  for (int i=1; i<=3; i++){
    digitalWrite(12, HIGH);
    delay(1000); 
    digitalWrite(12, LOW);
    delay(500); 
  }
  //mostrar O por puerto serie
  Serial.print("O");
  
  //Escribir S
  for (int i=1; i<=3; i++){
    digitalWrite(12, HIGH);
    delay(500); 
    digitalWrite(12, LOW);
    delay(500); 
  }
  //mostrar S por puerto serie
  Serial.println("S");

  //Esperar para volver a empezar
  delay(2000);
  
}

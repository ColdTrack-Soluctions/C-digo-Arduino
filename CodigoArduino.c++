const int pinosensorLM35 = A0;
float temperatura;
int teste = 0;
int pinoSensorTCRT5000 = 7;
void setup() {
pinMode(pinoSensorTCRT5000, INPUT);
pinMode(pinosensorLM35, INPUT);
Serial.begin(9600); 
}
 
void loop() {
temperatura = (float(analogRead(pinosensorLM35))*5/(1023))/0.01;

  Serial.print(temperatura);
  Serial.print(";");
  Serial.println(digitalRead(pinoSensorTCRT5000));
  delay(1000);
  
 }
//condicional para distância
// Acionar buzzer e LED se objeto detectado estiver a menos de 10cm do sensor:
 if (dist <= 10) 
 {
   tone(buzzer, 700);
   digitalWrite(led, HIGH);
 }
 else 
 {
   noTone(buzzer);
   digitalWrite(led, LOW);
 }
 // Aguardar 100ms antes da próxima leitura para evitar interferência
 delay(100);
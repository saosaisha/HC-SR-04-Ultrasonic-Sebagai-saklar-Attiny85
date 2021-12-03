/* Saklar Ultrasonic
 *  Dalam percobaan ini kita belajar membuat saklar dengan
 *  Ultrasonic HCR04
 */

#include <NewPing.h> // diperlukan Library Ping Ultrasonic Sensor
 
#define trigger 3 // HCR04 Trigger di pin PB3
#define echo 2 // HCR04 Echo di Pin PB2
#define digital_pin 1 // Output di Pin PB1 
#define distance_max 5 /* Menentukan kemampuan Ultra sonic
                             dalam satuan Cm 
                             */
NewPing sonar(trigger, echo, distance_max); 
 
void setup() {
  pinMode(digital_pin, OUTPUT);
}
void loop() {
  uint8_t distance = sonar.ping_cm();
 
  if (distance) {
    digitalWrite(digital_pin, HIGH); //PB1 Aktif
    delay(200);
  } else {
    digitalWrite(digital_pin, LOW); //PB1 Off
  }
  delay(1000);
}

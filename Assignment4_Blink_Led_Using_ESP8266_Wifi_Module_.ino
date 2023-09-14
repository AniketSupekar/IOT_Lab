#define LED_BUILTIN 2 // GPIO1 for ESP-01, GPIO2 for ESP-01S
// Change to 2 for ESP-01S module
void setup() {
pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
digitalWrite(LED_BUILTIN, LOW); // Turn the LED on (ESP-01 LED is active low)
delay(1000);
digitalWrite(LED_BUILTIN, HIGH); // Turn the LED off
delay(1000);
}

const byte led_gpio1 = 32;
const byte led_gpio2 = 33;
const byte led_gpio3 = 27;
const byte led_gpio4 = 14;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led_gpio1, OUTPUT);// put your setup code here, to run once:
  pinMode(led_gpio2, OUTPUT);
  pinMode(led_gpio3, OUTPUT);
  pinMode(led_gpio4, OUTPUT)  ;
}

void loop() {
  digitalWrite(led_gpio1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_gpio1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second// put your main code here, to run repeatedly:
  digitalWrite(led_gpio2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_gpio2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(led_gpio3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_gpio3, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(led_gpio4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_gpio4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

}

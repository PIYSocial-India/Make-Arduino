/*
 * PIYSocial ( https://piysocial.netlify.app/blink.html )
 * Make : Arduino
 * Basics
 * Basics-01: Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13.
  
* ( https://piysocial.netlify.app/blink.html )
* 
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN , OUTPUT); //LED_BUILTIN means in built LED on PIN13.
 // pinMode([Any Digital Pin of Arduino], OUTPUT); // Connect the LED as per the circuit diagram given on README
}

// the loop function runs over and over again forever
// You can play with the blinking the LED by chaging the values of Delay
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

/*
 * PIYSocial ( https://piysocial.netlify.app/blink.html )
 * Make : Arduino
 * Basics
 * Basics-01: Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13.
  
* ( https://piysocial.netlify.app/blink.html )
* 
*/

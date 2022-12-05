//**********************************************************************************
/*  
 * Filename    : Ultrasonic Ranger
 * Description : four leds are controlled by ultrasonic ranging.
 * Auther      : http//www.keyestudio.com
*/
const int TrigPin = 27;    // define TrigPin
const int EchoPin = 26;    // define EchoPin.
const int PIN_LED1 = 19;    // define PIN_LED1
const int PIN_LED2 = 18;    // define PIN_LED2
const int PIN_LED3 = 17;    // define PIN_LED3
const int PIN_LED4 = 16;    // define PIN_LED4
int duration = 0;    // define the initial value of the duration to be 0
int distance = 0;   // define the initial value of the distance to be 0
void setup() 
{
  pinMode(TrigPin , OUTPUT); // set trigPin to output mode
  pinMode(EchoPin , INPUT); // set echoPin to input mode
  pinMode(PIN_LED1 , OUTPUT);  // set PIN_LED1 to output mode
  pinMode(PIN_LED2 , OUTPUT);  // set PIN_LED2 to output mode
  pinMode(PIN_LED3 , OUTPUT);  // set PIN_LED3 to output mode
  pinMode(PIN_LED4 , OUTPUT);  // set PIN_LED4 to output mode
  Serial.begin(115200);  // Open serial monitor at 115200 baud to see ping results.
}
void loop()
{
// make trigPin output high level lasting for 10μs to triger HC_SR04 
  digitalWrite(TrigPin , HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin , LOW);
// Wait HC-SR04 returning to the high level and measure out this waitting time
  duration = pulseIn(EchoPin , HIGH);
// calculate the distance according to the time
  distance = (duration/2) / 28.5 ;
  Serial.print("Distance: ");
  Serial.print(distance); //Serial port print distance value
  Serial.println("cm");
  if ( distance <= 7 )
  {
    digitalWrite(PIN_LED1, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED1, LOW);
  }
  if ( distance <= 14 )
  {
    digitalWrite(PIN_LED2, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED2, LOW);
  }
  if ( distance <= 21 )
  {
    digitalWrite(PIN_LED3, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED3, LOW);
  }
  if ( distance <= 28 )
  {
    digitalWrite(PIN_LED4, HIGH);
  }
  else
  {
    digitalWrite(PIN_LED4, LOW);
  }
}     
//**********************************************************************************

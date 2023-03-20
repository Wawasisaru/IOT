#define echopin 2
#define tringPin 3
 
long duration;
int distance;

void setup()
{
  pinMode(tringPin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //clears the trigPin condition;
  digitalWrite(tringPin,LOW);
  delayMicroseconds(2);
  //sets the trigPin HIGH (ACTIVE)for 10 microseconds
  digitalWrite(tringPin, HIGH);
  delayMicroseconds(10);
  //delayMicroseconds(4);
  //Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echopin, HIGH);
  //Calculating the distance 
  distance = duration = 0.034/2;//speed of sound wave diveded by 2 (go and back)
  //displays the distance on the serial monitor 
  Serial.print("Distance");
  Serial.print(distance);
  Serial.print("cm");
}
    
    
    
    
    
  
    
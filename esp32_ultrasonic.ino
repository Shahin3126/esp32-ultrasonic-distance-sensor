int trigPin = 26;
int echoPin = 27;

long duration; 
int distance;

void setup(){

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin, LOW);
  delay(2);

  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.0342/2;

  Serial.print("Distance: ");
  Serial.println(distance);
  Serial.print("cm");

}
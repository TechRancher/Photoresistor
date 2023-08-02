/*
  To learn more about this project look at the readME.adoc
*/
// Headers
// Variables
int readPhoto = A0;
int greenPin = 2;
int redPin = 4;
int photoVal;

// Function
int greenLED(int led) {
  digitalWrite(greenPin, HIGH);
  digitalWrite(redPin, LOW);
}
int redLED(int led) {
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(readPhoto, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoVal = analogRead(readPhoto);
  Serial.println(photoVal);
  if(photoVal >= 250){
    greenLED(greenPin);
  } else {
    redLED(redPin);
  }

}

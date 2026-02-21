#define GAS_PIN A2
int sw=10;
int red=9,g=11;

void setup() {
  Serial.begin(9600);
  pinMode(sw,INPUT_PULLUP);
  pinMode(red,OUTPUT);
  pinMode(g,OUTPUT);
  
}

void loop() {
  int gasValue = analogRead(GAS_PIN);
  int swval=digitalRead(sw);

  
  
  if(swval==1){
    
    digitalWrite(red,1);
    Serial.println(gasValue);
  Serial.println(swval);
    
    if (gasValue > 700){
    Serial.println(" Alcohol Detected!");
      digitalWrite(red,0);
    digitalWrite(g,1);
      
      
  } else {
    Serial.println("Safe");
      digitalWrite(g,0);
  }
    
    
  }
  else{
  digitalWrite(red,0);
  }
	
  

  delay(1000);
}
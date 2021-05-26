String text;
void setup() {
Serial.begin(9600);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
while(Serial.available()){
  delay(3);
  char c = Serial.read();
  text+=c;}

if(text.length() >0){
  Serial.println(text);
  if(text == "light on")
  {digitalWrite(6, HIGH);}
  else if(text == "light off")
  {digitalWrite(6, LOW);}
  else if(text == "fan on")
  {digitalWrite(5, HIGH);}
  else if(text == "fan off")
  {digitalWrite(5, LOW);}
  else if(text == "night lamp on")
  {digitalWrite(4, HIGH);}
  else if(text == "night lamp off")
  {digitalWrite(4, LOW);}
  else if(text == "all on")
  {digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);}
  else if(text == "all off")
  {digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  digitalWrite(6, LOW);}
  text = "";}
}

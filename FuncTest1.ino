void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop(){
  func(3);
  func(5);
  func(devil);
}

void func(int led){
  int a;
  for(a=0; a <= 255; a++){
    analogWrite(led, a);
    delay(5);
  }
  for(a=255; a >= 0; a--){
    analogWrite(led, a);
    delay(5);
  }
}

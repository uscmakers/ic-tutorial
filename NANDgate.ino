#define A 3
#define B 4
#define Q 2

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(Q, INPUT);
  Serial.begin(9600);
}

void loop() {
  int nand;
  for( int i =0; i < 4; i++)
  {
    if( i%2 == 0)
    {
      digitalWrite(B, LOW);
    }
    else
    {
      digitalWrite(B, HIGH);
    }
    if(i>=2)
    {
      digitalWrite(A, HIGH);
    }
    else
    {
      digitalWrite(A, LOW);
    }
    nand = digitalRead(Q);
    Serial.write("A = "); 
    Serial.write(A);
    Serial.write(", B = "); 
    Serial.write(B);
    Serial.write(", Q = "); 
    Serial.write(Q);
  }

}

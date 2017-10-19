#define A 3
#define B 4
#define Q 2

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(Q, INPUT);
  Serial.begin(9600);
  Serial.print("Starting...\n");
}

void loop() {
  int bVal;
  int aVal;
  int cVal;
  int qVal;
  for( int i =0; i < 4; i++)
  {
    //TODO: Insert your code here that will iterate through all combinations of A and B
    aVal = i>=2;
    bVal = i%2;
    digitalWrite(A, aVal);
    digitalWrite(B, bVal);
    Serial.print("A = "); 
    Serial.print(aVal);
    Serial.print(", B = "); 
    Serial.print(bVal);
    Serial.print(", Q = "); 
    qVal = digitalRead(Q);
    Serial.print(qVal);
    Serial.print('\n');
  }
  for( int i =0; i < 8; i++)
  {
    //TODO: Insert your code here that will iterate through all combinations of A and B
    aVal = i>=4;
    bVal = (i%4)>=2;
    cVal = i%2;
    digitalWrite(A, aVal);
    digitalWrite(B, bVal);
    Serial.print("A = "); 
    Serial.print(aVal);
    Serial.print(", B = "); 
    Serial.print(bVal);
    Serial.print(", Q = "); 
    qVal = digitalRead(Q);
    Serial.print(qVal);
    Serial.print('\n');
  }
  delay(5000);

}

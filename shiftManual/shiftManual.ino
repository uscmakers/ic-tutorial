void shiftO(int dataP, int clk, int bOut)
{
  int outBit;
  //Isolates the bit we want to output
  int mask = 0b00000001;
  for(int i =0; i <8; i++)
  {
    //Ands the input with the mask to figure out the desired serial bit
    outBit = !!(bOut & (mask<<i));
    Serial.print(outBit);//Debugging
    //Writes to the serial data pin
    digitalWrite(dataP, outBit);
    //Pulses the clock to move our shift register down and take in new data from the serial pin.
    digitalWrite(clk, HIGH);
    delay(50);
    digitalWrite(clk, LOW);
  }
  Serial.print('\n');
  
}
int latchPin =8;
int clkPin = 12;
int dataPin = 11;
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clkPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(latchPin, LOW);
  digitalWrite(dataPin, LOW);
}

void loop() {
  for (int j = 1; j < 256; j = j*2)
  {
    digitalWrite(latchPin, LOW);
    shiftO(dataPin, clkPin, j);
    digitalWrite(latchPin, HIGH);
    delay(500);
  }

}





byte numbers[10] = {B1111110,B0110000,B1011011,B1111001,B0110011,B1011011,B1011111,B1110000,B1111111,B1110011};
byte pins[8] = {2, //a
                3, //b
                4, //c
                5, //d
                6, //e
                7, //f
                8, //g
                9};//h

void setup()
{
  Serial.begin(9600);
  for ( byte i = 0; i<sizeof(pins); i++)
  {
    pinMode(pins[i], OUTPUT);
  }
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}

void serialEvent()
{
  delay(10);
}

void printNumb(byte number)
{
  if (number>9) number =9;
  for(byte i = 0; i<7; i++)
  {
    digitalWrite(pins[i],bitRead(!numbers[number], i));
  }
}

void printNumbs(int number)
{
  if(number>9999) number = 9999;
  int devider = 1000;
  for ( byte i = 0; i<4; i++)
  {
  }
}

    




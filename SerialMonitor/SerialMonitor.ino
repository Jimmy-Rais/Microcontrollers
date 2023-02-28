#define Blue 10
#define Red 8
#define Green 9
char c;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Blue,OUTPUT);
pinMode(Red,OUTPUT);
pinMode(Green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()>0)
{
  c=Serial.read();
  if (c=='b')
  {
    digitalWrite(Blue,HIGH);
  }
  else if(c=='r')
  {
    digitalWrite(Red,HIGH);
    }
    else if(c=='g')
    {
      digitalWrite(Green,HIGH);
      }
  }
}

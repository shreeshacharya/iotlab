// C++ code
//
const int ledpins[]={9,10,11,12,13};
const int numleds=5;

void setup()
{
  for(int i=0;i<numleds;i++){
  pinMode(ledpins[i], OUTPUT);
}
}

void loop()
{
	  for(int i=0;i<numleds;i++){

  digitalWrite(ledpins[i], HIGH);
  delay(250); 
  digitalWrite(ledpins[i], LOW);
  delay(250);
    }
    
  for(int i=numleds-1;i>=0;i--){

    digitalWrite(ledpins[i], HIGH);
   delay(250);
  digitalWrite(ledpins[i], LOW);
          

  delay(250);
          }
  }

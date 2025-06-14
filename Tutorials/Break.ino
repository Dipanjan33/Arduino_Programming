void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i<=10; i++)
  {
    if(i==5)
    {
      break;// it breaks out of the loop at i = 5
    }
    Serial.println(i);
  }
  Serial.println("End of our for loop ");

}
void loop(){

}
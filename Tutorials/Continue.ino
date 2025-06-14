void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i<=10; i++)
  {
    if(i==5)
    {
      continue;// in case of continue here it omits the rest of the code down in the loop and goes back to increment it directly,when i is 5
    }
    Serial.println(i);
  }
  Serial.println("End of our for loop ");

}
void loop(){

}
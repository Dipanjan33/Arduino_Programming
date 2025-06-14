char mama;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available() > 0)//check if data is available, Serial.available() function checks whether there is any data available,this function returns the no. of bytes currently available in arduino memory(receive buffer is a temporary storage to store incoming data)
  {
    mama = Serial.read();
    while(true){
    Serial.println(mama);
    delay(500);
    }
  }
  

}

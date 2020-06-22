void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

}

void loop() {
 
  // put your main code here, to run repeatedly:
   char txt[128];
  for (int i=1;i<=100;i++){
    sprintf(txt,"%d",i);
    Serial.print(txt);
    if(i%5==0 && i%3==0){
      Serial.print(":FizzBuzz\n");
    }
      else if(i%5==0){
        Serial.print(":Fizz\n");
        }
       else if(i%3==0){
        Serial.print(":Buzz\n");
        }
        else{
        Serial.print("\n");     
        }
         
    //Serial.print(txt);
     }   
exit(0);  
}

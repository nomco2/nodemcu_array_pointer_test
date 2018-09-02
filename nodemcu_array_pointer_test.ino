void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

        char *datas;
        int count = 0;

          *(datas + count++) = '1';
          *(datas + count++) = '2';
          *(datas + count++) = '3';
          

        

count = 0;
Serial.println(sizeof(datas));
          for(int i = 0; i<(int)sizeof(datas); i++){
            Serial.println(datas[i]);
          }
//          Serial.println(datas[count++]);
        

        delay(1000);

}






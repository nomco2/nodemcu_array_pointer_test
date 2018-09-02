void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

        byte *datas = (byte*)malloc(1);
        int count = 0;

          *(datas + count++) = '1';
          *(datas + count++) = '2';
          *(datas + count++) = '3';
          *(datas + count++) = '4';
          *(datas + count++) = '5';


        

//int data_length = sizeof(datas);
          for(int i = 0; i<(int)sizeof(datas)+1; i++){
            Serial.println((char)*(datas + i));
          }
//          Serial.println(*(datas + count));
        

        delay(1000);

}

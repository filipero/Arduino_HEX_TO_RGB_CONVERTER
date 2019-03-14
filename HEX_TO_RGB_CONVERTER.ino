

//RGB TO HEX DECODER
//Variables:
int byteCounter= 0;

int firstDigit  = 0;
int secondDigit = 0;
int thirdDigit  = 0;
int fourthDigit = 0;
int fifthDigit  = 0;
int sixthDigit  = 0;

String hexvaluestr = "HexValue1: ";
String hexvaluestr2 = "HexValue2: ";
String hexvaluestr3 = "HexValue3: ";
String hexvaluestr4 = "HexValue4: ";
String hexvaluestr5 = "HexValue5: ";
String hexvaluestr6 = "HexValue6: ";

String redValueStr = "Red: ";
String greenValueStr = "Green: ";
String blueValueStr = "Blue: ";

String emptySpacestr = " ";
char rx_byte = "";
char hexValue[6] = {'0','0','0','0','0','0'};

int rgbValue[3] = {0,0,0};

void setup() {
  // put your setup code here, to run once:s

  Serial.begin(9600);
  Serial.println("Enter Hexadecimal Value"); 
   

}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0) {    // is a character available?
    rx_byte = Serial.read();
    readByte();
  }
}

void readByte(){
  
  byteCounter = byteCounter+1 ;
  
  if(byteCounter == 1){
    hexValue[0] = rx_byte;
    firstAssigner();
    }
    else if(byteCounter == 2){
      hexValue[1] = rx_byte;
      secondAssigner();
      }
    else if(byteCounter == 3){
      hexValue[2] = rx_byte;  
      thirdAssigner();
      }
    else if(byteCounter == 4){
      hexValue[3] = rx_byte;
      fourthAssigner();
      }
    else if(byteCounter == 5){
      hexValue[4] = rx_byte;
      fifthAssigner();
      }
    else if(byteCounter == 6){
      hexValue[5] = rx_byte;
      sixthAssigner();
      delay(500);
      Serial.print(rgbValue[0] + emptySpacestr);
      delay(100);
      Serial.print(rgbValue[1] + emptySpacestr);
      delay(100);
      Serial.print(rgbValue[2] + emptySpacestr);
      delay(100);
      hexConverter();
      delay(100);
      Serial.print(rgbValue[0] + emptySpacestr);
      delay(100);
      Serial.print(rgbValue[1] + emptySpacestr);
      delay(100);
      Serial.print(rgbValue[2] + emptySpacestr);
      delay(100);
      byteCounter = 0;
      }  

      Serial.print(hexvaluestr+hexValue[0]    + emptySpacestr);
      delay(100);
      Serial.print(hexvaluestr2+hexValue[1]   + emptySpacestr);
      delay(100);
      Serial.print(hexvaluestr3+hexValue[2]   + emptySpacestr);
      delay(100);
      Serial.print(hexvaluestr4+hexValue[3]   + emptySpacestr);
      delay(100);
      Serial.print(hexvaluestr5+hexValue[4]   + emptySpacestr);
      delay(100);
      Serial.println(hexvaluestr6+hexValue[5] + emptySpacestr);
      delay(100);
  }

void hexConverter(){
  rgbValue[0] = ((firstDigit * 16) + secondDigit);
  rgbValue[1] = ((thirdDigit * 16) + fourthDigit);
  rgbValue[2] = ((fifthDigit * 16) + sixthDigit);

}
void firstAssigner(){
    switch(hexValue[0]){
        case '0':
        firstDigit = 0;
        break;
        case '1':
        firstDigit = 1;
        break;
        case '2':
        firstDigit = 2;
        break;
        case '3':
        firstDigit = 3;
        break;
        case '4':
        firstDigit = 4;
        break;
        case '5':
        firstDigit = 5;
        break;
        case '6':
        firstDigit = 6;
        break;
        case '7':
        firstDigit = 7;
        break;
        case '8':
        firstDigit = 8;
        break;
        case '9':
        firstDigit = 9;
        break;
        case 'A':
        firstDigit = 10;
        break;
        case 'B':
        firstDigit = 11;
        break;
        case 'C':
        firstDigit = 12;
        break;
        case 'D':
        firstDigit = 13;
        break;
        case 'E':
        firstDigit = 14;
        break;
        case 'F':
        firstDigit = 15;
        break;
        case 'a':
        firstDigit = 10;
        break;
        case 'b':
        firstDigit = 11;
        break;
        case 'c':
        firstDigit = 12;
        break;
        case 'd':
        firstDigit = 13;
        break;
        case 'e':
        firstDigit = 14;
        break;
        case 'f':
        firstDigit = 15;
        break;
      }
  }
void secondAssigner(){
  switch(hexValue[1]){
        case '0':
        secondDigit = 0;
        break;
        case '1':
        secondDigit = 1;
        break;
        case '2':
        secondDigit = 2;
        break;
        case '3':
        secondDigit = 3;
        break;
        case '4':
        secondDigit = 4;
        break;
        case '5':
        secondDigit = 5;
        break;
        case '6':
        secondDigit = 6;
        break;
        case '7':
        secondDigit = 7;
        break;
        case '8':
        secondDigit = 8;
        break;
        case '9':
        secondDigit = 9;
        break;
        case 'A':
        secondDigit = 10;
        break;
        case 'B':
        secondDigit = 11;
        break;
        case 'C':
        secondDigit = 12;
        break;
        case 'D':
        secondDigit = 13;
        break;
        case 'E':
        secondDigit = 14;
        break;
        case 'F':
        secondDigit = 15;
        break;
        case 'a':
        secondDigit = 10;
        break;
        case 'b':
        secondDigit = 11;
        break;
        case 'c':
        secondDigit = 12;
        break;
        case 'd':
        secondDigit = 13;
        break;
        case 'e':
        secondDigit = 14;
        break;
        case 'f':
        secondDigit = 15;
        break;
  }
  }
void thirdAssigner(){
  switch(hexValue[2]){
        case '0':
        thirdDigit = 0;
        break;
        case '1':
        thirdDigit = 1;
        break;
        case '2':
        thirdDigit = 2;
        break;
        case '3':
        thirdDigit = 3;
        break;
        case '4':
        thirdDigit = 4;
        break;
        case '5':
        thirdDigit = 5;
        break;
        case '6':
        thirdDigit = 6;
        break;
        case '7':
        thirdDigit = 7;
        break;
        case '8':
        thirdDigit = 8;
        break;
        case '9':
        thirdDigit = 9;
        break;
        case 'A':
        thirdDigit = 10;
        break;
        case 'B':
        thirdDigit = 11;
        break;
        case 'C':
        thirdDigit = 12;
        break;
        case 'D':
        thirdDigit = 13;
        break;
        case 'E':
        thirdDigit = 14;
        break;
        case 'F':
        thirdDigit = 15;
        break;
        case 'a':
        thirdDigit = 10;
        break;
        case 'b':
        thirdDigit = 11;
        break;
        case 'c':
        thirdDigit = 12;
        break;
        case 'd':
        thirdDigit = 13;
        break;
        case 'e':
        thirdDigit = 14;
        break;
        case 'f':
        thirdDigit = 15;
        break;
}
  
  }
void fourthAssigner(){
  switch(hexValue[3]){
        case '0':
        fourthDigit = 0;
        break;
        case '1':
        fourthDigit = 1;
        break;
        case '2':
        fourthDigit = 2;
        break;
        case '3':
        fourthDigit = 3;
        break;
        case '4':
        fourthDigit = 4;
        break;
        case '5':
        fourthDigit = 5;
        break;
        case '6':
        fourthDigit = 6;
        break;
        case '7':
        fourthDigit = 7;
        break;
        case '8':
        fourthDigit = 8;
        break;
        case '9':
        fourthDigit = 9;
        break;
        case 'A':
        fourthDigit = 10;
        break;
        case 'B':
        fourthDigit = 11;
        break;
        case 'C':
        fourthDigit = 12;
        break;
        case 'D':
        fourthDigit = 13;
        break;
        case 'E':
        fourthDigit = 14;
        break;
        case 'F':
        fourthDigit = 15;
        break;
        case 'a':
        fourthDigit = 10;
        break;
        case 'b':
        fourthDigit = 11;
        break;
        case 'c':
        fourthDigit = 12;
        break;
        case 'd':
        fourthDigit = 13;
        break;
        case 'e':
        fourthDigit = 14;
        break;
        case 'f':
        fourthDigit = 15;
        break;
}
  
  }
void fifthAssigner(){
  switch(hexValue[4]){
        case '0':
        fifthDigit = 0;
        break;
        case '1':
        fifthDigit = 1;
        break;
        case '2':
        fifthDigit = 2;
        break;
        case '3':
        fifthDigit = 3;
        break;
        case '4':
        fifthDigit = 4;
        break;
        case '5':
        fifthDigit = 5;
        break;
        case '6':
        fifthDigit = 6;
        break;
        case '7':
        fifthDigit = 7;
        break;
        case '8':
        fifthDigit = 8;
        break;
        case '9':
        fifthDigit = 9;
        break;
        case 'A':
        fifthDigit = 10;
        break;
        case 'B':
        fifthDigit = 11;
        break;
        case 'C':
        fifthDigit = 12;
        break;
        case 'D':
        fifthDigit = 13;
        break;
        case 'E':
        fifthDigit = 14;
        break;
        case 'F':
        fifthDigit = 15;
        break;
        case 'a':
        fifthDigit = 10;
        break;
        case 'b':
        fifthDigit = 11;
        break;
        case 'c':
        fifthDigit = 12;
        break;
        case 'd':
        fifthDigit = 13;
        break;
        case 'e':
        fifthDigit = 14;
        break;
        case 'f':
        fifthDigit = 15;
        break;
}
  
  }
void sixthAssigner(){
  switch(hexValue[5]){
        case '0':
        sixthDigit = 0;
        break;
        case '1':
        sixthDigit = 1;
        break;
        case '2':
        sixthDigit = 2;
        break;
        case '3':
        sixthDigit = 3;
        break;
        case '4':
        sixthDigit = 4;
        break;
        case '5':
        sixthDigit = 5;
        break;
        case '6':
        sixthDigit = 6;
        break;
        case '7':
        sixthDigit = 7;
        break;
        case '8':
        sixthDigit = 8;
        break;
        case '9':
        sixthDigit = 9;
        break;
        case 'A':
        sixthDigit = 10;
        break;
        case 'B':
        sixthDigit = 11;
        break;
        case 'C':
        sixthDigit = 12;
        break;
        case 'D':
        sixthDigit = 13;
        break;
        case 'E':
        sixthDigit = 14;
        break;
        case 'F':
        sixthDigit = 15;
        break;
        case 'a':
        sixthDigit = 10;
        break;
        case 'b':
        sixthDigit = 11;
        break;
        case 'c':
        fifthDigit = 12;
        break;
        case 'd':
        fifthDigit = 13;
        break;
        case 'e':
        fifthDigit = 14;
        break;
        case 'f':
        fifthDigit = 15;
        break;
}

  
  }

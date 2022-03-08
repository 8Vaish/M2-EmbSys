#include <LiquidCrystal_I2C.h> 
#include <Password.h> 
// Set the LCD address to 0x3F for a 16 chars and 2 line display // note: it may be 
different for your LCD please find it. 
LiquidCrystal_I2C lcd(0x27,16,2); 
#include <Keypad.h> 
const byte numRows= 4; const byte numCols= 4; char 
keymap[numRows][numCols]= { {'1', '2', '3', 'A'}, 
{'4', '5', '6', 'B'}, 
{'7', '8', '9', 'C'}, 
{'*', '0', '#', 'D'} }; 
byte rowPins[numRows] = {9,8,7,6}; //Rows 0 to 3 
byte colPins[numCols]= {5,4,3,2}; //Columns 0 to 3 
//initializes an instance of the Keypad class 
Keypad myKeypad= Keypad(makeKeymap(keymap), rowPins, colPins, numRows, 
numCols); 
int bulb=12; 
Password passwd = 
Password("190600"); char 
passwd2[6]=""; int led = 13; const int 
pinBuz = 11; //Buzzer Pin 
void setup() { Serial.begin(9600); 
lcd.begin(16,2); pinMode(bulb, 
OUTPUT); pinMode(led, 
OUTPUT); 
pinMode(pinBuz,OUTPUT); 
//Defines pinBuz as an Output // 
put your setup code here, to run 
once: // initialize the LCD 6 
lcd.begin(); lcd.clear(); // Clears 
the display // lcd.setCursor(1,0); 
lcd.print("Enter Password: "); 
} void loop() { 
lcd.setCursor(1,0); 
// put your main code here, to run repeatedly: 
char key = myKeypad.getKey();
if (key != NO_KEY){ digitalWrite(pinBuz,HIGH); //Switch pressed, 
buzzer on delay(300); 
digitalWrite(pinBuz,LOW); 
Serial.print(key); delay(50); 
switch (key){ case 'D': 
changepasswd(); break; case '*': 
checkpasswd(); break; 
case '#':{ passwd.reset(); 
lcd.clear(); // Clears the display 
lcd.setCursor(0,0); 
lcd.print(" Enter Password "); 
break; 
} default: 
passwd.append(key); 
} 
} 
} 
void checkpasswd() { 
//Serial.print(passwd2); 
if (passwd.evaluate()){ 
lcd.clear(); // Clears the display 
Serial.println("OK."); 
lcd.setCursor(0,0); lcd.print(" 
SuccessfuL "); 
digitalWrite(led,HIGH); 
digitalWrite(bulb,HIGH); 
} else { digitalWrite(led,LOW); 
digitalWrite(bulb,LOW); lcd.clear(); 
// Clears the display 
lcd.setCursor(0,0); 
lcd.print(" 
Wrong Password! "); 
Serial.println("Wrong password!"); 
} 
passwd.reset(); 
} 
void changepasswd(){
lcd.clear(); // Clears the display lcd.setCursor(0,0); 
lcd.print("Change Password:"); for(byte i=0;i<5;i++){ char 
key = NO_KEY; while(key == NO_KEY || key=='*' || key=='#' 
|| key=='D') key = myKeypad.getKey(); 
passwd2[i] = key; 
delay(60); } passwd2[5] = '\0'; //ensure correct 
string ending 
passwd.set(passwd2); lcd.clear(); // Clears the display 
lcd.setCursor(0,0); lcd.print(" 
PW Changed To: "); lcd.setCursor(0,1); 
lcd.print(" "); lcd.print(passwd2); lcd.print(" "); 
Serial.print("Password changed to "); 
Serial.println(passwd2); }

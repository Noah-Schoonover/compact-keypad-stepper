/*
  Showing number 0-9 on a Common Anode 7-segment LED display
  Displays the numbers 0-9 on the display, with one second inbetween.
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---
    D
  This example code is in the public domain.
 */

const int DIG1_COM_12 = 10;
const int DIG2_COM_9 = 7;
const int DIG3_COM_8 = 6;
const int DIG4_COM_6 = 4;

const int SEG_A_11 = 9;
const int SEG_B_7 = 5;
const int SEG_C_4 = 2;
const int SEG_D_2 = 12;
const int SEG_E_1 = 11;
const int SEG_F_10 = 8;
const int SEG_G_5 = 3;

const int SEG_DP_3 = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as outputs.
  pinMode(DIG1_COM_12, OUTPUT);     
  pinMode(DIG2_COM_9, OUTPUT);     
  pinMode(DIG3_COM_8, OUTPUT);     
  pinMode(DIG4_COM_6, OUTPUT);  
     
  pinMode(SEG_A_11, OUTPUT);     
  pinMode(SEG_B_7, OUTPUT);     
  pinMode(SEG_C_4, OUTPUT);   
  pinMode(SEG_D_2, OUTPUT);  
  pinMode(SEG_E_1, OUTPUT);  
  pinMode(SEG_F_10, OUTPUT);  
  pinMode(SEG_G_5, OUTPUT);  

  pinMode(SEG_DP_3, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(DIG1_COM_12, LOW);
  digitalWrite(DIG2_COM_9, HIGH);
  digitalWrite(DIG3_COM_8, HIGH);
  digitalWrite(DIG4_COM_6, HIGH); 
  //0
  digitalWrite(SEG_A_11, HIGH);   
  digitalWrite(SEG_B_7, HIGH);   
  digitalWrite(SEG_C_4, HIGH);   
  digitalWrite(SEG_D_2, HIGH);   
  digitalWrite(SEG_E_1, HIGH);   
  digitalWrite(SEG_F_10, HIGH);   
  digitalWrite(SEG_G_5, HIGH);   
  delay(1);               // wait for a second
  
//  digitalWrite(D1, LOW);
//  digitalWrite(D2, HIGH);
//  digitalWrite(D3, LOW);
//  digitalWrite(D4, LOW); 
//  //1
//  digitalWrite(pinA, LOW);   
//  digitalWrite(pinB, LOW);   
//  digitalWrite(pinC, LOW);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, LOW);   
//  delay(1);               // wait for a second
//  
//  digitalWrite(D1, LOW);
//  digitalWrite(D2, LOW);
//  digitalWrite(D3, HIGH);
//  digitalWrite(D4, LOW); 
//  //2
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, LOW);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, LOW);     
//  delay(1);               // wait for a second
//
//  digitalWrite(D1, LOW);
//  digitalWrite(D2, LOW);
//  digitalWrite(D3, LOW);
//  digitalWrite(D4, HIGH); 
//  //3
//  digitalWrite(pinA, LOW);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, LOW);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, HIGH);     
//  delay(1);               // wait for a second

}

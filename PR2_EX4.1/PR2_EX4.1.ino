const  int LED1 = 5 ;           // pin 5   LED1
const  int LED2 = 6 ;           // pin 6   LED2
const  int LED3 = 7 ;           // pin 7   LED3
const  int LED4 = 8 ;           // pin 8   LED4
const  int LED5 = 9 ;           // pin 9   LED5
const  int LED6 = 10 ;          // pin 10  LED6
const  int LED7 = 11 ;          // pin 11  LED7

int T = 1000; //Temps mS

void setup() 
{                
  pinMode(5, OUTPUT);  //Terminal 5  sortida 
  pinMode(6, OUTPUT);  //Terminal 6  sortida 
  pinMode(7, OUTPUT);  //Terminal 7  sortida 
  pinMode(8, OUTPUT);  //Terminal 8  sortida 
  pinMode(9, OUTPUT);  //Terminal 9  sortida 
  pinMode(10, OUTPUT); //Terminal 10 sortida 
  pinMode(11, OUTPUT); //Terminal 11 sortida 
  pinMode(12, OUTPUT); //Terminal 12 sortida 
  
}

void loop() 
{
 
  // NUMERO 1
  
  
  digitalWrite(LED1, LOW);   //LED 1
  digitalWrite(LED2, LOW);   //LED 2
  digitalWrite(LED3, LOW);   //LED 3
  digitalWrite(LED4, HIGH);  //LED 4
  digitalWrite(LED5, LOW);   //LED 5
  digitalWrite(LED6, LOW);   //LED 6
  digitalWrite(LED7, LOW);   //LED 7
  
  delay(T);  // Temps 
 
 
  // NUMERO 2
  
  
  digitalWrite(LED1, LOW);   //LED 1
  digitalWrite(LED2, LOW);   //LED 2 
  digitalWrite(LED3, HIGH);  //LED 3 
  digitalWrite(LED4, LOW);   //LED 4
  digitalWrite(LED5, HIGH);  //LED 5 
  digitalWrite(LED6, LOW);   //LED 6 
  digitalWrite(LED7, LOW);   //LED 7 
  
  delay(T);  // Temps 
 
  // NUMERO 3
  
  
  digitalWrite(LED1, HIGH);  //LED 1
  digitalWrite(LED2, LOW);   //LED 2
  digitalWrite(LED3, LOW);   //LED 3
  digitalWrite(LED4, HIGH);  //LED 4
  digitalWrite(LED5, LOW);   //LED 5
  digitalWrite(LED6, LOW);   //LED 6
  digitalWrite(LED7, HIGH);  //LED 7
  
  delay(T);  // Temps 
 
   // NUMERO 4
  
  
  digitalWrite(LED1, HIGH);   //LED 1
  digitalWrite(LED2, LOW);    //LED 2
  digitalWrite(LED3, HIGH);   //LED 3
  digitalWrite(LED4, LOW);    //LED 4
  digitalWrite(LED5, HIGH);   //LED 5
  digitalWrite(LED6, LOW);    //LED 6
  digitalWrite(LED7, HIGH);   //LED 7
  
  delay(T);  // Temps 
 
  // NUMERO 5
  
  
  digitalWrite(LED1, HIGH);   //LED 1
  digitalWrite(LED2, LOW);    //LED 2
  digitalWrite(LED3, HIGH);   //LED 3
  digitalWrite(LED4, HIGH);   //LED 4
  digitalWrite(LED5, HIGH);   //LED 5
  digitalWrite(LED6, LOW);    //LED 6
  digitalWrite(LED7, HIGH);   //LED 7
  
  delay(T);  // Temps 
  
   
    // NUMERO 6
  
  
  digitalWrite(LED1, HIGH);    //LED 1
  digitalWrite(LED2, HIGH);    //LED 2
  digitalWrite(LED3, HIGH);    //LED 3
  digitalWrite(LED4, LOW);     //LED 4
  digitalWrite(LED5, HIGH);    //LED 5
  digitalWrite(LED6, HIGH);    //LED 6
  digitalWrite(LED7, HIGH);    //LED 7
  
  delay(T);  // Temps
 
//QUIM MORENO
  

const  int A = 5 ;           // pin 5 A
const  int B = 6 ;           // pin 6 B
const  int C = 7 ;           // pin 7 C
const  int D = 8 ;           // pin 8 D
const  int E = 9 ;           // pin 9 E
const  int F = 10 ;          // pin 10 F
const  int G = 11 ;          // pin 11 G

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
 
  // LLETRA Q
  
  
  digitalWrite(A, HIGH);  //SEGMENT A ON
  digitalWrite(B, HIGH);  //SEGMENT B ON
  digitalWrite(C, HIGH);  //SEGMENT C ON 
  digitalWrite(D, LOW);  //SEGMENT D ON
  digitalWrite(E, LOW);  //SEGMENT E ON
  digitalWrite(F, HIGH);  //SEGMENT F ON
  digitalWrite(G, HIGH);  //SEGMENT G OFF
  
  delay(T);  // Temps 
  
   // LLETRA U
  
  
  digitalWrite(A, LOW);  //SEGMENT A ON
  digitalWrite(B, HIGH);  //SEGMENT B ON
  digitalWrite(C, HIGH);  //SEGMENT C ON 
  digitalWrite(D, HIGH);  //SEGMENT D ON
  digitalWrite(E, HIGH);  //SEGMENT E ON
  digitalWrite(F, HIGH);  //SEGMENT F ON
  digitalWrite(G, LOW);  //SEGMENT G OFF
  
  delay(T);  // Temps 
  
     // LLETRA I
  
  
  digitalWrite(A, LOW);  //SEGMENT A ON
  digitalWrite(B, LOW);  //SEGMENT B ON
  digitalWrite(C, LOW);  //SEGMENT C ON 
  digitalWrite(D, LOW);  //SEGMENT D ON
  digitalWrite(E, HIGH);  //SEGMENT E ON
  digitalWrite(F, HIGH);  //SEGMENT F ON
  digitalWrite(G, LOW);  //SEGMENT G OFF
  
  delay(T);  // Temps 
  
  
   // LLETRA I
  
  
  digitalWrite(A, HIGH);  //SEGMENT A ON
  digitalWrite(B, LOW);  //SEGMENT B ON
  digitalWrite(C, HIGH);  //SEGMENT C ON 
  digitalWrite(D, LOW);  //SEGMENT D ON
  digitalWrite(E, HIGH);  //SEGMENT E ON
  digitalWrite(F, LOW);  //SEGMENT F ON
  digitalWrite(G, LOW);  //SEGMENT G OFF
  
  delay(T);  // Temps 
    
}

//QUIM MORENO
  
  
  
  
  
  


const  int AVERMELL = 5 ;           
const  int ATARONJA = 6 ;           
const  int AVERD = 7 ;           
const  int BVERMELL = 8 ;           
const  int BTARONJA = 9 ;           
const  int BVERD = 10 ;  

int T = 1000; //Temps mS

void setup() 
{                
  pinMode(5, OUTPUT);  //Terminal 5   sortida 
  pinMode(6, OUTPUT);  //Terminal 6   sortida 
  pinMode(7, OUTPUT);  //Terminal 7   sortida 
  pinMode(8, OUTPUT);  //Terminal 8   sortida 
  pinMode(9, OUTPUT);  //Terminal 9   sortida 
  pinMode(10, OUTPUT); //Terminal 10  sortida 
  pinMode(11, OUTPUT); //Terminal 11  sortida 
  pinMode(12, OUTPUT); //Terminal 12  sortida 
  
}

void loop() 
{
 
  digitalWrite(AVERMELL, HIGH);  //AVERMELL ON
  digitalWrite(BVERMELL, HIGH);  //BVERMELL ON
  digitalWrite(ATARONJA, LOW);  //ATARONJA OFF

  delay(2 * T);  // Temps 
  
  
  
  digitalWrite(BVERD, HIGH);     //BVERD  ON
  digitalWrite(BVERMELL, LOW);   //BVERMELL OFF

  delay(4 * T);  // Temps 
 
 
  digitalWrite(BVERD, LOW);       //BVERD OFF
  digitalWrite(BTARONJA, HIGH);   //BTARONJA ON

  delay(1 * T);  // Temps 
 
  digitalWrite(BVERMELL, HIGH);  //BVERMELL ON
  digitalWrite(BTARONJA, LOW);   //BTARONJA OFF

  delay(1 * T);  // Temps 
  
  digitalWrite(AVERMELL, LOW);  //AVERMELL OFF
  digitalWrite(AVERD, HIGH);    //AVERD ON

  delay(4 * T);  // Temps

  digitalWrite(AVERD, LOW);      //AVERD OFF
  digitalWrite(ATARONJA, HIGH);  //ATARONJA HIGH  
  delay(1 * T);  // Temps
}


//Quim Moreno



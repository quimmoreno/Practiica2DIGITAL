
void setup() 
{                
  pinMode(5, OUTPUT);  //Terminal 5 definit com a sortida 
  pinMode(6, OUTPUT);  //Terminal 6 definit com a sortida 
  pinMode(7, OUTPUT);  //Terminal 7 definit com a sortida 
  pinMode(8, OUTPUT);  //Terminal 8 definit com a sortida 
  pinMode(9, OUTPUT);  //Terminal 9 definit com a sortida 
  pinMode(10, OUTPUT); //Terminal 10 definit com a sortida 
  pinMode(11, OUTPUT); //Terminal 11 definit com a sortida 
  pinMode(12, OUTPUT); //Terminal 12 definit com a sortida 
  
}

void loop() 
{
  digitalWrite(5, HIGH);  //Sortida  digital ON
  digitalWrite(6, HIGH);  //Sortida  digital ON
  digitalWrite(7, HIGH);  //Sortida  digital ON
  digitalWrite(8, HIGH);  //Sortida  digital ON
  digitalWrite(9, HIGH);  //Sortida  digital ON
  digitalWrite(10, HIGH); //Sortida  digital ON
  digitalWrite(11, HIGH); //Sortida  digital ON
  digitalWrite(12, HIGH); //Sortida  digital ON
  
delay(1500); // Temps (ms)
  
  digitalWrite(5, LOW);  //Sortida  digital OFF
  digitalWrite(6, LOW);  //Sortida  digital OFF
  digitalWrite(7, LOW);  //Sortida  digital OFF
  digitalWrite(8, LOW);  //Sortida  digital OFF
  digitalWrite(9, LOW);  //Sortida  digital OFF
  digitalWrite(10, LOW); //Sortida  digital OFF
  digitalWrite(11, LOW); //Sortida  digital OFF
  digitalWrite(12, LOW); //Sortida  digital OFF
  
delay(1500);  // Temps (ms)
}
//Quim Moreno

/*
      A
     F  B
      G
     E  C
      D  DP
*/
const int TestB = 11;
const int SevenB = 10;
const int SevenPA = 2;
const int SevenPB = 3;
const int SevenPC = 4;
const int SevenPD = 5;
const int SevenPE = 6;
const int SevenPF = 7;
const int SevenPG = 8;
const int SevenPDP = 9;
int SevenI = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(TestB, INPUT);
  pinMode(SevenB, INPUT);
  pinMode(SevenPA, OUTPUT);
  pinMode(SevenPB, OUTPUT);
  pinMode(SevenPC, OUTPUT);
  pinMode(SevenPD, OUTPUT);
  pinMode(SevenPE, OUTPUT);
  pinMode(SevenPF, OUTPUT);
  pinMode(SevenPG, OUTPUT);
  pinMode(SevenPDP, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SevenB) == HIGH) {
    SevenI++;
  }
  if (SevenI >= 10 || SevenI == 10) {
    SevenI = 0;
  }
  if (SevenI == 0) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, HIGH);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, LOW);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 1) {
    digitalWrite(SevenPA, LOW);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, LOW);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, LOW);
    digitalWrite(SevenPG, LOW);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 2) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, LOW);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, HIGH);
    digitalWrite(SevenPF, LOW);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 3) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, LOW);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 4) {
    digitalWrite(SevenPA, LOW);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, LOW);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 5) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, LOW);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 6) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, LOW);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, HIGH);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, HIGH);
  }
  else if (SevenI == 7) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, LOW);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, LOW);
    digitalWrite(SevenPG, LOW);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 8) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, HIGH);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, LOW);
  }
  else if (SevenI == 9) {
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, HIGH);
  }
  if (digitalRead(TestB) == HIGH) {
    Serial.println("Test Started");
    Serial.println("3");
    delay(1000);
    Serial.println("2");
    delay(1000);
    Serial.println("1");
    delay(1000);
    digitalWrite(SevenPA, HIGH);
    digitalWrite(SevenPB, HIGH);
    digitalWrite(SevenPC, HIGH);
    digitalWrite(SevenPD, HIGH);
    digitalWrite(SevenPE, HIGH);
    digitalWrite(SevenPF, HIGH);
    digitalWrite(SevenPG, HIGH);
    digitalWrite(SevenPDP, HIGH);
    delay(2000);
    digitalWrite(SevenPA, LOW);
    digitalWrite(SevenPB, LOW);
    digitalWrite(SevenPC, LOW);
    digitalWrite(SevenPD, LOW);
    digitalWrite(SevenPE, LOW);
    digitalWrite(SevenPF, LOW);
    digitalWrite(SevenPG, LOW);
    digitalWrite(SevenPDP, LOW);
    Serial.println("Test Finished");
  }
  delay(500);
}

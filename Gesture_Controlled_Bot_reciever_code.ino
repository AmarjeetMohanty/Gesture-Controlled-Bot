char val;

const int in1 = 3;
const int in2 = 4;
const int in3 = 7;
const int in4 = 8;


void setup() {
  Serial.begin(9600);//setting up Serial monitor
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  
  //Setting up the direction pins on the motor driver as output pins
}

void loop() {
  if(Serial.available())
  { 
  val=Serial.read();
  //once the input is received, we gotta read it into a variable 
  
  if(val=='F'){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    Serial.println("for");
  }//to move the bot forward

  else if(val=='B'){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    Serial.println("back");
  }//to move the bot backwards

  else if(val=='L'){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    Serial.println("jump");
  }//to turn bot left

  else if(val=='R'){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    Serial.println("roll");
  }//to turn bot right

  else if(val=='S'){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }//to stop the bot

  Serial.println(val);

  }
  }

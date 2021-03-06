int oneRight = 2; // choose the input pin (for PIR sensor)
int ORled = 13; // choose the pin for the LED

int oneLeft = 3;
int OLled = 12; 

int twoRight = 4;
int TRled = 9;

int twoLeft = 5;
int TLled = 8; 

int pirState = LOW; // assuming no motion detected
int val = 0; // variable for reading the pin status


void setup() {
  Serial.begin(9600);     // initialize serial communication

    // #1 Right
  val = digitalRead(oneRight); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(ORled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("1"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ORled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("1R Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }


  // #1 Left
  val = digitalRead(oneLeft); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(OLled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("2"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(OLled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("1L Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }

  
  // #2 Right
  val = digitalRead(twoRight); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(TRled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("3"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(TRled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("2R Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }


  // #2 Left
  val = digitalRead(twoLeft); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(TLled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("4"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(TLled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("2L Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
  
}

void loop() {
  // read the inputs

  int leftPaddleUp = digitalRead(oneRight);
  int leftPaddleDown = digitalRead(oneLeft);
  int rightPaddleUp = digitalRead(twoRight);
  int rightPaddleDown = digitalRead(twoLeft);

  Serial.print(leftPaddleUp);                
  Serial.print(",");                   // add a comma
  Serial.print(leftPaddleDown);
  Serial.print(",");
  Serial.print(rightPaddleUp);
  Serial.print(",");
  Serial.println(rightPaddleDown);
  delay(10);                           // delay before sending the next set

    // #1 Right
  val = digitalRead(oneRight); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(ORled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("1"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(ORled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("1R Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }


  // #1 Left
  val = digitalRead(oneLeft); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(OLled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("2"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(OLled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("1L Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }

  
  // #2 Right
  val = digitalRead(twoRight); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(TRled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("3"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(TRled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("2R Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }


  // #2 Left
  val = digitalRead(twoLeft); // read input value
  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(TLled, HIGH); // turn LED ON
    if (pirState == LOW) { // we have just turned on
      Serial.write(HIGH);
      Serial.println("4"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    digitalWrite(TLled, LOW); // turn LED OFF
    if (pirState == HIGH) { // we have just turned off
      Serial.write(LOW);
//      Serial.println("2L Off"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}

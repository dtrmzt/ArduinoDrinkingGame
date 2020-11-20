const int button = 2;

int lastButtonState;
int currentButtonState;

int choice;

void printChoice(int choice)
{
  if(choice == 1) {
    Serial.write("CUGAJ");
  } else {
      Serial.write("DIJELI");
      }
}

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);

  currentButtonState = digitalRead(button);
}

void loop() {
  lastButtonState = currentButtonState;
  currentButtonState = digitalRead(button);

  if(lastButtonState == HIGH && currentButtonState == LOW) {

    choice = random(2);

    printChoice(choice);
       
  }
}

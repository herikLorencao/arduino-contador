void setup()
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
}


void clearScreen() {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
}

void printOne() {
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
}

void printTwo() {
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
}

void printThree() {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
}

void printFour() {
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
}

void printFive() {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
}

void printSix() {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
}

void printSeven() {
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
}

void printEight() {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
}

void printNine() {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
}

void printZero() {
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
}

void onGreenLed(bool active) {
    if (active) {
        digitalWrite(2, HIGH);
        return;
    }
    digitalWrite(2, LOW);
}

void onYellowLed(bool active) {
    if (active) {
        digitalWrite(3, HIGH);
        return;
    }
    digitalWrite(3, LOW);
}

void onRedLed(bool active) {
    if (active) {
        digitalWrite(4, HIGH);
        return;
    }
    digitalWrite(4, LOW);
}

void defineNumber(int number) {
    if (number == 1) printOne();
    if (number == 2) printTwo();
    if (number == 3) printThree();
    if (number == 4) printFour();
    if (number == 5) printFive();
    if (number == 6) printSix();
    if (number == 7) printSeven();
    if (number == 8) printEight();
    if (number == 9) printNine();
    if (number == 0) printZero();
}

void selectedLed(int ledCount) {
    if (ledCount == 9) {
        onRedLed(false);
        onGreenLed(true);
    }

    if (ledCount == 6) {
        onGreenLed(false);
        onYellowLed(true);
    }
        
    if (ledCount == 3) {
        onYellowLed(false);
        onRedLed(true);
    }
}

void countNumbers(int lastCountNumber) {
    int i = 0;

    for (i = lastCountNumber; i >= 0; i--)
    {
        selectedLed(i);
        defineNumber(i);
        delay(1000);
    }
}

void loop()
{
    int lastCountNumber = 9;
    countNumbers(lastCountNumber);
}
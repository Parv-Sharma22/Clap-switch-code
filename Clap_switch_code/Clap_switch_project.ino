 const int Sensor = 2;

const int relay = 3;


int x = 0;

int y = 0;


void setup() {


pinMode(relay, OUTPUT);


pinMode(Sensor, INPUT);

}


void loop(){


x = digitalRead(Sensor);

y = digitalRead(relay);


if (y == HIGH && x == LOW) {

delay(250);

digitalWrite(relay, LOW);

}

if (y == LOW && x == LOW) {

delay(250);

digitalWrite(relay, HIGH);

}

}

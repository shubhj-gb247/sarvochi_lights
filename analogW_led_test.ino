//testing with mosfet and 5v blue led

//#define WARM_PIN 0  // Warm white control
#define COOL_PIN 1 // Cool white control

void setup() {
    //pinMode(WARM_PIN, OUTPUT);
    pinMode(COOL_PIN, OUTPUT);
    Serial.begin(115200);
}

void loop() {
    //analogWrite(WARM_PIN, 255);  // Full warm white
    // analogWrite(COOL_PIN, 0);    // Cool off
    // delay(1000);

    // //analogWrite(WARM_PIN, 128);  // 50% warm white
    // analogWrite(COOL_PIN, 128);  // 50% cool white
    // delay(1000);

    // //analogWrite(WARM_PIN, 0);    // Warm off
    // analogWrite(COOL_PIN, 255);  // Full cool white
    // delay(1000);
    Serial.println("UPP");
    for(int i =0; i<=255; i++){
      analogWrite(COOL_PIN,i);
      delay(10);
    }
    delay(300);
    Serial.println("Downnn");
    for(int i =255; i>=0; i--){
      analogWrite(COOL_PIN,i);
      delay(10);
    }
    delay(300);
}

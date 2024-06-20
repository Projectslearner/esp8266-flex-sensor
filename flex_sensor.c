/*
    Project name : ESP8266 Flex Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-flex-sensor
*/

#define FLEX_SENSOR_PIN A0

void setup() {
    Serial.begin(115200);
    pinMode(FLEX_SENSOR_PIN, INPUT);
}

void loop() {
    int sensorValue = analogRead(FLEX_SENSOR_PIN);

    // Print the raw sensor value
    Serial.print("Sensor Value: ");
    Serial.println(sensorValue);

    // Map the sensor value to a meaningful range (adjust according to your sensor)
    int angle = map(sensorValue, 0, 1023, 0, 90); // Example: mapping 0-1023 to 0-90 degrees

    // Print the mapped angle
    Serial.print("Angle: ");
    Serial.print(angle);
    Serial.println(" degrees");

    delay(500);
}

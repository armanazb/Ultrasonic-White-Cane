const int minimumDistance = 150;
const int maximumDistance = 280;
const int buzzerPin = 9;

int clearance = 0;

// If there is an object within 150 cm from the sensor, alert the user with a frequent buzzer noise
if (clearance <= minimumDistance)
{
    digitalWrite(buzzerPin, HIGH);
    delay(50);
    digitalWrite(buzzerPin, LOW);
    delay(50);
}
// If there is an object within 151 cm to 280 cm from the sensor, alert the user with a less frequent buzzer
else if (clearance <= maximumDistance)
{
    digitalWrite(buzzerPin, HIGH);
    delay(400);
    digitalWrite(buzzerPin, LOW);
}
// If nothing is within 280 cm distance, buzzer is off
else
{
    digitalWrite(buzzerPin, LOW);
}

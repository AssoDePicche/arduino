const unsigned int OUTPUT_LED = LED_BUILTIN;

const unsigned int BLINK_DELAY = 1000;

void setup()
{
  pinMode(OUTPUT_LED, OUTPUT);
}

void loop()
{
  digitalWrite(OUTPUT_LED, HIGH);

  delay(BLINK_DELAY);

  digitalWrite(OUTPUT_LED, LOW);

  delay(BLINK_DELAY);
}

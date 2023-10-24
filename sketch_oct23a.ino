/*el código lo encontre en github, en un repositorio llamado ArduinoCore-avr en la 
parte de wiring.c en las líneas de código desde la 106 a la 117*/


void delay(unsigned long ms)
{
	uint32_t start = micros();

	while (ms > 0) {
		yield();
		while ( ms > 0 && (micros() - start) >= 1000) {
			ms--;
			start += 1000;
		}
	}
}
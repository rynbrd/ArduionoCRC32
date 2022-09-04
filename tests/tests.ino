#include <AUnit.h>
#include <Arduino.h>
#include <CRC32.h>

using namespace aunit;

namespace CRC32 {

test(CRC32Test, Calculate) {
    uint8_t data[] = {
        0x66, 0x33, 0x22, 0x11, 0x20, 0x00, 0x00, 0x00,
        0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    };

    uint32_t expect = 0x13916E7E;
    uint32_t actual = calculate(data, 16);
    assertEqual(actual, expect);
}

}

// Test boilerplate.
void setup() {
#ifdef ARDUINO
    delay(1000);
#endif
    SERIAL_PORT_MONITOR.begin(115200);
    while(!SERIAL_PORT_MONITOR);
}

void loop() {
    TestRunner::run();
    delay(1);
}

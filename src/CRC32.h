#ifndef _CRC32_H_
#define _CRC32_H_

#include <Arduino.h>

namespace CRC32 {

// Checksum calculates a CRC32 checksum incrementally.
class Checksum {
    public:
        Checksum();

        // Update the checksum with a byte.
        void update(uint8_t b);

        // Update the checksum with the bytes in a buffer.
        void update(uint8_t* data, size_t len);

        // Return the current checksum value.
        uint32_t value() const;

        // Reset the checksum.
        void reset();

    private:
        uint32_t value_;
};

// Calculate a checksum from the provide buffer.
uint32_t calculate(uint8_t* data, size_t len);

}  // namespace CRC32

#endif  // _CRC32_H_

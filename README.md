# Arduino CRC32 Library

This is an Arduino library to calculate CRC32 checksums of bytes.

Basic example:
```
uint8_t data[] = {/* my data */};
uint32_t crc32 = CRC32::calculate(data, sizeof(data));
```

You can also use the Checksum class to calculate the checksum incrementally:
```
CRC32::Checksum cs;
cs.update(0x12);
cs.update(0x34);
cs.update(0x56);
uint32_t crc32 = cs.value();
```

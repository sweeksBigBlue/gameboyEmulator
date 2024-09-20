#ifndef CPU_H__
#define CPU_H__

#include<cstdint>

typedef struct Register {
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t f;
    uint8_t h;
    uint8_t l;
} Register;

typedef struct FlagRegister {
    bool zero;
    bool subtract;
    bool halfCarry;
    bool carry;
} FlagRegister;

class CPU {
public:
    uint16_t getAF(void);
    uint16_t getBC(void);
    uint16_t getDE(void);
    uint16_t getHL(void);

    void setAF(uint16_t val);
    void setBC(uint16_t val);
    void setDE(uint16_t val);
    void setHL(uint16_t val);

private:
    Register cpuRegs;
    FlagRegister cpuFlags;

};

#endif // CPU_H__
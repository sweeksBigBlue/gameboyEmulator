/*
This includes the CPU for the gameboy. this is based off of the LR35902
architecture. This chipset is 8-bit ISA.
*/
#include "cpu.hpp"

// Register 16-bit function getters
uint16_t CPU::getAF(void) { return ((cpuRegs.a << 8) | cpuRegs.f); }

uint16_t CPU::getBC(void) { return ((cpuRegs.b << 8) | cpuRegs.c); }

uint16_t CPU::getDE(void) { return ((cpuRegs.d << 8) | cpuRegs.e); }

uint16_t CPU::getHL(void) { return ((cpuRegs.h << 8) | cpuRegs.l); }

// Register 16-bit function setters
void CPU::setAF(uint16_t val) {
  cpuRegs.a = (val & 0xFF00) >> 8;
  cpuRegs.f = (val & 0xFF);
}

void CPU::setBC(uint16_t val) {
  cpuRegs.b = (val & 0xFF00) >> 8;
  cpuRegs.c = (val & 0xFF);
}

void CPU::setDE(uint16_t val) {
  cpuRegs.d = (val & 0xFF00) >> 8;
  cpuRegs.e = (val & 0xFF);
}

void CPU::setHL(uint16_t val) {
  cpuRegs.h = (val & 0xFF00) >> 8;
  cpuRegs.l = (val & 0xFF);
}

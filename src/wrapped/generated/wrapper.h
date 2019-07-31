/*****************************************************************
 * File automatically generated by rebuild_wrappers.py (v1.1.1.04)
 *****************************************************************/
#ifndef __WRAPPER_H_
#define __WRAPPER_H_
#include <stdint.h>

typedef struct x86emu_s x86emu_t;

// the generic wrapper pointer functions
typedef void (*wrapper_t)(x86emu_t* emu, uintptr_t fnc);

// list of defined wrapper
// v = void, i = int32, u = uint32, U/I= (u)int64
// p = pointer, P = callback
// f = float, d = double, D = long double, L = fake long double
// V = vaargs, E = current x86emu struct, e = ref to current x86emu struct
// 0 = constant 0, 1 = constant 1
// o = stdout
// C = unsigned byte c = char
// W = unsigned short w = short
// Q = ...
// S8 = struct, 8 bytes

void iF(x86emu_t *emu, uintptr_t fnc);
void vFE(x86emu_t *emu, uintptr_t fnc);
void vFv(x86emu_t *emu, uintptr_t fnc);
void vFi(x86emu_t *emu, uintptr_t fnc);
void vFu(x86emu_t *emu, uintptr_t fnc);
void vFf(x86emu_t *emu, uintptr_t fnc);
void vFd(x86emu_t *emu, uintptr_t fnc);
void vFp(x86emu_t *emu, uintptr_t fnc);
void cFv(x86emu_t *emu, uintptr_t fnc);
void cFi(x86emu_t *emu, uintptr_t fnc);
void cFu(x86emu_t *emu, uintptr_t fnc);
void cFf(x86emu_t *emu, uintptr_t fnc);
void cFp(x86emu_t *emu, uintptr_t fnc);
void wFp(x86emu_t *emu, uintptr_t fnc);
void iFE(x86emu_t *emu, uintptr_t fnc);
void iFv(x86emu_t *emu, uintptr_t fnc);
void iFi(x86emu_t *emu, uintptr_t fnc);
void iFI(x86emu_t *emu, uintptr_t fnc);
void iFu(x86emu_t *emu, uintptr_t fnc);
void iFf(x86emu_t *emu, uintptr_t fnc);
void iFd(x86emu_t *emu, uintptr_t fnc);
void iFp(x86emu_t *emu, uintptr_t fnc);
void IFp(x86emu_t *emu, uintptr_t fnc);
void uFE(x86emu_t *emu, uintptr_t fnc);
void uFv(x86emu_t *emu, uintptr_t fnc);
void uFi(x86emu_t *emu, uintptr_t fnc);
void uFu(x86emu_t *emu, uintptr_t fnc);
void uFp(x86emu_t *emu, uintptr_t fnc);
void UFv(x86emu_t *emu, uintptr_t fnc);
void UFp(x86emu_t *emu, uintptr_t fnc);
void fFi(x86emu_t *emu, uintptr_t fnc);
void fFf(x86emu_t *emu, uintptr_t fnc);
void dFv(x86emu_t *emu, uintptr_t fnc);
void dFi(x86emu_t *emu, uintptr_t fnc);
void dFd(x86emu_t *emu, uintptr_t fnc);
void dFp(x86emu_t *emu, uintptr_t fnc);
void pFE(x86emu_t *emu, uintptr_t fnc);
void pFv(x86emu_t *emu, uintptr_t fnc);
void pFi(x86emu_t *emu, uintptr_t fnc);
void pFu(x86emu_t *emu, uintptr_t fnc);
void pFp(x86emu_t *emu, uintptr_t fnc);
void vFEp(x86emu_t *emu, uintptr_t fnc);
void vFii(x86emu_t *emu, uintptr_t fnc);
void vFiu(x86emu_t *emu, uintptr_t fnc);
void vFif(x86emu_t *emu, uintptr_t fnc);
void vFid(x86emu_t *emu, uintptr_t fnc);
void vFip(x86emu_t *emu, uintptr_t fnc);
void vFiV(x86emu_t *emu, uintptr_t fnc);
void vFWW(x86emu_t *emu, uintptr_t fnc);
void vFWp(x86emu_t *emu, uintptr_t fnc);
void vFui(x86emu_t *emu, uintptr_t fnc);
void vFuu(x86emu_t *emu, uintptr_t fnc);
void vFuf(x86emu_t *emu, uintptr_t fnc);
void vFud(x86emu_t *emu, uintptr_t fnc);
void vFup(x86emu_t *emu, uintptr_t fnc);
void vFfi(x86emu_t *emu, uintptr_t fnc);
void vFff(x86emu_t *emu, uintptr_t fnc);
void vFdd(x86emu_t *emu, uintptr_t fnc);
void vFpi(x86emu_t *emu, uintptr_t fnc);
void vFpu(x86emu_t *emu, uintptr_t fnc);
void vFpf(x86emu_t *emu, uintptr_t fnc);
void vFpp(x86emu_t *emu, uintptr_t fnc);
void cFpp(x86emu_t *emu, uintptr_t fnc);
void iFEp(x86emu_t *emu, uintptr_t fnc);
void iFii(x86emu_t *emu, uintptr_t fnc);
void iFiu(x86emu_t *emu, uintptr_t fnc);
void iFiU(x86emu_t *emu, uintptr_t fnc);
void iFip(x86emu_t *emu, uintptr_t fnc);
void iFui(x86emu_t *emu, uintptr_t fnc);
void iFuu(x86emu_t *emu, uintptr_t fnc);
void iFup(x86emu_t *emu, uintptr_t fnc);
void iFpw(x86emu_t *emu, uintptr_t fnc);
void iFpi(x86emu_t *emu, uintptr_t fnc);
void iFpI(x86emu_t *emu, uintptr_t fnc);
void iFpC(x86emu_t *emu, uintptr_t fnc);
void iFpu(x86emu_t *emu, uintptr_t fnc);
void iFpU(x86emu_t *emu, uintptr_t fnc);
void iFpd(x86emu_t *emu, uintptr_t fnc);
void iFpp(x86emu_t *emu, uintptr_t fnc);
void IFpu(x86emu_t *emu, uintptr_t fnc);
void CFui(x86emu_t *emu, uintptr_t fnc);
void CFpi(x86emu_t *emu, uintptr_t fnc);
void CFpu(x86emu_t *emu, uintptr_t fnc);
void uFEp(x86emu_t *emu, uintptr_t fnc);
void uFiu(x86emu_t *emu, uintptr_t fnc);
void uFip(x86emu_t *emu, uintptr_t fnc);
void uFui(x86emu_t *emu, uintptr_t fnc);
void uFuu(x86emu_t *emu, uintptr_t fnc);
void uFup(x86emu_t *emu, uintptr_t fnc);
void uFpi(x86emu_t *emu, uintptr_t fnc);
void uFpu(x86emu_t *emu, uintptr_t fnc);
void uFpp(x86emu_t *emu, uintptr_t fnc);
void UFEp(x86emu_t *emu, uintptr_t fnc);
void UFuu(x86emu_t *emu, uintptr_t fnc);
void UFUU(x86emu_t *emu, uintptr_t fnc);
void fFfi(x86emu_t *emu, uintptr_t fnc);
void fFff(x86emu_t *emu, uintptr_t fnc);
void fFfp(x86emu_t *emu, uintptr_t fnc);
void fFpp(x86emu_t *emu, uintptr_t fnc);
void dFuu(x86emu_t *emu, uintptr_t fnc);
void dFdi(x86emu_t *emu, uintptr_t fnc);
void dFdd(x86emu_t *emu, uintptr_t fnc);
void dFdp(x86emu_t *emu, uintptr_t fnc);
void dFpp(x86emu_t *emu, uintptr_t fnc);
void DFpp(x86emu_t *emu, uintptr_t fnc);
void pFEp(x86emu_t *emu, uintptr_t fnc);
void pFii(x86emu_t *emu, uintptr_t fnc);
void pFip(x86emu_t *emu, uintptr_t fnc);
void pFui(x86emu_t *emu, uintptr_t fnc);
void pFuu(x86emu_t *emu, uintptr_t fnc);
void pFup(x86emu_t *emu, uintptr_t fnc);
void pFpi(x86emu_t *emu, uintptr_t fnc);
void pFpu(x86emu_t *emu, uintptr_t fnc);
void pFpp(x86emu_t *emu, uintptr_t fnc);
void vFEpi(x86emu_t *emu, uintptr_t fnc);
void vFEpu(x86emu_t *emu, uintptr_t fnc);
void vFEpp(x86emu_t *emu, uintptr_t fnc);
void vFEpV(x86emu_t *emu, uintptr_t fnc);
void vFiii(x86emu_t *emu, uintptr_t fnc);
void vFiip(x86emu_t *emu, uintptr_t fnc);
void vFiui(x86emu_t *emu, uintptr_t fnc);
void vFiuu(x86emu_t *emu, uintptr_t fnc);
void vFiup(x86emu_t *emu, uintptr_t fnc);
void vFiff(x86emu_t *emu, uintptr_t fnc);
void vFidd(x86emu_t *emu, uintptr_t fnc);
void vFipi(x86emu_t *emu, uintptr_t fnc);
void vFipu(x86emu_t *emu, uintptr_t fnc);
void vFipp(x86emu_t *emu, uintptr_t fnc);
void vFipV(x86emu_t *emu, uintptr_t fnc);
void vFuii(x86emu_t *emu, uintptr_t fnc);
void vFuiI(x86emu_t *emu, uintptr_t fnc);
void vFuiu(x86emu_t *emu, uintptr_t fnc);
void vFuif(x86emu_t *emu, uintptr_t fnc);
void vFuid(x86emu_t *emu, uintptr_t fnc);
void vFuip(x86emu_t *emu, uintptr_t fnc);
void vFuui(x86emu_t *emu, uintptr_t fnc);
void vFuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuf(x86emu_t *emu, uintptr_t fnc);
void vFuud(x86emu_t *emu, uintptr_t fnc);
void vFuup(x86emu_t *emu, uintptr_t fnc);
void vFuff(x86emu_t *emu, uintptr_t fnc);
void vFudd(x86emu_t *emu, uintptr_t fnc);
void vFupi(x86emu_t *emu, uintptr_t fnc);
void vFupu(x86emu_t *emu, uintptr_t fnc);
void vFupp(x86emu_t *emu, uintptr_t fnc);
void vFfff(x86emu_t *emu, uintptr_t fnc);
void vFfpp(x86emu_t *emu, uintptr_t fnc);
void vFddd(x86emu_t *emu, uintptr_t fnc);
void vFdpp(x86emu_t *emu, uintptr_t fnc);
void vFpii(x86emu_t *emu, uintptr_t fnc);
void vFpiu(x86emu_t *emu, uintptr_t fnc);
void vFpif(x86emu_t *emu, uintptr_t fnc);
void vFpid(x86emu_t *emu, uintptr_t fnc);
void vFpip(x86emu_t *emu, uintptr_t fnc);
void vFpui(x86emu_t *emu, uintptr_t fnc);
void vFpuI(x86emu_t *emu, uintptr_t fnc);
void vFpuu(x86emu_t *emu, uintptr_t fnc);
void vFpup(x86emu_t *emu, uintptr_t fnc);
void vFppi(x86emu_t *emu, uintptr_t fnc);
void vFppu(x86emu_t *emu, uintptr_t fnc);
void vFppp(x86emu_t *emu, uintptr_t fnc);
void iFEup(x86emu_t *emu, uintptr_t fnc);
void iFEpi(x86emu_t *emu, uintptr_t fnc);
void iFEpp(x86emu_t *emu, uintptr_t fnc);
void iFiii(x86emu_t *emu, uintptr_t fnc);
void iFiiI(x86emu_t *emu, uintptr_t fnc);
void iFiiu(x86emu_t *emu, uintptr_t fnc);
void iFiip(x86emu_t *emu, uintptr_t fnc);
void iFiII(x86emu_t *emu, uintptr_t fnc);
void iFiuI(x86emu_t *emu, uintptr_t fnc);
void iFiuu(x86emu_t *emu, uintptr_t fnc);
void iFiup(x86emu_t *emu, uintptr_t fnc);
void iFipi(x86emu_t *emu, uintptr_t fnc);
void iFipu(x86emu_t *emu, uintptr_t fnc);
void iFipp(x86emu_t *emu, uintptr_t fnc);
void iFuii(x86emu_t *emu, uintptr_t fnc);
void iFuip(x86emu_t *emu, uintptr_t fnc);
void iFuui(x86emu_t *emu, uintptr_t fnc);
void iFuuu(x86emu_t *emu, uintptr_t fnc);
void iFuup(x86emu_t *emu, uintptr_t fnc);
void iFuff(x86emu_t *emu, uintptr_t fnc);
void iFupp(x86emu_t *emu, uintptr_t fnc);
void iFfff(x86emu_t *emu, uintptr_t fnc);
void iFpii(x86emu_t *emu, uintptr_t fnc);
void iFpiu(x86emu_t *emu, uintptr_t fnc);
void iFpip(x86emu_t *emu, uintptr_t fnc);
void iFpIi(x86emu_t *emu, uintptr_t fnc);
void iFpui(x86emu_t *emu, uintptr_t fnc);
void iFpuu(x86emu_t *emu, uintptr_t fnc);
void iFpup(x86emu_t *emu, uintptr_t fnc);
void iFpfu(x86emu_t *emu, uintptr_t fnc);
void iFpff(x86emu_t *emu, uintptr_t fnc);
void iFppi(x86emu_t *emu, uintptr_t fnc);
void iFppI(x86emu_t *emu, uintptr_t fnc);
void iFppu(x86emu_t *emu, uintptr_t fnc);
void iFppd(x86emu_t *emu, uintptr_t fnc);
void iFppp(x86emu_t *emu, uintptr_t fnc);
void iFppV(x86emu_t *emu, uintptr_t fnc);
void IFiIi(x86emu_t *emu, uintptr_t fnc);
void IFpIi(x86emu_t *emu, uintptr_t fnc);
void IFppi(x86emu_t *emu, uintptr_t fnc);
void uFEpW(x86emu_t *emu, uintptr_t fnc);
void uFEpu(x86emu_t *emu, uintptr_t fnc);
void uFEpU(x86emu_t *emu, uintptr_t fnc);
void uFipu(x86emu_t *emu, uintptr_t fnc);
void uFuip(x86emu_t *emu, uintptr_t fnc);
void uFuui(x86emu_t *emu, uintptr_t fnc);
void uFuuI(x86emu_t *emu, uintptr_t fnc);
void uFuuu(x86emu_t *emu, uintptr_t fnc);
void uFuup(x86emu_t *emu, uintptr_t fnc);
void uFupi(x86emu_t *emu, uintptr_t fnc);
void uFupu(x86emu_t *emu, uintptr_t fnc);
void uFupp(x86emu_t *emu, uintptr_t fnc);
void uFpii(x86emu_t *emu, uintptr_t fnc);
void uFpiu(x86emu_t *emu, uintptr_t fnc);
void uFpip(x86emu_t *emu, uintptr_t fnc);
void uFppi(x86emu_t *emu, uintptr_t fnc);
void uFppu(x86emu_t *emu, uintptr_t fnc);
void uFppp(x86emu_t *emu, uintptr_t fnc);
void UFppi(x86emu_t *emu, uintptr_t fnc);
void fFuii(x86emu_t *emu, uintptr_t fnc);
void fFppu(x86emu_t *emu, uintptr_t fnc);
void fFppp(x86emu_t *emu, uintptr_t fnc);
void dFppu(x86emu_t *emu, uintptr_t fnc);
void dFppp(x86emu_t *emu, uintptr_t fnc);
void DFppu(x86emu_t *emu, uintptr_t fnc);
void pFEip(x86emu_t *emu, uintptr_t fnc);
void pFEpi(x86emu_t *emu, uintptr_t fnc);
void pFEpp(x86emu_t *emu, uintptr_t fnc);
void pFipi(x86emu_t *emu, uintptr_t fnc);
void pFipu(x86emu_t *emu, uintptr_t fnc);
void pFipp(x86emu_t *emu, uintptr_t fnc);
void pFIpi(x86emu_t *emu, uintptr_t fnc);
void pFuii(x86emu_t *emu, uintptr_t fnc);
void pFupi(x86emu_t *emu, uintptr_t fnc);
void pFupu(x86emu_t *emu, uintptr_t fnc);
void pFUpi(x86emu_t *emu, uintptr_t fnc);
void pFpii(x86emu_t *emu, uintptr_t fnc);
void pFpiu(x86emu_t *emu, uintptr_t fnc);
void pFpip(x86emu_t *emu, uintptr_t fnc);
void pFpCu(x86emu_t *emu, uintptr_t fnc);
void pFpui(x86emu_t *emu, uintptr_t fnc);
void pFpuu(x86emu_t *emu, uintptr_t fnc);
void pFpup(x86emu_t *emu, uintptr_t fnc);
void pFpdd(x86emu_t *emu, uintptr_t fnc);
void pFppi(x86emu_t *emu, uintptr_t fnc);
void pFppu(x86emu_t *emu, uintptr_t fnc);
void pFppp(x86emu_t *emu, uintptr_t fnc);
void vFEipV(x86emu_t *emu, uintptr_t fnc);
void vFEpip(x86emu_t *emu, uintptr_t fnc);
void vFEpup(x86emu_t *emu, uintptr_t fnc);
void vFiiii(x86emu_t *emu, uintptr_t fnc);
void vFiiip(x86emu_t *emu, uintptr_t fnc);
void vFiipV(x86emu_t *emu, uintptr_t fnc);
void vFiuip(x86emu_t *emu, uintptr_t fnc);
void vFiuuu(x86emu_t *emu, uintptr_t fnc);
void vFiupu(x86emu_t *emu, uintptr_t fnc);
void vFiupV(x86emu_t *emu, uintptr_t fnc);
void vFifff(x86emu_t *emu, uintptr_t fnc);
void vFiddd(x86emu_t *emu, uintptr_t fnc);
void vFipii(x86emu_t *emu, uintptr_t fnc);
void vFipup(x86emu_t *emu, uintptr_t fnc);
void vFippp(x86emu_t *emu, uintptr_t fnc);
void vFuiii(x86emu_t *emu, uintptr_t fnc);
void vFuiip(x86emu_t *emu, uintptr_t fnc);
void vFuiui(x86emu_t *emu, uintptr_t fnc);
void vFuiuu(x86emu_t *emu, uintptr_t fnc);
void vFuiup(x86emu_t *emu, uintptr_t fnc);
void vFuifi(x86emu_t *emu, uintptr_t fnc);
void vFuiff(x86emu_t *emu, uintptr_t fnc);
void vFuidd(x86emu_t *emu, uintptr_t fnc);
void vFuipi(x86emu_t *emu, uintptr_t fnc);
void vFuipu(x86emu_t *emu, uintptr_t fnc);
void vFuipp(x86emu_t *emu, uintptr_t fnc);
void vFuuii(x86emu_t *emu, uintptr_t fnc);
void vFuuiu(x86emu_t *emu, uintptr_t fnc);
void vFuuip(x86emu_t *emu, uintptr_t fnc);
void vFuuui(x86emu_t *emu, uintptr_t fnc);
void vFuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuuf(x86emu_t *emu, uintptr_t fnc);
void vFuuud(x86emu_t *emu, uintptr_t fnc);
void vFuuup(x86emu_t *emu, uintptr_t fnc);
void vFuupi(x86emu_t *emu, uintptr_t fnc);
void vFuupp(x86emu_t *emu, uintptr_t fnc);
void vFufff(x86emu_t *emu, uintptr_t fnc);
void vFuddd(x86emu_t *emu, uintptr_t fnc);
void vFupii(x86emu_t *emu, uintptr_t fnc);
void vFuppi(x86emu_t *emu, uintptr_t fnc);
void vFffff(x86emu_t *emu, uintptr_t fnc);
void vFdddd(x86emu_t *emu, uintptr_t fnc);
void vFpiii(x86emu_t *emu, uintptr_t fnc);
void vFpiip(x86emu_t *emu, uintptr_t fnc);
void vFpiup(x86emu_t *emu, uintptr_t fnc);
void vFpipu(x86emu_t *emu, uintptr_t fnc);
void vFpipp(x86emu_t *emu, uintptr_t fnc);
void vFpdii(x86emu_t *emu, uintptr_t fnc);
void vFpddd(x86emu_t *emu, uintptr_t fnc);
void vFppii(x86emu_t *emu, uintptr_t fnc);
void vFppip(x86emu_t *emu, uintptr_t fnc);
void vFppui(x86emu_t *emu, uintptr_t fnc);
void vFppuu(x86emu_t *emu, uintptr_t fnc);
void vFppup(x86emu_t *emu, uintptr_t fnc);
void vFpppi(x86emu_t *emu, uintptr_t fnc);
void vFpppu(x86emu_t *emu, uintptr_t fnc);
void vFpppp(x86emu_t *emu, uintptr_t fnc);
void cFpiii(x86emu_t *emu, uintptr_t fnc);
void iFEiip(x86emu_t *emu, uintptr_t fnc);
void iFEipp(x86emu_t *emu, uintptr_t fnc);
void iFEupp(x86emu_t *emu, uintptr_t fnc);
void iFEpiu(x86emu_t *emu, uintptr_t fnc);
void iFEpuu(x86emu_t *emu, uintptr_t fnc);
void iFEppi(x86emu_t *emu, uintptr_t fnc);
void iFEppu(x86emu_t *emu, uintptr_t fnc);
void iFEppp(x86emu_t *emu, uintptr_t fnc);
void iFEppV(x86emu_t *emu, uintptr_t fnc);
void iFEpVV(x86emu_t *emu, uintptr_t fnc);
void iFiiii(x86emu_t *emu, uintptr_t fnc);
void iFiiiu(x86emu_t *emu, uintptr_t fnc);
void iFiiip(x86emu_t *emu, uintptr_t fnc);
void iFiipi(x86emu_t *emu, uintptr_t fnc);
void iFiipu(x86emu_t *emu, uintptr_t fnc);
void iFiuii(x86emu_t *emu, uintptr_t fnc);
void iFiuui(x86emu_t *emu, uintptr_t fnc);
void iFiupp(x86emu_t *emu, uintptr_t fnc);
void iFipii(x86emu_t *emu, uintptr_t fnc);
void iFipiu(x86emu_t *emu, uintptr_t fnc);
void iFipip(x86emu_t *emu, uintptr_t fnc);
void iFipui(x86emu_t *emu, uintptr_t fnc);
void iFipuI(x86emu_t *emu, uintptr_t fnc);
void iFipuu(x86emu_t *emu, uintptr_t fnc);
void iFipup(x86emu_t *emu, uintptr_t fnc);
void iFippi(x86emu_t *emu, uintptr_t fnc);
void iFippu(x86emu_t *emu, uintptr_t fnc);
void iFippp(x86emu_t *emu, uintptr_t fnc);
void iFuipp(x86emu_t *emu, uintptr_t fnc);
void iFuuff(x86emu_t *emu, uintptr_t fnc);
void iFupup(x86emu_t *emu, uintptr_t fnc);
void iFuppi(x86emu_t *emu, uintptr_t fnc);
void iFuppp(x86emu_t *emu, uintptr_t fnc);
void iFpiii(x86emu_t *emu, uintptr_t fnc);
void iFpiiu(x86emu_t *emu, uintptr_t fnc);
void iFpiid(x86emu_t *emu, uintptr_t fnc);
void iFpiip(x86emu_t *emu, uintptr_t fnc);
void iFpipi(x86emu_t *emu, uintptr_t fnc);
void iFpipp(x86emu_t *emu, uintptr_t fnc);
void iFpCCC(x86emu_t *emu, uintptr_t fnc);
void iFpuii(x86emu_t *emu, uintptr_t fnc);
void iFpuui(x86emu_t *emu, uintptr_t fnc);
void iFpuuu(x86emu_t *emu, uintptr_t fnc);
void iFpuup(x86emu_t *emu, uintptr_t fnc);
void iFpupu(x86emu_t *emu, uintptr_t fnc);
void iFpupp(x86emu_t *emu, uintptr_t fnc);
void iFpupV(x86emu_t *emu, uintptr_t fnc);
void iFppii(x86emu_t *emu, uintptr_t fnc);
void iFppiu(x86emu_t *emu, uintptr_t fnc);
void iFppip(x86emu_t *emu, uintptr_t fnc);
void iFppuw(x86emu_t *emu, uintptr_t fnc);
void iFppui(x86emu_t *emu, uintptr_t fnc);
void iFppuu(x86emu_t *emu, uintptr_t fnc);
void iFppup(x86emu_t *emu, uintptr_t fnc);
void iFpppi(x86emu_t *emu, uintptr_t fnc);
void iFpppu(x86emu_t *emu, uintptr_t fnc);
void iFpppp(x86emu_t *emu, uintptr_t fnc);
void IFppii(x86emu_t *emu, uintptr_t fnc);
void IFppip(x86emu_t *emu, uintptr_t fnc);
void uFEpup(x86emu_t *emu, uintptr_t fnc);
void uFifff(x86emu_t *emu, uintptr_t fnc);
void uFippu(x86emu_t *emu, uintptr_t fnc);
void uFuuuu(x86emu_t *emu, uintptr_t fnc);
void uFpipp(x86emu_t *emu, uintptr_t fnc);
void uFpCCC(x86emu_t *emu, uintptr_t fnc);
void uFpuip(x86emu_t *emu, uintptr_t fnc);
void uFpuuu(x86emu_t *emu, uintptr_t fnc);
void uFpuup(x86emu_t *emu, uintptr_t fnc);
void uFpupp(x86emu_t *emu, uintptr_t fnc);
void uFppii(x86emu_t *emu, uintptr_t fnc);
void uFppup(x86emu_t *emu, uintptr_t fnc);
void uFpppi(x86emu_t *emu, uintptr_t fnc);
void uFpppp(x86emu_t *emu, uintptr_t fnc);
void UFppii(x86emu_t *emu, uintptr_t fnc);
void UFppip(x86emu_t *emu, uintptr_t fnc);
void pFEupp(x86emu_t *emu, uintptr_t fnc);
void pFEpii(x86emu_t *emu, uintptr_t fnc);
void pFEpip(x86emu_t *emu, uintptr_t fnc);
void pFEppi(x86emu_t *emu, uintptr_t fnc);
void pFEppp(x86emu_t *emu, uintptr_t fnc);
void pFiiiu(x86emu_t *emu, uintptr_t fnc);
void pFiiup(x86emu_t *emu, uintptr_t fnc);
void pFippu(x86emu_t *emu, uintptr_t fnc);
void pFuiii(x86emu_t *emu, uintptr_t fnc);
void pFdipp(x86emu_t *emu, uintptr_t fnc);
void pFpiip(x86emu_t *emu, uintptr_t fnc);
void pFpiuu(x86emu_t *emu, uintptr_t fnc);
void pFpipi(x86emu_t *emu, uintptr_t fnc);
void pFpipp(x86emu_t *emu, uintptr_t fnc);
void pFpuii(x86emu_t *emu, uintptr_t fnc);
void pFpuip(x86emu_t *emu, uintptr_t fnc);
void pFpuui(x86emu_t *emu, uintptr_t fnc);
void pFpuuu(x86emu_t *emu, uintptr_t fnc);
void pFpupi(x86emu_t *emu, uintptr_t fnc);
void pFpupu(x86emu_t *emu, uintptr_t fnc);
void pFppii(x86emu_t *emu, uintptr_t fnc);
void pFppip(x86emu_t *emu, uintptr_t fnc);
void pFppuu(x86emu_t *emu, uintptr_t fnc);
void pFppup(x86emu_t *emu, uintptr_t fnc);
void pFpppi(x86emu_t *emu, uintptr_t fnc);
void pFpppu(x86emu_t *emu, uintptr_t fnc);
void pFpppp(x86emu_t *emu, uintptr_t fnc);
void vFEpuup(x86emu_t *emu, uintptr_t fnc);
void vFEpppp(x86emu_t *emu, uintptr_t fnc);
void vFiiiii(x86emu_t *emu, uintptr_t fnc);
void vFiiiiu(x86emu_t *emu, uintptr_t fnc);
void vFiiuup(x86emu_t *emu, uintptr_t fnc);
void vFiipii(x86emu_t *emu, uintptr_t fnc);
void vFiuiip(x86emu_t *emu, uintptr_t fnc);
void vFiuipi(x86emu_t *emu, uintptr_t fnc);
void vFiuuuu(x86emu_t *emu, uintptr_t fnc);
void vFiffff(x86emu_t *emu, uintptr_t fnc);
void vFidddd(x86emu_t *emu, uintptr_t fnc);
void vFipipu(x86emu_t *emu, uintptr_t fnc);
void vFipipp(x86emu_t *emu, uintptr_t fnc);
void vFipupi(x86emu_t *emu, uintptr_t fnc);
void vFuiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiu(x86emu_t *emu, uintptr_t fnc);
void vFuiiip(x86emu_t *emu, uintptr_t fnc);
void vFuiiup(x86emu_t *emu, uintptr_t fnc);
void vFuiIII(x86emu_t *emu, uintptr_t fnc);
void vFuiuii(x86emu_t *emu, uintptr_t fnc);
void vFuiuiu(x86emu_t *emu, uintptr_t fnc);
void vFuiuip(x86emu_t *emu, uintptr_t fnc);
void vFuiuuu(x86emu_t *emu, uintptr_t fnc);
void vFuiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiupi(x86emu_t *emu, uintptr_t fnc);
void vFuiupu(x86emu_t *emu, uintptr_t fnc);
void vFuifff(x86emu_t *emu, uintptr_t fnc);
void vFuiddd(x86emu_t *emu, uintptr_t fnc);
void vFuipii(x86emu_t *emu, uintptr_t fnc);
void vFuipip(x86emu_t *emu, uintptr_t fnc);
void vFuipup(x86emu_t *emu, uintptr_t fnc);
void vFuippp(x86emu_t *emu, uintptr_t fnc);
void vFuuiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiui(x86emu_t *emu, uintptr_t fnc);
void vFuuiuu(x86emu_t *emu, uintptr_t fnc);
void vFuuiup(x86emu_t *emu, uintptr_t fnc);
void vFuuipi(x86emu_t *emu, uintptr_t fnc);
void vFuuipu(x86emu_t *emu, uintptr_t fnc);
void vFuuipp(x86emu_t *emu, uintptr_t fnc);
void vFuuuii(x86emu_t *emu, uintptr_t fnc);
void vFuuuiu(x86emu_t *emu, uintptr_t fnc);
void vFuuuip(x86emu_t *emu, uintptr_t fnc);
void vFuuuui(x86emu_t *emu, uintptr_t fnc);
void vFuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuuup(x86emu_t *emu, uintptr_t fnc);
void vFuupii(x86emu_t *emu, uintptr_t fnc);
void vFuffff(x86emu_t *emu, uintptr_t fnc);
void vFudddd(x86emu_t *emu, uintptr_t fnc);
void vFupupi(x86emu_t *emu, uintptr_t fnc);
void vFuppip(x86emu_t *emu, uintptr_t fnc);
void vFupppp(x86emu_t *emu, uintptr_t fnc);
void vFfffff(x86emu_t *emu, uintptr_t fnc);
void vFddddp(x86emu_t *emu, uintptr_t fnc);
void vFpiiii(x86emu_t *emu, uintptr_t fnc);
void vFpipii(x86emu_t *emu, uintptr_t fnc);
void vFpuipp(x86emu_t *emu, uintptr_t fnc);
void vFpddii(x86emu_t *emu, uintptr_t fnc);
void vFppiii(x86emu_t *emu, uintptr_t fnc);
void vFppiip(x86emu_t *emu, uintptr_t fnc);
void vFpppii(x86emu_t *emu, uintptr_t fnc);
void vFppppi(x86emu_t *emu, uintptr_t fnc);
void vFppppp(x86emu_t *emu, uintptr_t fnc);
void iFEipiI(x86emu_t *emu, uintptr_t fnc);
void iFEipuu(x86emu_t *emu, uintptr_t fnc);
void iFEippi(x86emu_t *emu, uintptr_t fnc);
void iFEippp(x86emu_t *emu, uintptr_t fnc);
void iFEpipp(x86emu_t *emu, uintptr_t fnc);
void iFEpupV(x86emu_t *emu, uintptr_t fnc);
void iFEpppp(x86emu_t *emu, uintptr_t fnc);
void iFEpppV(x86emu_t *emu, uintptr_t fnc);
void iFEppVV(x86emu_t *emu, uintptr_t fnc);
void iFiiipu(x86emu_t *emu, uintptr_t fnc);
void iFiiipp(x86emu_t *emu, uintptr_t fnc);
void iFiiupp(x86emu_t *emu, uintptr_t fnc);
void iFiipip(x86emu_t *emu, uintptr_t fnc);
void iFiippi(x86emu_t *emu, uintptr_t fnc);
void iFiuuuu(x86emu_t *emu, uintptr_t fnc);
void iFipiii(x86emu_t *emu, uintptr_t fnc);
void iFipipi(x86emu_t *emu, uintptr_t fnc);
void iFipuii(x86emu_t *emu, uintptr_t fnc);
void iFipuui(x86emu_t *emu, uintptr_t fnc);
void iFippui(x86emu_t *emu, uintptr_t fnc);
void iFipppi(x86emu_t *emu, uintptr_t fnc);
void iFipppp(x86emu_t *emu, uintptr_t fnc);
void iFuppup(x86emu_t *emu, uintptr_t fnc);
void iFpiiii(x86emu_t *emu, uintptr_t fnc);
void iFpiiip(x86emu_t *emu, uintptr_t fnc);
void iFpiiuu(x86emu_t *emu, uintptr_t fnc);
void iFpiipi(x86emu_t *emu, uintptr_t fnc);
void iFpiipp(x86emu_t *emu, uintptr_t fnc);
void iFpipii(x86emu_t *emu, uintptr_t fnc);
void iFpippi(x86emu_t *emu, uintptr_t fnc);
void iFpippp(x86emu_t *emu, uintptr_t fnc);
void iFpCCCC(x86emu_t *emu, uintptr_t fnc);
void iFpuuui(x86emu_t *emu, uintptr_t fnc);
void iFppiip(x86emu_t *emu, uintptr_t fnc);
void iFppiup(x86emu_t *emu, uintptr_t fnc);
void iFppipi(x86emu_t *emu, uintptr_t fnc);
void iFppipp(x86emu_t *emu, uintptr_t fnc);
void iFppupi(x86emu_t *emu, uintptr_t fnc);
void iFppupp(x86emu_t *emu, uintptr_t fnc);
void iFpppii(x86emu_t *emu, uintptr_t fnc);
void iFpppiu(x86emu_t *emu, uintptr_t fnc);
void iFpppip(x86emu_t *emu, uintptr_t fnc);
void iFpppui(x86emu_t *emu, uintptr_t fnc);
void iFpppup(x86emu_t *emu, uintptr_t fnc);
void iFppppi(x86emu_t *emu, uintptr_t fnc);
void iFppppu(x86emu_t *emu, uintptr_t fnc);
void iFppppp(x86emu_t *emu, uintptr_t fnc);
void IFppIII(x86emu_t *emu, uintptr_t fnc);
void uFuiiiu(x86emu_t *emu, uintptr_t fnc);
void uFupppp(x86emu_t *emu, uintptr_t fnc);
void uFpCCCC(x86emu_t *emu, uintptr_t fnc);
void uFpuuuu(x86emu_t *emu, uintptr_t fnc);
void uFpuuup(x86emu_t *emu, uintptr_t fnc);
void uFpuppu(x86emu_t *emu, uintptr_t fnc);
void uFppiip(x86emu_t *emu, uintptr_t fnc);
void uFppipp(x86emu_t *emu, uintptr_t fnc);
void uFppuup(x86emu_t *emu, uintptr_t fnc);
void uFppppp(x86emu_t *emu, uintptr_t fnc);
void pFEpiii(x86emu_t *emu, uintptr_t fnc);
void pFEppii(x86emu_t *emu, uintptr_t fnc);
void pFipipu(x86emu_t *emu, uintptr_t fnc);
void pFuiipp(x86emu_t *emu, uintptr_t fnc);
void pFpiiuu(x86emu_t *emu, uintptr_t fnc);
void pFpippp(x86emu_t *emu, uintptr_t fnc);
void pFpuiii(x86emu_t *emu, uintptr_t fnc);
void pFpuiip(x86emu_t *emu, uintptr_t fnc);
void pFppipi(x86emu_t *emu, uintptr_t fnc);
void pFppipp(x86emu_t *emu, uintptr_t fnc);
void pFppuuu(x86emu_t *emu, uintptr_t fnc);
void pFppuup(x86emu_t *emu, uintptr_t fnc);
void pFpppip(x86emu_t *emu, uintptr_t fnc);
void pFpppui(x86emu_t *emu, uintptr_t fnc);
void pFpppuu(x86emu_t *emu, uintptr_t fnc);
void pFpppup(x86emu_t *emu, uintptr_t fnc);
void pFppppi(x86emu_t *emu, uintptr_t fnc);
void pFppppp(x86emu_t *emu, uintptr_t fnc);
void vFEiiipp(x86emu_t *emu, uintptr_t fnc);
void vFEpuupp(x86emu_t *emu, uintptr_t fnc);
void vFiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFiuippp(x86emu_t *emu, uintptr_t fnc);
void vFiffiff(x86emu_t *emu, uintptr_t fnc);
void vFiddidd(x86emu_t *emu, uintptr_t fnc);
void vFuiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuiiuii(x86emu_t *emu, uintptr_t fnc);
void vFuiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiuiii(x86emu_t *emu, uintptr_t fnc);
void vFuiuiip(x86emu_t *emu, uintptr_t fnc);
void vFuiuiuu(x86emu_t *emu, uintptr_t fnc);
void vFuiuuip(x86emu_t *emu, uintptr_t fnc);
void vFuiuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuiupii(x86emu_t *emu, uintptr_t fnc);
void vFuiupiu(x86emu_t *emu, uintptr_t fnc);
void vFuiffff(x86emu_t *emu, uintptr_t fnc);
void vFuidddd(x86emu_t *emu, uintptr_t fnc);
void vFuipiup(x86emu_t *emu, uintptr_t fnc);
void vFuuiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiuii(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiu(x86emu_t *emu, uintptr_t fnc);
void vFuuiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuippp(x86emu_t *emu, uintptr_t fnc);
void vFuuuiup(x86emu_t *emu, uintptr_t fnc);
void vFuuuipi(x86emu_t *emu, uintptr_t fnc);
void vFuuuipp(x86emu_t *emu, uintptr_t fnc);
void vFuuuuii(x86emu_t *emu, uintptr_t fnc);
void vFuuuuip(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuuuff(x86emu_t *emu, uintptr_t fnc);
void vFuuuppi(x86emu_t *emu, uintptr_t fnc);
void vFuuuppp(x86emu_t *emu, uintptr_t fnc);
void vFuuffff(x86emu_t *emu, uintptr_t fnc);
void vFuudddd(x86emu_t *emu, uintptr_t fnc);
void vFuffiip(x86emu_t *emu, uintptr_t fnc);
void vFufffff(x86emu_t *emu, uintptr_t fnc);
void vFuddiip(x86emu_t *emu, uintptr_t fnc);
void vFupupip(x86emu_t *emu, uintptr_t fnc);
void vFuppppp(x86emu_t *emu, uintptr_t fnc);
void vFffffff(x86emu_t *emu, uintptr_t fnc);
void vFdddddd(x86emu_t *emu, uintptr_t fnc);
void vFpipiiu(x86emu_t *emu, uintptr_t fnc);
void vFpipppi(x86emu_t *emu, uintptr_t fnc);
void vFpdddii(x86emu_t *emu, uintptr_t fnc);
void vFppiiii(x86emu_t *emu, uintptr_t fnc);
void vFppiiip(x86emu_t *emu, uintptr_t fnc);
void vFppiipi(x86emu_t *emu, uintptr_t fnc);
void vFppippi(x86emu_t *emu, uintptr_t fnc);
void vFppupii(x86emu_t *emu, uintptr_t fnc);
void vFpppppi(x86emu_t *emu, uintptr_t fnc);
void vFpppppp(x86emu_t *emu, uintptr_t fnc);
void iFEiippi(x86emu_t *emu, uintptr_t fnc);
void iFEpiipp(x86emu_t *emu, uintptr_t fnc);
void iFEpippi(x86emu_t *emu, uintptr_t fnc);
void iFEpipVV(x86emu_t *emu, uintptr_t fnc);
void iFEpupVV(x86emu_t *emu, uintptr_t fnc);
void iFEpppVV(x86emu_t *emu, uintptr_t fnc);
void iFiiiiip(x86emu_t *emu, uintptr_t fnc);
void iFiuiipi(x86emu_t *emu, uintptr_t fnc);
void iFipuipu(x86emu_t *emu, uintptr_t fnc);
void iFipuipp(x86emu_t *emu, uintptr_t fnc);
void iFipppup(x86emu_t *emu, uintptr_t fnc);
void iFippppp(x86emu_t *emu, uintptr_t fnc);
void iFuppipp(x86emu_t *emu, uintptr_t fnc);
void iFuppppp(x86emu_t *emu, uintptr_t fnc);
void iFpiiiii(x86emu_t *emu, uintptr_t fnc);
void iFpiiipp(x86emu_t *emu, uintptr_t fnc);
void iFpiippp(x86emu_t *emu, uintptr_t fnc);
void iFpipppp(x86emu_t *emu, uintptr_t fnc);
void iFpupipi(x86emu_t *emu, uintptr_t fnc);
void iFpupuui(x86emu_t *emu, uintptr_t fnc);
void iFppiiip(x86emu_t *emu, uintptr_t fnc);
void iFppiiuu(x86emu_t *emu, uintptr_t fnc);
void iFppiipi(x86emu_t *emu, uintptr_t fnc);
void iFppIppp(x86emu_t *emu, uintptr_t fnc);
void iFppuiii(x86emu_t *emu, uintptr_t fnc);
void iFppuiiu(x86emu_t *emu, uintptr_t fnc);
void iFppuIII(x86emu_t *emu, uintptr_t fnc);
void iFppuupp(x86emu_t *emu, uintptr_t fnc);
void iFpppiuu(x86emu_t *emu, uintptr_t fnc);
void iFpppupp(x86emu_t *emu, uintptr_t fnc);
void iFppppii(x86emu_t *emu, uintptr_t fnc);
void iFppppup(x86emu_t *emu, uintptr_t fnc);
void iFpppppi(x86emu_t *emu, uintptr_t fnc);
void iFpppppu(x86emu_t *emu, uintptr_t fnc);
void iFpppppp(x86emu_t *emu, uintptr_t fnc);
void uFpppppp(x86emu_t *emu, uintptr_t fnc);
void pFEpippp(x86emu_t *emu, uintptr_t fnc);
void pFEppuup(x86emu_t *emu, uintptr_t fnc);
void pFEpppup(x86emu_t *emu, uintptr_t fnc);
void pFpiiiiu(x86emu_t *emu, uintptr_t fnc);
void pFpippip(x86emu_t *emu, uintptr_t fnc);
void pFpuiiii(x86emu_t *emu, uintptr_t fnc);
void pFpuiiiI(x86emu_t *emu, uintptr_t fnc);
void pFppiiii(x86emu_t *emu, uintptr_t fnc);
void pFppppip(x86emu_t *emu, uintptr_t fnc);
void pFpppppp(x86emu_t *emu, uintptr_t fnc);
void vFiiiiiip(x86emu_t *emu, uintptr_t fnc);
void vFiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFiiupuip(x86emu_t *emu, uintptr_t fnc);
void vFiiffffp(x86emu_t *emu, uintptr_t fnc);
void vFiupuuup(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiuip(x86emu_t *emu, uintptr_t fnc);
void vFuiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiip(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiuu(x86emu_t *emu, uintptr_t fnc);
void vFuiupiiu(x86emu_t *emu, uintptr_t fnc);
void vFuipiiii(x86emu_t *emu, uintptr_t fnc);
void vFuipffff(x86emu_t *emu, uintptr_t fnc);
void vFuipdddd(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiui(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiuu(x86emu_t *emu, uintptr_t fnc);
void vFuuiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiii(x86emu_t *emu, uintptr_t fnc);
void vFuuipppp(x86emu_t *emu, uintptr_t fnc);
void vFuuuiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuuiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuuiuii(x86emu_t *emu, uintptr_t fnc);
void vFuuuiupi(x86emu_t *emu, uintptr_t fnc);
void vFuuuuiip(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuuufff(x86emu_t *emu, uintptr_t fnc);
void vFuuuffff(x86emu_t *emu, uintptr_t fnc);
void vFuuudddd(x86emu_t *emu, uintptr_t fnc);
void vFuuffiip(x86emu_t *emu, uintptr_t fnc);
void vFuuddiip(x86emu_t *emu, uintptr_t fnc);
void vFuffffff(x86emu_t *emu, uintptr_t fnc);
void vFudddddd(x86emu_t *emu, uintptr_t fnc);
void vFpipipii(x86emu_t *emu, uintptr_t fnc);
void vFpddiidd(x86emu_t *emu, uintptr_t fnc);
void vFppiiipi(x86emu_t *emu, uintptr_t fnc);
void vFpppuuuu(x86emu_t *emu, uintptr_t fnc);
void vFppppipi(x86emu_t *emu, uintptr_t fnc);
void iFEpuiupV(x86emu_t *emu, uintptr_t fnc);
void iFEpppiiu(x86emu_t *emu, uintptr_t fnc);
void iFEpppppp(x86emu_t *emu, uintptr_t fnc);
void iFiiiiiip(x86emu_t *emu, uintptr_t fnc);
void iFiuppppp(x86emu_t *emu, uintptr_t fnc);
void iFpiiuuiu(x86emu_t *emu, uintptr_t fnc);
void iFpiupiii(x86emu_t *emu, uintptr_t fnc);
void iFpippupp(x86emu_t *emu, uintptr_t fnc);
void iFpuuiuui(x86emu_t *emu, uintptr_t fnc);
void iFpupuuui(x86emu_t *emu, uintptr_t fnc);
void iFpupupui(x86emu_t *emu, uintptr_t fnc);
void iFpuppppp(x86emu_t *emu, uintptr_t fnc);
void iFppiiuui(x86emu_t *emu, uintptr_t fnc);
void iFppiipii(x86emu_t *emu, uintptr_t fnc);
void iFppipppp(x86emu_t *emu, uintptr_t fnc);
void iFpppiiii(x86emu_t *emu, uintptr_t fnc);
void iFpppiiuu(x86emu_t *emu, uintptr_t fnc);
void iFpppiipi(x86emu_t *emu, uintptr_t fnc);
void iFpppiuwu(x86emu_t *emu, uintptr_t fnc);
void iFppppiii(x86emu_t *emu, uintptr_t fnc);
void iFppppppp(x86emu_t *emu, uintptr_t fnc);
void uFuippppp(x86emu_t *emu, uintptr_t fnc);
void pFEpupppp(x86emu_t *emu, uintptr_t fnc);
void pFifffppp(x86emu_t *emu, uintptr_t fnc);
void pFuupupup(x86emu_t *emu, uintptr_t fnc);
void pFpCpupCC(x86emu_t *emu, uintptr_t fnc);
void pFpppuupp(x86emu_t *emu, uintptr_t fnc);
void pFppppuuu(x86emu_t *emu, uintptr_t fnc);
void pFpppppuu(x86emu_t *emu, uintptr_t fnc);
void pFppppppp(x86emu_t *emu, uintptr_t fnc);
void vFiiiiuuip(x86emu_t *emu, uintptr_t fnc);
void vFiupuiuup(x86emu_t *emu, uintptr_t fnc);
void vFiupuuuup(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiiipiup(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiuip(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuiiuupp(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuuiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuuiuiii(x86emu_t *emu, uintptr_t fnc);
void vFuuuipipp(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuuuufff(x86emu_t *emu, uintptr_t fnc);
void vFffffffff(x86emu_t *emu, uintptr_t fnc);
void vFpippiiuu(x86emu_t *emu, uintptr_t fnc);
void vFppiiipii(x86emu_t *emu, uintptr_t fnc);
void vFppippppi(x86emu_t *emu, uintptr_t fnc);
void vFppppiipi(x86emu_t *emu, uintptr_t fnc);
void iFEpippppp(x86emu_t *emu, uintptr_t fnc);
void iFiiiiiiip(x86emu_t *emu, uintptr_t fnc);
void iFiiippppp(x86emu_t *emu, uintptr_t fnc);
void iFiiuuuuuu(x86emu_t *emu, uintptr_t fnc);
void iFipiuuuuu(x86emu_t *emu, uintptr_t fnc);
void iFuiifpppp(x86emu_t *emu, uintptr_t fnc);
void iFpiiiiipi(x86emu_t *emu, uintptr_t fnc);
void iFpuippupp(x86emu_t *emu, uintptr_t fnc);
void iFpuuiiiii(x86emu_t *emu, uintptr_t fnc);
void iFpupppppp(x86emu_t *emu, uintptr_t fnc);
void iFppIIIppp(x86emu_t *emu, uintptr_t fnc);
void iFpppiippp(x86emu_t *emu, uintptr_t fnc);
void iFpppipppp(x86emu_t *emu, uintptr_t fnc);
void iFppppiipi(x86emu_t *emu, uintptr_t fnc);
void iFpppppppp(x86emu_t *emu, uintptr_t fnc);
void uFuipppppp(x86emu_t *emu, uintptr_t fnc);
void pFuiiiuuuu(x86emu_t *emu, uintptr_t fnc);
void pFuupupipp(x86emu_t *emu, uintptr_t fnc);
void pFpppuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiuip(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuiupuffup(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuuiiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuupiuiuuf(x86emu_t *emu, uintptr_t fnc);
void vFuffffffff(x86emu_t *emu, uintptr_t fnc);
void vFffuuuufff(x86emu_t *emu, uintptr_t fnc);
void vFddddddddd(x86emu_t *emu, uintptr_t fnc);
void vFpipppiipi(x86emu_t *emu, uintptr_t fnc);
void vFppiiipiii(x86emu_t *emu, uintptr_t fnc);
void vFppuuiiiii(x86emu_t *emu, uintptr_t fnc);
void vFpppppippp(x86emu_t *emu, uintptr_t fnc);
void vFppppppppp(x86emu_t *emu, uintptr_t fnc);
void iFEiiuuuuuu(x86emu_t *emu, uintptr_t fnc);
void iFEpppipppp(x86emu_t *emu, uintptr_t fnc);
void iFiiiiiiiip(x86emu_t *emu, uintptr_t fnc);
void iFiiiipiiip(x86emu_t *emu, uintptr_t fnc);
void iFipiipippi(x86emu_t *emu, uintptr_t fnc);
void iFdddpppppp(x86emu_t *emu, uintptr_t fnc);
void iFppiuiippu(x86emu_t *emu, uintptr_t fnc);
void iFppipiiipi(x86emu_t *emu, uintptr_t fnc);
void iFpppiiuuii(x86emu_t *emu, uintptr_t fnc);
void iFppppppppp(x86emu_t *emu, uintptr_t fnc);
void uFppppppppp(x86emu_t *emu, uintptr_t fnc);
void pFEppiiuuui(x86emu_t *emu, uintptr_t fnc);
void pFEppuippuu(x86emu_t *emu, uintptr_t fnc);
void pFpiiiiuuuu(x86emu_t *emu, uintptr_t fnc);
void pFppiiiiiip(x86emu_t *emu, uintptr_t fnc);
void pFppiiuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFiiiiiiiiiu(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiiuip(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiiiip(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuiii(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuupiiupuuf(x86emu_t *emu, uintptr_t fnc);
void vFuffiiffiip(x86emu_t *emu, uintptr_t fnc);
void vFuddiiddiip(x86emu_t *emu, uintptr_t fnc);
void vFffffffffff(x86emu_t *emu, uintptr_t fnc);
void iFiiiiiiiiip(x86emu_t *emu, uintptr_t fnc);
void iFpuupiuiipp(x86emu_t *emu, uintptr_t fnc);
void iFppuuiiiiii(x86emu_t *emu, uintptr_t fnc);
void iFppuuiiuupi(x86emu_t *emu, uintptr_t fnc);
void iFppppiiuuii(x86emu_t *emu, uintptr_t fnc);
void pFppuiipuuii(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiiiuip(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuiuiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuiuiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuuffiiffiip(x86emu_t *emu, uintptr_t fnc);
void vFuufffffffff(x86emu_t *emu, uintptr_t fnc);
void vFuuddiiddiip(x86emu_t *emu, uintptr_t fnc);
void vFuffffffffff(x86emu_t *emu, uintptr_t fnc);
void vFpipipiipiii(x86emu_t *emu, uintptr_t fnc);
void vFpipppiiiipi(x86emu_t *emu, uintptr_t fnc);
void iFEppppiiiiuu(x86emu_t *emu, uintptr_t fnc);
void iFiiiiiiiiiip(x86emu_t *emu, uintptr_t fnc);
void iFppppiiuuiiu(x86emu_t *emu, uintptr_t fnc);
void pFEppuiipuuii(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiiiiuip(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFffffffffffff(x86emu_t *emu, uintptr_t fnc);
void vFpipppiiiipii(x86emu_t *emu, uintptr_t fnc);
void vFpippppiiiipi(x86emu_t *emu, uintptr_t fnc);
void vFppiiuuuiupup(x86emu_t *emu, uintptr_t fnc);
void iFEppppiiiiuui(x86emu_t *emu, uintptr_t fnc);
void iFpipppppppppp(x86emu_t *emu, uintptr_t fnc);
void iFpppiiipppppp(x86emu_t *emu, uintptr_t fnc);
void iFpppppppppppp(x86emu_t *emu, uintptr_t fnc);
void pFEppiiuuuipii(x86emu_t *emu, uintptr_t fnc);
void pFppiiuuuiupup(x86emu_t *emu, uintptr_t fnc);
void vFuiiiiiiiiiuup(x86emu_t *emu, uintptr_t fnc);
void vFuuuuuuuuuuuuu(x86emu_t *emu, uintptr_t fnc);
void vFuffffffffffff(x86emu_t *emu, uintptr_t fnc);
void iFddddpppddpppp(x86emu_t *emu, uintptr_t fnc);
void iFpippuuuiipppp(x86emu_t *emu, uintptr_t fnc);
void iFpupiiiipppppp(x86emu_t *emu, uintptr_t fnc);
void vFuffiiffiiffiip(x86emu_t *emu, uintptr_t fnc);
void vFuddiiddiiddiip(x86emu_t *emu, uintptr_t fnc);
void vFuuiiiiuuiiiiiii(x86emu_t *emu, uintptr_t fnc);
void vFfffffffffffffff(x86emu_t *emu, uintptr_t fnc);
void uFpppppppppppppppp(x86emu_t *emu, uintptr_t fnc);
void vFppuiiiiipuiiiiiiii(x86emu_t *emu, uintptr_t fnc);

#if defined(NOALIGN)
void IFpi(x86emu_t *emu, uintptr_t fnc);
void dFpi(x86emu_t *emu, uintptr_t fnc);
void iFppiiiip(x86emu_t *emu, uintptr_t fnc);
#endif

#if !defined(NOALIGN)
void IFEp(x86emu_t *emu, uintptr_t fnc);
void dFEp(x86emu_t *emu, uintptr_t fnc);
void iFEpI(x86emu_t *emu, uintptr_t fnc);
void iFEpd(x86emu_t *emu, uintptr_t fnc);
void IFEpi(x86emu_t *emu, uintptr_t fnc);
void dFEpi(x86emu_t *emu, uintptr_t fnc);
void iFEiiip(x86emu_t *emu, uintptr_t fnc);
void iFEipii(x86emu_t *emu, uintptr_t fnc);
void iFEppip(x86emu_t *emu, uintptr_t fnc);
void iFEpppi(x86emu_t *emu, uintptr_t fnc);
void iFEppppp(x86emu_t *emu, uintptr_t fnc);
void iFEppiiiip(x86emu_t *emu, uintptr_t fnc);
#endif

#if defined(HAVE_LD80BITS)
void DFD(x86emu_t *emu, uintptr_t fnc);
void DFDD(x86emu_t *emu, uintptr_t fnc);
void DFDp(x86emu_t *emu, uintptr_t fnc);
#endif

#if !defined(HAVE_LD80BITS)
void LFL(x86emu_t *emu, uintptr_t fnc);
void LFLL(x86emu_t *emu, uintptr_t fnc);
void LFLp(x86emu_t *emu, uintptr_t fnc);
#endif

void iFEpvvpp(x86emu_t *emu, uintptr_t fnc);
void iFEvpVV(x86emu_t *emu, uintptr_t fnc);
void iFEv(x86emu_t *emu, uintptr_t fnc);
void pFEv(x86emu_t *emu, uintptr_t fnc);
void iFEp0pVV(x86emu_t *emu, uintptr_t fnc);
void iFEpuvvpVV(x86emu_t *emu, uintptr_t fnc);
void iFEpvpVV(x86emu_t *emu, uintptr_t fnc);
void iFEpvvpVV(x86emu_t *emu, uintptr_t fnc);

#endif //__WRAPPER_H_
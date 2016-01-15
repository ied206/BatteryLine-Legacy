#ifndef __BasicInput_h
#define __BasicInput_h

#ifdef _MSC_VER // Visual C++에서만 컴파일되는 코드
#pragma warning(disable:4996)
#endif // _MSC_VER


int scanfile (const char name[]); // 파일의 존재 여부 검사
int WhatBitOS (int print); // 몇비트 컴파일인가 알아내기
int CompileYear ();
int CompileMonth ();
int CompileDate ();

#define BIN(X) (((X) % 256) + ((X) % 128) + ((X) % 64) + ((X) % 32) + ((X) % 16) + ((X) % 8) + ((X) % 4) + ((X) % 2))) // 1바이트 내외의 0, 1로 이루어진 십진수를 이진수로 바꿔준다.

#define ms2rsec(X) ((X) / 1000)
#define ms2rmin(X) ((X) / 1000 / 60)
#define ms2rhour(X) ((X) / 1000 / 60 / 60)

#define ms2sec(X) (((X) / 1000) % 60)
#define ms2min(X) (((X) / 1000 / 60) % 60)
#define ms2hour(X) (((X) / 1000 / 60 / 60) % 60)

#define rsec2sec(X) ((X) % 60)
#define rsec2min(X) ((X) / 60)
#define rsec2hour(X) ((X) / 60 / 60)

#define KILOBYTE 1024
#define MEGABYTE (1024 * 1024)
#define GIGABYTE (1024 * 1024 * 1024)
#define TERABYTE (1024 * 1024 * 1024 * 1024)

#endif

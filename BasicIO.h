#ifndef __BasicInput_h
#define __BasicInput_h

#ifdef _MSC_VER // Visual C++������ �����ϵǴ� �ڵ�
#pragma warning(disable:4996)
#endif // _MSC_VER

#include <stdint.h>

int scanfile (const char name[]); // ������ ���� ���� �˻�
int WhatBitOS (int print); // ���Ʈ �������ΰ� �˾Ƴ���
void BinaryDump(const uint8_t buf[], const uint32_t bufsize);
int CompileYear ();
int CompileMonth ();
int CompileDate ();

#define BIN(X) (((X) % 256) + ((X) % 128) + ((X) % 64) + ((X) % 32) + ((X) % 16) + ((X) % 8) + ((X) % 4) + ((X) % 2))) // 1����Ʈ ������ 0, 1�� �̷���� �������� �������� �ٲ��ش�.

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

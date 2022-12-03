/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2020 - 2022
*
*  TITLE:       SIG.H
*
*  VERSION:     1.28
*
*  DATE:        01 Dec 2022
*
*  Signatures header file.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

//
// Process Explorer dispatch signature.
//
static unsigned char ProcExpSignature[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x81, 0xEC, 0x90, 0x00,
    0x00, 0x00, 0x48, 0x8B, 0xFA, 0x33, 0xDB, 0x48, 0x8B, 0xD1, 0x48,
    0x8B, 0x8F, 0xB8, 0x00, 0x00, 0x00, 0x4C, 0x8B, 0x47, 0x18, 0x48,
    0x89, 0x5F, 0x38, 0x0F, 0xB6, 0x01, 0x44, 0x8B, 0x49, 0x08, 0x44,
    0x8B, 0x51, 0x18, 0x84, 0xC0, 0x74, 0x3E, 0x3C, 0x0E, 0x74, 0x0A,
    0xBB, 0x10, 0x00, 0x00, 0xC0
};

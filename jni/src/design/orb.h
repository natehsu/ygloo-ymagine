/**
 * Copyright 2013-2015 Yahoo! Inc.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License. You may
 * obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License. See accompanying LICENSE file.
 */

#ifndef _YMAGINE_DESIGN_ORB_H
#define _YMAGINE_DESIGN_ORB_H 1

#include "ymagine/ymagine.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Byte array for 220x220 PNG of black orb on transparent background */ 
const unsigned char ORB_png[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d,
  0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0xdc,
  0x08, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x84, 0x3f, 0xb3, 0x00, 0x00, 0x00,
  0x8d, 0x50, 0x4c, 0x54, 0x45, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x11,
  0x08, 0x10, 0x02, 0x0a, 0x0c, 0x10, 0x1f, 0x1f, 0x04, 0x04, 0x03, 0x02,
  0x00, 0x02, 0x24, 0x00, 0x00, 0x03, 0x04, 0x03, 0x07, 0x02, 0x06, 0x0a,
  0x02, 0x14, 0x03, 0x02, 0x02, 0x04, 0x04, 0x06, 0x0d, 0x0a, 0x05, 0x09,
  0x00, 0x09, 0x00, 0x03, 0x06, 0x05, 0x02, 0x02, 0x07, 0x05, 0x05, 0x07,
  0x06, 0x06, 0x02, 0x06, 0x01, 0x07, 0x08, 0x00, 0x00, 0x03, 0x00, 0x07,
  0x02, 0x03, 0x24, 0x00, 0x6d, 0x00, 0x06, 0x04, 0x0b, 0x08, 0x00, 0x05,
  0x04, 0x08, 0x00, 0x00, 0x00, 0x02, 0x08, 0x02, 0x22, 0x22, 0x00, 0x08,
  0x02, 0x02, 0x05, 0x04, 0x03, 0x0b, 0x06, 0x00, 0x03, 0x00, 0x08, 0x00,
  0x30, 0x10, 0x05, 0x08, 0x02, 0x0c, 0x00, 0x01, 0x07, 0x09, 0x00, 0x00,
  0x08, 0x02, 0x04, 0x00, 0x00, 0x00, 0x03, 0x01, 0x11, 0x01, 0x00, 0x09,
  0x00, 0x09, 0x08, 0x02, 0x00, 0x1d, 0x08, 0x00, 0x00, 0x00, 0x00, 0x21,
  0x00, 0x00, 0xd8, 0xd7, 0x9c, 0x43, 0x00, 0x00, 0x00, 0x2d, 0x74, 0x52,
  0x4e, 0x53, 0x00, 0x04, 0x12, 0x22, 0x0c, 0x59, 0x6c, 0x07, 0x64, 0x30,
  0x17, 0x78, 0x3c, 0x1e, 0x1b, 0xaf, 0x51, 0x2b, 0x27, 0x97, 0xe3, 0x4b,
  0x42, 0x07, 0x81, 0x60, 0x37, 0x46, 0x33, 0x0f, 0xa3, 0x8d, 0x87, 0x5d,
  0x10, 0xba, 0xb9, 0xac, 0x88, 0x72, 0xc9, 0xc8, 0x93, 0x7f, 0xe3, 0x43,
  0x1a, 0x93, 0xb9, 0x00, 0x00, 0x04, 0x82, 0x49, 0x44, 0x41, 0x54, 0x78,
  0xda, 0xed, 0xdd, 0x89, 0x5a, 0xda, 0x40, 0x14, 0x05, 0xe0, 0x93, 0x05,
  0x08, 0x24, 0xac, 0xb2, 0x8a, 0xa0, 0x28, 0x85, 0x6a, 0x7b, 0xfa, 0xfe,
  0x8f, 0xd7, 0x52, 0x4a, 0x95, 0xaa, 0x40, 0x42, 0x96, 0xb9, 0xe7, 0xeb,
  0xff, 0x06, 0xe7, 0x9b, 0x64, 0x26, 0xcb, 0xcc, 0xbd, 0xf8, 0xef, 0x1a,
  0x9e, 0x1f, 0x34, 0x93, 0xd1, 0x2a, 0xaa, 0x6f, 0xe3, 0xe9, 0x66, 0x1a,
  0x6f, 0xeb, 0x51, 0x6d, 0x94, 0xf4, 0xdb, 0xbe, 0x07, 0xbb, 0xc2, 0xc1,
  0x28, 0x7e, 0xe2, 0x39, 0xcb, 0x28, 0x69, 0x9b, 0x4a, 0xe9, 0x27, 0xdb,
  0x21, 0xd3, 0x59, 0xae, 0xfa, 0x0d, 0xb8, 0x2e, 0x4c, 0x36, 0xcc, 0x2e,
  0x1a, 0x38, 0x3b, 0x88, 0x7e, 0xef, 0x2b, 0xaf, 0xf7, 0xd0, 0x74, 0x2e,
  0xa0, 0x97, 0xac, 0x99, 0x9f, 0x6d, 0x07, 0xce, 0xf0, 0x57, 0xcc, 0xdd,
  0xf2, 0xce, 0x85, 0x01, 0x5c, 0x44, 0x2c, 0x48, 0xb7, 0x8f, 0x4a, 0x79,
  0x63, 0x16, 0xea, 0xa5, 0x83, 0xaa, 0xf8, 0x1b, 0x16, 0x6f, 0xee, 0xa1,
  0x02, 0xc1, 0x90, 0xe5, 0xd8, 0x3c, 0xa2, 0x64, 0x63, 0x96, 0xa8, 0xdb,
  0x42, 0x89, 0x12, 0x96, 0xad, 0x8d, 0x92, 0xdc, 0xb1, 0x02, 0x5f, 0x7d,
  0x94, 0xa0, 0xcf, 0x8a, 0xdc, 0x84, 0x28, 0xd8, 0x62, 0xc8, 0xea, 0xcc,
  0x50, 0xa8, 0x1a, 0xab, 0x35, 0x40, 0x61, 0x02, 0x56, 0xae, 0x1b, 0xa2,
  0x10, 0x93, 0x1b, 0xba, 0xa0, 0x89, 0x1d, 0xbd, 0x61, 0xdb, 0xbb, 0x99,
  0x20, 0x6f, 0x75, 0xba, 0x23, 0x40, 0xae, 0x16, 0x74, 0x4a, 0x4f, 0x62,
  0x6d, 0xfb, 0xcc, 0x93, 0x87, 0xbc, 0xf4, 0xe8, 0x1e, 0x1f, 0xf9, 0x70,
  0x63, 0x96, 0x2c, 0xe4, 0xc6, 0x6b, 0xd0, 0x51, 0x09, 0xae, 0x16, 0xd2,
  0x59, 0x33, 0x5c, 0xc9, 0xa7, 0xc3, 0xb6, 0xc2, 0xd9, 0xc8, 0x29, 0xae,
  0xd0, 0xa2, 0xe3, 0x5e, 0x64, 0xc7, 0x6d, 0xe7, 0x5e, 0x70, 0x2e, 0x79,
  0x55, 0x17, 0x5b, 0x03, 0x8e, 0xd5, 0x90, 0x81, 0x47, 0x23, 0xc6, 0x48,
  0xaf, 0x4b, 0x2b, 0x02, 0xa4, 0x35, 0xa3, 0x1d, 0x8f, 0x16, 0x3e, 0xdf,
  0x65, 0xe6, 0x69, 0x2d, 0x70, 0xc7, 0xba, 0x92, 0x93, 0xc9, 0xc1, 0x1c,
  0x97, 0x9b, 0xd2, 0x9a, 0x16, 0x2e, 0xd5, 0xa4, 0x3d, 0x9e, 0xd2, 0x93,
  0x49, 0xd6, 0x67, 0xe8, 0xaf, 0xb4, 0x28, 0x10, 0x5c, 0x05, 0x5e, 0xe1,
  0x02, 0x13, 0x1a, 0x55, 0xc7, 0x79, 0x2f, 0xb4, 0xaa, 0x85, 0x73, 0xda,
  0xb4, 0x0b, 0xe7, 0xd0, 0xb0, 0x3b, 0x9c, 0x76, 0x4b, 0xcb, 0x84, 0x07,
  0x8e, 0xac, 0x39, 0xfd, 0xe7, 0xf4, 0x5a, 0x0d, 0xa5, 0x07, 0xe6, 0x7f,
  0xd5, 0x85, 0x07, 0x8e, 0x6c, 0xe8, 0x0e, 0x1c, 0x59, 0x17, 0x1e, 0x38,
  0x72, 0xa2, 0x39, 0x55, 0xee, 0x45, 0x2e, 0x6c, 0x56, 0x2b, 0x8c, 0xf0,
  0xc0, 0x91, 0x89, 0xdb, 0x7b, 0x31, 0x8a, 0x18, 0xba, 0x67, 0x6a, 0x68,
  0xab, 0x7c, 0x5c, 0xf8, 0xc8, 0x17, 0xbc, 0xb7, 0xa2, 0x0a, 0x4f, 0x75,
  0x3a, 0xd9, 0x19, 0x5b, 0xff, 0xc6, 0x9c, 0x6e, 0x4a, 0x79, 0xa0, 0x8e,
  0x50, 0xf7, 0xaa, 0x24, 0x23, 0xd1, 0x45, 0x6e, 0xcf, 0xfc, 0xdf, 0x81,
  0x53, 0x42, 0xdd, 0xab, 0x92, 0xec, 0x59, 0xdb, 0x94, 0x91, 0xfd, 0xba,
  0x8c, 0xa8, 0xc5, 0xd3, 0xbd, 0x2a, 0xc9, 0xa6, 0x72, 0xb8, 0xa9, 0xec,
  0x42, 0xb0, 0xe3, 0xe8, 0xd6, 0xf3, 0x7c, 0x78, 0xba, 0x57, 0x25, 0xd9,
  0x54, 0x0e, 0xf7, 0x4d, 0xf2, 0x8d, 0xe0, 0x00, 0x07, 0x23, 0xea, 0x71,
  0x7c, 0x6f, 0xfd, 0x75, 0x42, 0xdd, 0x5b, 0x8e, 0x4c, 0x94, 0xc3, 0xc5,
  0xa2, 0x4f, 0xcd, 0x7b, 0x12, 0xbf, 0x8a, 0x3f, 0x23, 0xfa, 0x4a, 0x70,
  0x14, 0xee, 0x0b, 0x15, 0xf9, 0xba, 0xf3, 0x09, 0x79, 0xab, 0x1c, 0x2e,
  0x52, 0x0e, 0xb7, 0x14, 0x5e, 0x09, 0x48, 0x37, 0x0f, 0xa4, 0xe6, 0x19,
  0x6e, 0x4e, 0x4d, 0xc2, 0xcb, 0x1c, 0x89, 0x9d, 0x7b, 0x6a, 0x6a, 0xe0,
  0x97, 0x21, 0x35, 0xb5, 0x75, 0x57, 0x02, 0xf2, 0x56, 0x39, 0xdc, 0x5c,
  0x39, 0x5c, 0x4d, 0x39, 0x5c, 0x5d, 0x39, 0xdc, 0x83, 0x72, 0xb8, 0xa5,
  0xe5, 0x43, 0x12, 0xe7, 0x7c, 0x77, 0xaf, 0x8e, 0x4b, 0x8e, 0x84, 0x5f,
  0x0a, 0x48, 0xd1, 0x6f, 0xe9, 0x7f, 0xc3, 0x75, 0xa8, 0xca, 0xf8, 0xe1,
  0x9d, 0xd3, 0x24, 0xff, 0xaa, 0xbe, 0x09, 0x37, 0xa0, 0x2a, 0xf5, 0x70,
  0xd2, 0x97, 0xa5, 0xf4, 0x6c, 0x29, 0xbd, 0xce, 0x49, 0x3f, 0xa1, 0x3c,
  0x52, 0x95, 0xd2, 0x96, 0xfb, 0x77, 0x94, 0xdf, 0xe7, 0xd6, 0xca, 0xe1,
  0x5e, 0x94, 0xc3, 0xc5, 0xca, 0xe1, 0x22, 0xe5, 0x70, 0x3d, 0xe5, 0x70,
  0x89, 0x72, 0xb8, 0xbe, 0xad, 0xea, 0x65, 0x19, 0xb6, 0x33, 0xc4, 0xd4,
  0xe4, 0xa9, 0x1c, 0xa0, 0xfe, 0x88, 0xf0, 0xee, 0x28, 0xd2, 0x7c, 0x79,
  0x97, 0x53, 0x2c, 0xd5, 0xb1, 0x4c, 0x6b, 0xa8, 0xbc, 0xc9, 0xe6, 0x9b,
  0x72, 0xb8, 0x91, 0x72, 0xb8, 0x40, 0xef, 0xb8, 0xea, 0xab, 0x86, 0xbb,
  0x45, 0xed, 0xf3, 0x99, 0x2c, 0x65, 0x3f, 0xcb, 0x5a, 0x2f, 0x40, 0x77,
  0x4a, 0x57, 0x79, 0xeb, 0x7d, 0x4d, 0x39, 0x5c, 0xa0, 0x7b, 0x7c, 0x8e,
  0xf4, 0x2c, 0x97, 0x59, 0x3d, 0xc7, 0x5a, 0x95, 0xf4, 0x34, 0x9e, 0x95,
  0x0f, 0x07, 0xf6, 0x00, 0xc8, 0x1e, 0x9b, 0xf0, 0xb1, 0x23, 0xba, 0xcd,
  0x59, 0xb1, 0xfe, 0xd0, 0xc1, 0x50, 0xf9, 0x10, 0x7c, 0x0d, 0xd0, 0xbd,
  0xe9, 0x7c, 0x9d, 0x6a, 0xab, 0xef, 0xa9, 0x15, 0x7f, 0x7c, 0xeb, 0x5e,
  0xb9, 0xd8, 0xcb, 0xc0, 0xfd, 0x2e, 0x6c, 0xd9, 0xa9, 0x16, 0xa3, 0xdb,
  0x79, 0x52, 0x2e, 0x8d, 0x75, 0x87, 0x3d, 0xc9, 0x12, 0x06, 0x8a, 0xc5,
  0x72, 0x4f, 0xf4, 0xc7, 0x7a, 0xa2, 0x8a, 0x8e, 0x81, 0x8e, 0x9c, 0x99,
  0xe9, 0x96, 0x94, 0x25, 0x6b, 0xd6, 0x1b, 0x44, 0x9d, 0x32, 0x31, 0xdc,
  0x92, 0xed, 0x9c, 0x7b, 0x4b, 0xfd, 0x54, 0xd3, 0xf2, 0xcd, 0x76, 0x41,
  0xbc, 0x80, 0x72, 0x79, 0xf1, 0x81, 0x62, 0xf3, 0x93, 0x03, 0xd5, 0x26,
  0x1a, 0x3b, 0x7d, 0x03, 0xdd, 0xde, 0x33, 0xd3, 0xed, 0x7f, 0x42, 0xf6,
  0x55, 0x5b, 0x0e, 0x7d, 0x3c, 0x70, 0x3a, 0x9f, 0xc1, 0x3a, 0x82, 0xbd,
  0xe7, 0x0e, 0x96, 0xf8, 0x88, 0x48, 0xa9, 0xcb, 0x50, 0xae, 0x97, 0xe5,
  0xab, 0x48, 0xb3, 0xe1, 0xe3, 0x1e, 0x2e, 0xb0, 0xa6, 0x4d, 0x81, 0x6c,
  0x3f, 0x4b, 0xf2, 0x01, 0xc7, 0xa4, 0x5a, 0xd8, 0x78, 0xc2, 0xed, 0x3a,
  0x07, 0x62, 0x6d, 0xd2, 0xd3, 0x76, 0xb3, 0x34, 0xbb, 0x1b, 0x0c, 0x6f,
  0xa8, 0x2d, 0xe5, 0x3e, 0xde, 0x10, 0xeb, 0x6b, 0xd9, 0xc4, 0x6f, 0x92,
  0xb7, 0xdd, 0x0c, 0x80, 0x6a, 0xbb, 0xf4, 0x2e, 0x0e, 0x04, 0xfb, 0x6e,
  0x7b, 0x38, 0xcf, 0xea, 0x4f, 0xad, 0x10, 0xe7, 0xd8, 0xfd, 0xbe, 0xee,
  0x23, 0x3d, 0x2b, 0xe7, 0xb3, 0x3a, 0x38, 0xcf, 0xea, 0x07, 0xf6, 0x00,
  0xd9, 0x6d, 0xe8, 0xb6, 0x3f, 0xd9, 0x24, 0xaf, 0xcc, 0x0e, 0xde, 0x53,
  0x79, 0x10, 0x6b, 0x21, 0x3d, 0x2b, 0xdb, 0x6f, 0x7c, 0xfc, 0x4b, 0x67,
  0x35, 0x9f, 0xe0, 0x6a, 0xae, 0xd6, 0xba, 0x79, 0xc0, 0x05, 0x8c, 0x7e,
  0x55, 0xe9, 0xe1, 0x88, 0xd4, 0xa4, 0x19, 0x20, 0x15, 0x4b, 0xbd, 0xfd,
  0x87, 0x0d, 0x64, 0xe5, 0xfc, 0x0f, 0xf3, 0x1e, 0x32, 0x31, 0xd1, 0xdf,
  0xbf, 0x83, 0x4b, 0x98, 0x7c, 0x7f, 0x8d, 0xf0, 0x97, 0xdc, 0xe0, 0xf9,
  0x28, 0xce, 0xe2, 0x99, 0x55, 0x1a, 0x21, 0x4f, 0x4e, 0x6d, 0xee, 0x8b,
  0x1b, 0xb8, 0x82, 0xd3, 0xbf, 0x12, 0xd6, 0x8f, 0x28, 0x83, 0x57, 0x63,
  0xf9, 0xda, 0xf8, 0x84, 0xfd, 0x78, 0x6d, 0x94, 0x6a, 0xce, 0xd2, 0x74,
  0x3b, 0x48, 0xc7, 0xce, 0xab, 0x50, 0x1c, 0xa2, 0x12, 0x8b, 0x98, 0x45,
  0x4b, 0x50, 0xa1, 0xe6, 0x13, 0x8b, 0x53, 0x7f, 0x44, 0xc5, 0xbc, 0xe4,
  0x07, 0x8b, 0x10, 0xb7, 0xe0, 0x86, 0xe6, 0x0d, 0xf3, 0x35, 0xf3, 0xe1,
  0x92, 0xd6, 0x8a, 0x39, 0xb9, 0x49, 0x26, 0x70, 0x50, 0x67, 0x36, 0xbc,
  0x36, 0xd8, 0xb8, 0x01, 0x87, 0x35, 0xee, 0x62, 0x66, 0xb2, 0xae, 0xb5,
  0x61, 0x43, 0x7b, 0x34, 0x1d, 0xf2, 0x52, 0xdd, 0xfa, 0x6d, 0xe5, 0xd3,
  0x62, 0x06, 0xad, 0xe6, 0x3c, 0xba, 0x7f, 0xfe, 0x2c, 0xd3, 0xb7, 0xd5,
  0x78, 0xb0, 0x80, 0x0e, 0x0f, 0xff, 0xe5, 0xe5, 0x27, 0x3d, 0x29, 0x73,
  0x3c, 0x47, 0x66, 0xec, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
  0x44, 0xae, 0x42, 0x60, 0x82
};
unsigned int ORB_png_len = 1421;

#ifdef __cplusplus
};
#endif

#endif /* _YMAGINE_DESIGN_ORB_H */
/*
 * Copyright (C) 2019-2021 OpenBikeSensor Contributors
 * Contact: https://openbikesensor.org
 *
 * This file is part of the OpenBikeSensor firmware.
 *
 * The OpenBikeSensor firmware is free software: you can
 * redistribute it and/or modify it under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * OpenBikeSensor firmware is distributed in the hope that
 * it will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with the OpenBikeSensor firmware.  If not,
 * see <http://www.gnu.org/licenses/>.
 */

#ifndef PRIVATE_KEY_H_
#define PRIVATE_KEY_H_
unsigned char obs_key_DER[] = {
  0x30, 0x82, 0x02, 0x5c, 0x02, 0x01, 0x00, 0x02, 0x81, 0x81, 0x00, 0xad,
  0x10, 0x47, 0xa1, 0x65, 0x1d, 0xce, 0x28, 0x88, 0xed, 0x7f, 0xf7, 0xb6,
  0xe8, 0xd7, 0xb6, 0xbc, 0x3c, 0x34, 0x28, 0xce, 0x8d, 0xa2, 0xf0, 0x44,
  0x55, 0x5a, 0x45, 0xdf, 0x3b, 0x4d, 0x9d, 0x1c, 0xe4, 0xe3, 0xcc, 0xe2,
  0x92, 0x4c, 0x63, 0xd9, 0xeb, 0xfa, 0x6b, 0x0b, 0xbe, 0x21, 0x18, 0xe1,
  0xf9, 0x4e, 0x44, 0x5c, 0x0b, 0x15, 0x51, 0x18, 0x64, 0xad, 0xa9, 0x12,
  0xb3, 0xe5, 0xa3, 0x05, 0x1c, 0x61, 0x82, 0x27, 0x05, 0x19, 0x63, 0x85,
  0xd0, 0x88, 0x95, 0xaa, 0xfc, 0xc5, 0xc7, 0x4d, 0x9f, 0x89, 0x4d, 0x8c,
  0x6f, 0x8a, 0xe2, 0xad, 0x56, 0x7a, 0x6f, 0xc0, 0x01, 0xe6, 0x5d, 0x3a,
  0x4f, 0x23, 0x81, 0xeb, 0x25, 0xa3, 0x90, 0x67, 0x5e, 0x91, 0x9d, 0x8f,
  0x6b, 0x33, 0x5c, 0x64, 0xc7, 0x7a, 0x14, 0x4b, 0x91, 0x92, 0x57, 0x6c,
  0xe9, 0x63, 0xb8, 0xfa, 0x79, 0x55, 0x0f, 0x02, 0x03, 0x01, 0x00, 0x01,
  0x02, 0x81, 0x80, 0x6e, 0x7b, 0x4c, 0x1f, 0x3e, 0x9c, 0x2e, 0x76, 0x36,
  0x23, 0xd8, 0x63, 0xdd, 0x82, 0xfb, 0xe3, 0x0e, 0x7c, 0x28, 0x98, 0x3c,
  0x74, 0xb3, 0x26, 0x4b, 0x99, 0x69, 0x8d, 0xdd, 0x9a, 0xd0, 0x4b, 0x92,
  0x9c, 0x94, 0xc8, 0xc1, 0x83, 0xbf, 0xfc, 0xa6, 0xac, 0x3d, 0x2b, 0x85,
  0x4d, 0x95, 0x77, 0x7b, 0x1b, 0x5a, 0xd9, 0xcd, 0x20, 0xce, 0x34, 0xfd,
  0x2b, 0x98, 0xa9, 0xac, 0xe4, 0xe7, 0x9d, 0x83, 0xda, 0x03, 0xd3, 0x43,
  0xac, 0xd9, 0x22, 0x7b, 0x4f, 0x5c, 0x58, 0x7b, 0x2b, 0x1e, 0x8f, 0x23,
  0xad, 0xfe, 0x85, 0x34, 0x60, 0x6c, 0x5d, 0x71, 0x6a, 0x24, 0x94, 0x2c,
  0xf8, 0xaa, 0xec, 0xd0, 0xe5, 0x51, 0xfd, 0x07, 0xbf, 0xf0, 0xaf, 0xe9,
  0x9d, 0xe7, 0xa0, 0x83, 0xdd, 0xed, 0x2b, 0xad, 0x85, 0x63, 0x6a, 0x6c,
  0x23, 0x6f, 0x66, 0xc2, 0xf5, 0x24, 0xda, 0x9e, 0x8f, 0xb1, 0x91, 0x02,
  0x41, 0x00, 0xd7, 0xef, 0x5d, 0x61, 0x60, 0xc8, 0x96, 0x7a, 0xc6, 0x82,
  0x17, 0x45, 0xc2, 0x5c, 0xba, 0x66, 0x0c, 0x78, 0x3d, 0x0d, 0x4f, 0x23,
  0x42, 0xdc, 0x1c, 0x88, 0xf8, 0x8e, 0x5b, 0xe9, 0x39, 0x4a, 0x75, 0x83,
  0x1e, 0x52, 0x4e, 0x4a, 0x85, 0x1f, 0x6d, 0x6d, 0x21, 0x3b, 0x42, 0x21,
  0x7c, 0x47, 0xac, 0x7e, 0x0a, 0xb8, 0xf4, 0xc3, 0x06, 0x33, 0xb1, 0xb0,
  0x02, 0x59, 0xa5, 0x20, 0x46, 0x8d, 0x02, 0x41, 0x00, 0xcd, 0x2c, 0x93,
  0xda, 0x0b, 0x2b, 0xa7, 0xb6, 0x43, 0x9f, 0x04, 0x82, 0x06, 0x63, 0xc0,
  0x46, 0x93, 0x2c, 0xfc, 0xb5, 0xff, 0x44, 0x78, 0x1b, 0xb9, 0xd6, 0x96,
  0x76, 0x56, 0xaa, 0x9f, 0x8d, 0xc8, 0x71, 0x65, 0x14, 0x0a, 0xf6, 0xf1,
  0xd9, 0x1d, 0xfb, 0xf4, 0xae, 0xd6, 0xe5, 0xdf, 0xb3, 0x41, 0x38, 0x4f,
  0x09, 0xca, 0x38, 0xa3, 0x80, 0x06, 0x95, 0x97, 0xa9, 0x01, 0xfe, 0xc1,
  0x0b, 0x02, 0x40, 0x65, 0xaa, 0x85, 0x44, 0xbb, 0xd4, 0xb5, 0x44, 0xc9,
  0x01, 0xa7, 0x03, 0x69, 0x27, 0x4f, 0x7b, 0x8c, 0x93, 0x6f, 0xeb, 0x3c,
  0x3f, 0x55, 0xd3, 0x5c, 0x7c, 0x00, 0xca, 0xc5, 0xeb, 0x60, 0xd5, 0xf5,
  0xcd, 0xee, 0x10, 0xc2, 0x5b, 0xc3, 0xa1, 0xb0, 0x5b, 0x99, 0x31, 0xd5,
  0x48, 0xfe, 0xc2, 0xa0, 0x2c, 0x17, 0xd0, 0x4d, 0x2d, 0x25, 0x56, 0x61,
  0x6a, 0x85, 0x30, 0xbf, 0xd6, 0x1a, 0x61, 0x02, 0x40, 0x35, 0xd0, 0xe9,
  0x7f, 0x19, 0xca, 0xfb, 0x94, 0x9d, 0x2c, 0x0a, 0x9c, 0xa8, 0x5c, 0x65,
  0xc4, 0x9d, 0x3a, 0x01, 0x97, 0x23, 0x3b, 0xac, 0x5d, 0x69, 0x63, 0x55,
  0xd7, 0xf8, 0x67, 0x8c, 0xae, 0x3d, 0xd3, 0x30, 0x76, 0x0f, 0x62, 0x32,
  0x91, 0x86, 0x81, 0xdd, 0xee, 0x36, 0x43, 0xd9, 0x67, 0x45, 0x46, 0x25,
  0xc5, 0x25, 0x9b, 0xb1, 0x97, 0x15, 0x23, 0x0b, 0xc2, 0xb2, 0xd9, 0x45,
  0x7d, 0x02, 0x41, 0x00, 0x93, 0xde, 0x40, 0xb4, 0xc6, 0x26, 0x4d, 0x9e,
  0x5e, 0xe9, 0xaa, 0x9e, 0xf2, 0x00, 0xa7, 0xb1, 0x75, 0x38, 0x95, 0xc4,
  0xb7, 0x99, 0xd5, 0x5b, 0x27, 0x42, 0xb4, 0xaa, 0xd6, 0xc2, 0x42, 0x65,
  0x96, 0x6c, 0xab, 0x49, 0xff, 0xbb, 0x54, 0x71, 0x5b, 0x0a, 0x8d, 0xb2,
  0x9a, 0x78, 0x8f, 0x82, 0x8c, 0x37, 0x61, 0x42, 0xc8, 0x00, 0x2d, 0x03,
  0x2c, 0x55, 0xbc, 0x1b, 0x5a, 0x17, 0x31, 0x02
};
unsigned int obs_key_DER_len = 608;
#endif

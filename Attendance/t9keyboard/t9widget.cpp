#include "t9widget.h"
#include "ui_t9widget.h"
#include <QPushButton>
#include <QTextCodec>
#include <QKeyEvent>
#include <QBitmap>
//#include <QDebug>

namespace RAWRES {
    // Generate By PIC to RAW Conveter, By Leajian
    const unsigned char RES_NUM0_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\num0.png */
            /* File Size: 269 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38,
    /*0x90*/	0xb5, 0x68, 0xd2, 0x78, 0x00, 0x00, 0x00, 0x16,  0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65, 0x61,
    /*0xa0*/	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69, 0x6d,  0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36, 0x2f,
    /*0xb0*/	0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00, 0x00,  0x00, 0x3f, 0x49, 0x44, 0x41, 0x54, 0x18, 0x95,
    /*0xc0*/	0x63, 0x60, 0xc0, 0x0d, 0x98, 0x1a, 0xa0, 0x0c,  0x0e, 0x05, 0x28, 0x43, 0x81, 0x83, 0x04, 0x06,
    /*0xd0*/	0x5c, 0x17, 0xdc, 0x1c, 0xea, 0x01, 0xc6, 0x90,  0x90, 0xd0, 0x00, 0x30, 0x83, 0x41, 0xc0, 0xc5,
    /*0xe0*/	0x05, 0x2c, 0x14, 0x20, 0xc8, 0x02, 0x61, 0xb0,  0xb0, 0x42, 0x18, 0x8c, 0x21, 0x2c, 0x50, 0x11,
    /*0xf0*/	0x06, 0x16, 0x98, 0xbe, 0x00, 0xac, 0xa6, 0x01,  0x00, 0x7e, 0x66, 0x05, 0xf3, 0x8e, 0x40, 0xca,
    /*0x100*/	0x40, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,  0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM1_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\num1.png */
            /* File Size: 256 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38,
    /*0x90*/	0xb5, 0x68, 0xd2, 0x78, 0x00, 0x00, 0x00, 0x16,  0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65, 0x61,
    /*0xa0*/	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69, 0x6d,  0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36, 0x2f,
    /*0xb0*/	0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00, 0x00,  0x00, 0x32, 0x49, 0x44, 0x41, 0x54, 0x18, 0x95,
    /*0xc0*/	0x63, 0x60, 0xc0, 0x03, 0x1a, 0xa0, 0x34, 0x57,  0x03, 0xba, 0x08, 0x49, 0x0c, 0xae, 0x15, 0xf8,
    /*0xd0*/	0x2c, 0xc1, 0x0b, 0x58, 0x1d, 0x60, 0x2c, 0x54,  0x06, 0x6b, 0x40, 0xa0, 0x03, 0x98, 0xc1, 0xc8,
    /*0xe0*/	0x22, 0x80, 0x8b, 0xc1, 0xea, 0xca, 0x1a, 0x1a,  0x42, 0x94, 0x2d, 0x00, 0xc2, 0x55, 0x09, 0x5f,
    /*0xf0*/	0xb5, 0xf0, 0xae, 0x3e, 0x00, 0x00, 0x00, 0x00,  0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM2_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num2.png */
            /* File Size: 275 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x44, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0x98, 0x16, 0x40,  0x19, 0x1c, 0x1c, 0xe8, 0x0c, 0x06, 0x38, 0x43,
    /*0xd0*/	0x01, 0xc6, 0x68, 0x80, 0xe9, 0x62, 0x40, 0x57,  0xcc, 0xb5, 0x02, 0x8f, 0x25, 0x78, 0x41, 0x00,
    /*0xe0*/	0x8c, 0x21, 0x80, 0xce, 0x08, 0x10, 0x65, 0x08,  0x01, 0xd1, 0x8c, 0x2c, 0x02, 0x8e, 0x2c, 0x60,
    /*0xf0*/	0x91, 0x10, 0x01, 0x47, 0x06, 0x98, 0x08, 0x44,  0x4d, 0x28, 0x54, 0x0d, 0x41, 0x00, 0x00, 0x73,
    /*0x100*/	0x51, 0x05, 0x6b, 0xbc, 0x7d, 0xc5, 0x49, 0x00,  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
    /*0x110*/	0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM3_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num3.png */
            /* File Size: 275 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x44, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0x98, 0x16, 0x40,  0x19, 0x1c, 0x1c, 0xe8, 0x0c, 0x06, 0x98, 0x14,
    /*0xd0*/	0x03, 0x07, 0x3a, 0x03, 0x53, 0x31, 0xdc, 0x1c,  0x52, 0x81, 0x08, 0x03, 0x83, 0x28, 0x98, 0xc1,
    /*0xe0*/	0xc2, 0xc0, 0xe0, 0x80, 0xca, 0x08, 0x61, 0x65,  0x0c, 0x01, 0xd1, 0x8c, 0x2c, 0x02, 0x0e, 0x0e,
    /*0xf0*/	0x10, 0x86, 0x28, 0x8c, 0x21, 0x00, 0x55, 0x13,  0xca, 0xea, 0x18, 0x42, 0x94, 0x3d, 0x00, 0xa5,
    /*0x100*/	0xbd, 0x06, 0x07, 0xdb, 0xbf, 0x71, 0xe8, 0x00,  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
    /*0x110*/	0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM4_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num4.png */
            /* File Size: 279 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x48, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x04, 0x0a, 0x18, 0x8c,  0x05, 0x50, 0x9a, 0x09, 0x26, 0xc2, 0x81, 0xc1,
    /*0xd0*/	0x50, 0x80, 0x31, 0xb8, 0x56, 0x60, 0x68, 0x87,  0x8b, 0x90, 0x0a, 0x02, 0x18, 0x1c, 0x20, 0x0c,
    /*0xe0*/	0x01, 0x98, 0x08, 0x8c, 0x11, 0x2a, 0xca, 0x08,  0x96, 0x62, 0x64, 0x11, 0x70, 0x80, 0xa8, 0x09,
    /*0xf0*/	0x80, 0x32, 0x18, 0x19, 0x60, 0x8c, 0x90, 0x90,  0xc0, 0x00, 0x30, 0x83, 0x11, 0xa6, 0x3b, 0x04,
    /*0x100*/	0xbb, 0x35, 0x00, 0x71, 0x38, 0x08, 0x0e, 0xfc,  0x98, 0xab, 0x89, 0x00, 0x00, 0x00, 0x00, 0x49,
    /*0x110*/	0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM5_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num5.png */
            /* File Size: 275 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x44, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0xb8, 0x56, 0x40,  0x19, 0x1c, 0x0c, 0xe8, 0x0c, 0xae, 0x05, 0x30,
    /*0xd0*/	0x11, 0x0c, 0x39, 0x0e, 0x0c, 0x06, 0x13, 0x4c,  0x31, 0xa9, 0x40, 0x20, 0x80, 0xd5, 0x01, 0xca,
    /*0xe0*/	0x62, 0x40, 0x63, 0x04, 0x08, 0x06, 0x40, 0x18,  0x02, 0x82, 0x50, 0x11, 0x01, 0x51, 0x18, 0x43,
    /*0xf0*/	0xc0, 0x01, 0xca, 0x08, 0x09, 0x0d, 0x81, 0x6a,  0x82, 0x00, 0x98, 0x69, 0xe8, 0x00, 0x00, 0x04,
    /*0x100*/	0x24, 0x07, 0x45, 0x6c, 0x66, 0x29, 0x96, 0x00,  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
    /*0x110*/	0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM6_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num6.png */
            /* File Size: 262 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x37, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0x98, 0x56, 0x40,  0x19, 0x1c, 0x1c, 0x50, 0x86, 0x02, 0x4c, 0x4a,
    /*0xd0*/	0x69, 0x01, 0x94, 0xa1, 0x01, 0x97, 0xc2, 0xcd,  0xe0, 0x82, 0x29, 0xa6, 0x1e, 0x60, 0x0d, 0x08,
    /*0xe0*/	0x65, 0x08, 0x00, 0x31, 0x58, 0x5c, 0x04, 0x1c,  0x59, 0x70, 0x31, 0x42, 0x02, 0x02, 0x88, 0x32,
    /*0xf0*/	0x0d, 0x00, 0x28, 0x07, 0x06, 0xfc, 0xab, 0x02,  0xf8, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    /*0x100*/	0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM7_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num7.png */
            /* File Size: 274 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x43, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0xb8, 0x56, 0x40,  0x19, 0x1c, 0x1c, 0x30, 0x86, 0x02, 0x4c, 0x0e,
    /*0xd0*/	0xce, 0x68, 0x20, 0x85, 0x41, 0x2d, 0x10, 0xca,  0x10, 0x12, 0xe8, 0x18, 0x02, 0x64, 0x08, 0x38,
    /*0xe0*/	0xb2, 0x88, 0x30, 0x32, 0x40, 0x18, 0x02, 0x0c,  0x01, 0x30, 0x06, 0x0b, 0x90, 0x21, 0xca, 0x10,
    /*0xf0*/	0x12, 0xc2, 0x08, 0x56, 0x03, 0xe6, 0x02, 0x41,  0x08, 0x50, 0x0c, 0x2b, 0x00, 0x00, 0xb1, 0x3d,
    /*0x100*/	0x08, 0x31, 0x8e, 0xaa, 0x11, 0x17, 0x00, 0x00,  0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
    /*0x110*/	0x60, 0x82,
    };
    const unsigned char RES_NUM8_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num8.png */
            /* File Size: 264 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x39, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0xb8, 0x16, 0x40,  0x19, 0x0a, 0x1c, 0xe8, 0x0c, 0x0e, 0x05, 0xc2,
    /*0xd0*/	0x6a, 0xe0, 0x0c, 0xb8, 0x1a, 0xb2, 0x81, 0x03,  0x3a, 0x83, 0x31, 0x20, 0xd0, 0xd5, 0x15, 0x22,
    /*0xe0*/	0x22, 0xe0, 0xc8, 0x02, 0x63, 0x08, 0x40, 0x19,  0x0e, 0x01, 0x60, 0x86, 0x08, 0x6b, 0x00, 0x5c,
    /*0xf0*/	0x23, 0x5e, 0x00, 0x00, 0x55, 0x3e, 0x07, 0x5a,  0x15, 0x49, 0x52, 0x1a, 0x00, 0x00, 0x00, 0x00,
    /*0x100*/	0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_NUM9_PNG[] = {
            /* Source File: E:\SmartHome\Qt_Test_Project\T9_Test\pic\num9.png */
            /* File Size: 285 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x02, 0x03, 0x00, 0x00, 0x00, 0x2b, 0xfd, 0x8f,
    /*0x20*/	0x9c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x66, 0x66, 0x66, 0x00, 0x00,
    /*0x40*/	0x00, 0xa8, 0xc3, 0x6f, 0x28, 0x00, 0x00, 0x00,  0x03, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xff, 0xff,
    /*0x50*/	0x44, 0x50, 0xd6, 0x21, 0x00, 0x00, 0x00, 0x09,  0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x00, 0x00, 0x0b, 0x12, 0x01, 0xd2, 0xdd, 0x7e,  0xfc, 0x00, 0x00, 0x00, 0x20, 0x74, 0x45, 0x58,
    /*0x70*/	0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72,  0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d,
    /*0x80*/	0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72,  0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x4d,
    /*0x90*/	0x58, 0xbb, 0x91, 0x2a, 0x24, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0xa0*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0xb0*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x4e, 0x49, 0x44, 0x41, 0x54, 0x78,
    /*0xc0*/	0x9c, 0x63, 0x60, 0xc0, 0x0d, 0xb8, 0x16, 0x40,  0x19, 0x0a, 0x1c, 0xb8, 0x19, 0x1a, 0x30, 0xc5,
    /*0xd0*/	0x1d, 0x30, 0x6d, 0x70, 0x29, 0x05, 0x28, 0x43,  0xab, 0x01, 0x8f, 0x25, 0x64, 0x01, 0x17, 0x57,
    /*0xe0*/	0x91, 0x90, 0xc0, 0x10, 0x10, 0xc3, 0x51, 0x40,  0xc0, 0x41, 0x00, 0xc8, 0x10, 0x65, 0x70, 0x10,
    /*0xf0*/	0x64, 0x70, 0x00, 0x32, 0x04, 0x19, 0x05, 0x58,  0x21, 0x0c, 0x56, 0x11, 0x16, 0xc6, 0x10, 0x88,
    /*0x100*/	0x7a, 0x16, 0x98, 0xc6, 0x00, 0xac, 0xc6, 0x01,  0x00, 0x4a, 0xef, 0x07, 0x5e, 0x97, 0xe5, 0x9e,
    /*0x110*/	0x73, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,  0x44, 0xae, 0x42, 0x60, 0x82,
    };
    struct RESINFO {
        const unsigned char *pic;
        const long size;
    } numMap[] = {
        { RES_NUM0_PNG, sizeof(RES_NUM0_PNG) },
        { RES_NUM1_PNG, sizeof(RES_NUM1_PNG) },
        { RES_NUM2_PNG, sizeof(RES_NUM2_PNG) },
        { RES_NUM3_PNG, sizeof(RES_NUM3_PNG) },
        { RES_NUM4_PNG, sizeof(RES_NUM4_PNG) },
        { RES_NUM5_PNG, sizeof(RES_NUM5_PNG) },
        { RES_NUM6_PNG, sizeof(RES_NUM6_PNG) },
        { RES_NUM7_PNG, sizeof(RES_NUM7_PNG) },
        { RES_NUM8_PNG, sizeof(RES_NUM8_PNG) },
        { RES_NUM9_PNG, sizeof(RES_NUM9_PNG) },
    };

    const unsigned char RES_SYS0_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys0.png */
            /* File Size: 243 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x29, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x19,
    /*0xc0*/	0xb0, 0x1f, 0x00, 0x12, 0x8c, 0x0c, 0x70, 0x42,  0x9a, 0x1f, 0x48, 0xf0, 0x4c, 0x04, 0x12, 0x1c,
    /*0xd0*/	0x3d, 0x20, 0xa2, 0x09, 0x44, 0x00, 0xb9, 0xec,  0x77, 0xef, 0x91, 0x6e, 0x38, 0x03, 0x00, 0x4a,
    /*0xe0*/	0x8d, 0x05, 0x0f, 0xa5, 0x77, 0x7b, 0xc4, 0x00,  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae,
    /*0xf0*/	0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS1_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys1.png */
            /* File Size: 253 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x33, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x19,
    /*0xc0*/	0x94, 0x1b, 0xde, 0xff, 0xc0, 0xa0, 0xe4, 0x71,  0x53, 0x80, 0x41, 0xa9, 0xe5, 0x26, 0x03, 0x88,
    /*0xd0*/	0x50, 0x60, 0xb0, 0x6b, 0x59, 0xf9, 0x00, 0xc8,  0x5a, 0xa9, 0x00, 0x22, 0x80, 0x62, 0x1e, 0x2b,
    /*0xe0*/	0x05, 0x80, 0xea, 0xd6, 0x7f, 0x20, 0xdd, 0x74,  0x00, 0x60, 0x1b, 0x0f, 0x5c, 0xae, 0x66, 0xe8,
    /*0xf0*/	0xbf, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,  0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS2_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys2.png */
            /* File Size: 226 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x18, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x16,
    /*0xc0*/	0xb0, 0xc0, 0x09, 0x3e, 0x10, 0x21, 0x8a, 0x2a,  0x46, 0x2c, 0x41, 0x10, 0x00, 0x00, 0x19, 0x77,
    /*0xd0*/	0x00, 0x54, 0x93, 0x27, 0xa9, 0x0a, 0x00, 0x00,  0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
    /*0xe0*/	0x60, 0x82,
    };
    const unsigned char RES_SYS3_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys3.png */
            /* File Size: 256 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x36, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x19,
    /*0xc0*/	0xd4, 0x30, 0xde, 0x61, 0x60, 0x50, 0x62, 0xe8,  0x80, 0x11, 0x36, 0xdd, 0x0f, 0x18, 0x6c, 0x3c,
    /*0xd0*/	0x3a, 0x05, 0x18, 0x14, 0xc0, 0x84, 0x01, 0x88,  0x70, 0x00, 0x12, 0x05, 0x15, 0x85, 0x0f, 0x18,
    /*0xe0*/	0x18, 0x5c, 0x18, 0x81, 0x5a, 0x2c, 0x98, 0x1b,  0x88, 0x35, 0x1d, 0x00, 0x1c, 0x2d, 0x0b, 0xb0,
    /*0xf0*/	0x37, 0x7b, 0x40, 0x58, 0x00, 0x00, 0x00, 0x00,  0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS4_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys4.png */
            /* File Size: 228 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x1a, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0xa0, 0x18,
    /*0xc0*/	0x28, 0x80, 0x88, 0x03, 0x40, 0xcc, 0xf8, 0xff,  0x07, 0x94, 0x05, 0x11, 0x23, 0x0b, 0x00, 0x00,
    /*0xd0*/	0xfc, 0x7a, 0x03, 0xb9, 0x8d, 0x2d, 0x7c, 0xb7,  0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    /*0xe0*/	0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS5_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys5.png */
            /* File Size: 248 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x2e, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x19,
    /*0xc0*/	0xf0, 0x3f, 0x30, 0x60, 0x60, 0xe0, 0x54, 0x10,  0x60, 0x60, 0x60, 0x64, 0x00, 0x11, 0xec, 0x72,
    /*0xd0*/	0x40, 0x82, 0x63, 0x22, 0x90, 0x60, 0x06, 0x11,  0x2c, 0x13, 0xa1, 0x5c, 0xe6, 0xf6, 0x7b, 0xa4,
    /*0xe0*/	0x1b, 0xce, 0x00, 0x00, 0x6f, 0xf7, 0x05, 0x57,  0xf2, 0xb5, 0xf1, 0x80, 0x00, 0x00, 0x00, 0x00,
    /*0xf0*/	0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS6_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys6.png */
            /* File Size: 228 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x1a, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0xa0, 0x1c,
    /*0xc0*/	0x38, 0x80, 0x08, 0x03, 0x06, 0x06, 0xc6, 0xff,  0x3f, 0xa0, 0x2c, 0xa8, 0x18, 0x39, 0x00, 0x00,
    /*0xd0*/	0xc0, 0x1a, 0x02, 0xd9, 0xb3, 0x69, 0x4c, 0x9a,  0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
    /*0xe0*/	0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS7_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys7.png */
            /* File Size: 250 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x30, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x19,
    /*0xc0*/	0xf0, 0x1f, 0x60, 0x66, 0x60, 0x60, 0x71, 0x60,  0x04, 0x12, 0x0c, 0x20, 0x62, 0x36, 0x3f, 0x03,
    /*0xd0*/	0x03, 0x7b, 0xcf, 0x44, 0x20, 0xab, 0x03, 0x44,  0x70, 0x80, 0x08, 0x0f, 0x20, 0xc1, 0x7f, 0xf7,
    /*0xe0*/	0x7c, 0x03, 0xe9, 0xa6, 0x03, 0x00, 0x05, 0x4e,  0x07, 0xc1, 0x75, 0xf7, 0x47, 0x00, 0x00, 0x00,
    /*0xf0*/	0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,  0x60, 0x82,
    };
    const unsigned char RES_SYS8_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys8.png */
            /* File Size: 224 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x16, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x16,
    /*0xc0*/	0xb0, 0x90, 0x47, 0x88, 0x82, 0x08, 0x3e, 0x54,  0x31, 0x7c, 0x00, 0x00, 0x15, 0x5f, 0x00, 0x58,
    /*0xd0*/	0x57, 0x2f, 0x90, 0x75, 0x00, 0x00, 0x00, 0x00,  0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_SYS9_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\sys9.png */
            /* File Size: 261 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66,
    /*0x70*/	0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61,  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61,
    /*0x80*/	0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72,  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78,
    /*0x90*/	0x00, 0x00, 0x00, 0x16, 0x74, 0x45, 0x58, 0x74,  0x43, 0x72, 0x65, 0x61, 0x74, 0x69, 0x6f, 0x6e,
    /*0xa0*/	0x20, 0x54, 0x69, 0x6d, 0x65, 0x00, 0x31, 0x32,  0x2f, 0x32, 0x36, 0x2f, 0x31, 0x30, 0x03, 0x58,
    /*0xb0*/	0xcb, 0x2a, 0x00, 0x00, 0x00, 0x3b, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x20, 0x19,
    /*0xc0*/	0xd4, 0x30, 0x3e, 0x60, 0x60, 0x50, 0x62, 0x98,  0x00, 0x22, 0x3a, 0x80, 0x84, 0x4d, 0x77, 0x02,
    /*0xd0*/	0x83, 0x8d, 0x47, 0xe7, 0x04, 0x06, 0x05, 0x8f,  0x4e, 0x01, 0x06, 0x05, 0x03, 0x10, 0xe1, 0x30,
    /*0xe0*/	0x51, 0x80, 0xa1, 0xa0, 0xf2, 0xf1, 0x0e, 0x06,  0x06, 0x17, 0x90, 0x16, 0x0b, 0xe2, 0x4d, 0x07,
    /*0xf0*/	0x00, 0x19, 0xd5, 0x0b, 0x8b, 0x1a, 0x26, 0x79,  0x38, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e,
    /*0x100*/	0x44, 0xae, 0x42, 0x60, 0x82,
    };
    RESINFO sysMap[] = {
        { RES_SYS0_PNG, sizeof(RES_SYS0_PNG) },
        { RES_SYS1_PNG, sizeof(RES_SYS1_PNG) },
        { RES_SYS2_PNG, sizeof(RES_SYS2_PNG) },
        { RES_SYS3_PNG, sizeof(RES_SYS3_PNG) },
        { RES_SYS4_PNG, sizeof(RES_SYS4_PNG) },
        { RES_SYS5_PNG, sizeof(RES_SYS5_PNG) },
        { RES_SYS6_PNG, sizeof(RES_SYS6_PNG) },
        { RES_SYS7_PNG, sizeof(RES_SYS7_PNG) },
        { RES_SYS8_PNG, sizeof(RES_SYS8_PNG) },
        { RES_SYS9_PNG, sizeof(RES_SYS9_PNG) },
    };
#if 0
    const unsigned char RES_1_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\1.png */
            /* File Size: 225 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0x70*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0x80*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53,
    /*0x90*/	0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00,  0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64,
    /*0xa0*/	0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77,  0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68,
    /*0xb0*/	0xd2, 0x78, 0x00, 0x00, 0x00, 0x17, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x40, 0x05,
    /*0xc0*/	0x1c, 0x20, 0xc2, 0x02, 0xce, 0xc2, 0x49, 0xd8,  0x31, 0xd0, 0x08, 0x00, 0x00, 0x49, 0x3f, 0x00,
    /*0xd0*/	0xaf, 0x63, 0xc2, 0xcd, 0xb6, 0x00, 0x00, 0x00,  0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60,
    /*0xe0*/	0x82,
    };
    const unsigned char RES_2_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\2.png */
            /* File Size: 233 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0x70*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0x80*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53,
    /*0x90*/	0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00,  0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64,
    /*0xa0*/	0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77,  0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68,
    /*0xb0*/	0xd2, 0x78, 0x00, 0x00, 0x00, 0x1f, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x40, 0x05,
    /*0xc0*/	0x32, 0x20, 0x42, 0x09, 0x4e, 0x30, 0x81, 0x08,  0x16, 0x10, 0xc1, 0x01, 0x22, 0x04, 0xe0, 0x12,
    /*0xd0*/	0x76, 0x0c, 0x34, 0x02, 0x00, 0x5d, 0x05, 0x00,  0xdf, 0x98, 0xaf, 0x62, 0x2c, 0x00, 0x00, 0x00,
    /*0xe0*/	0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60,  0x82,
    };
    const unsigned char RES_3_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\3.png */
            /* File Size: 230 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0x70*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0x80*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53,
    /*0x90*/	0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00,  0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64,
    /*0xa0*/	0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77,  0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68,
    /*0xb0*/	0xd2, 0x78, 0x00, 0x00, 0x00, 0x1c, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x40, 0x05,
    /*0xc0*/	0x32, 0x20, 0x42, 0x09, 0x4e, 0xf0, 0x80, 0x08,  0x26, 0x38, 0x81, 0x90, 0x90, 0x61, 0xa0, 0x11,
    /*0xd0*/	0x00, 0x00, 0x59, 0x53, 0x00, 0xd1, 0x72, 0x67,  0xb9, 0x83, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45,
    /*0xe0*/	0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
    const unsigned char RES_4_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\4.png */
            /* File Size: 233 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0x70*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0x80*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53,
    /*0x90*/	0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00,  0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64,
    /*0xa0*/	0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77,  0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68,
    /*0xb0*/	0xd2, 0x78, 0x00, 0x00, 0x00, 0x1f, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x80, 0x03,
    /*0xc0*/	0x16, 0x38, 0xc1, 0x03, 0x22, 0x44, 0x40, 0x84,  0x0a, 0x9c, 0x70, 0x01, 0x11, 0x76, 0x70, 0x25,
    /*0xd0*/	0x7c, 0x0c, 0x34, 0x02, 0x00, 0x6d, 0x15, 0x01,  0x05, 0x95, 0x9e, 0x71, 0x7d, 0x00, 0x00, 0x00,
    /*0xe0*/	0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60,  0x82,
    };
    const unsigned char RES_5_PNG[] = {
            /* Source File: F:\My_Qt_Projects\T9_Test\pic\5.png */
            /* File Size: 232 Bytes */
            /* File Format: ԭʼ�ļ�,������ʽת�� */

    /*0x0*/	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a,  0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
    /*0x10*/	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d,  0x01, 0x03, 0x00, 0x00, 0x00, 0x6c, 0x5d, 0xf5,
    /*0x20*/	0x4c, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49,  0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0,
    /*0x30*/	0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45,  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2,
    /*0x40*/	0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52,  0x4e, 0x53, 0x00, 0xff, 0x5b, 0x91, 0x22, 0xb5,
    /*0x50*/	0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73,  0x00, 0x00, 0x0b, 0x12, 0x00, 0x00, 0x0b, 0x12,
    /*0x60*/	0x01, 0xd2, 0xdd, 0x7e, 0xfc, 0x00, 0x00, 0x00,  0x16, 0x74, 0x45, 0x58, 0x74, 0x43, 0x72, 0x65,
    /*0x70*/	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x54, 0x69,  0x6d, 0x65, 0x00, 0x31, 0x32, 0x2f, 0x32, 0x36,
    /*0x80*/	0x2f, 0x31, 0x30, 0x03, 0x58, 0xcb, 0x2a, 0x00,  0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53,
    /*0x90*/	0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00,  0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64,
    /*0xa0*/	0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77,  0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68,
    /*0xb0*/	0xd2, 0x78, 0x00, 0x00, 0x00, 0x1e, 0x49, 0x44,  0x41, 0x54, 0x08, 0x99, 0x63, 0x60, 0x40, 0x05,
    /*0xc0*/	0x76, 0x20, 0x42, 0x01, 0x4e, 0xd8, 0x80, 0x08,  0x25, 0x10, 0xc1, 0x04, 0x67, 0x81, 0x09, 0x19,
    /*0xd0*/	0x06, 0x1a, 0x01, 0x00, 0x8b, 0x8f, 0x01, 0x3f,  0xcd, 0x33, 0x02, 0x31, 0x00, 0x00, 0x00, 0x00,
    /*0xe0*/	0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
    };
#endif
    // End of Generation
}

namespace T9MAP {
    static const pyitem t9EN_index[] = {
        {"0", "", "0 .,?;:@/?'\"[]{}!@#$%^&*()-_=+\\|`~/" },
        {"1", "", "1"},
        {"2", "", "2abcABC"},
        {"3", "", "3defDEF"},
        {"4", "", "4ghiGHI"},
        {"5", "", "5jklJKL"},
        {"6", "", "6mnoMNO"},
        {"7", "", "7pqrsPRQS"},
        {"8", "", "8tuvTUV"},
        {"9", "", "9wxyzWXYZ"},
    };
    static const t9item t9TableEN[] = {
        { "0", 1, &t9EN_index[0] },
        { "1", 1, &t9EN_index[1] },
        { "2", 1, &t9EN_index[2] },
        { "3", 1, &t9EN_index[3] },
        { "4", 1, &t9EN_index[4] },
        { "5", 1, &t9EN_index[5] },
        { "6", 1, &t9EN_index[6] },
        { "7", 1, &t9EN_index[7] },
        { "8", 1, &t9EN_index[8] },
        { "9", 1, &t9EN_index[9] },
    };
    static const pyitem pyTab_0[] = {
        { "0", "", "��������������������������������������" },
    };
    pyitem pyTab_2[] = {
        { "2", "a", "������߹������H" },
    };
    pyitem pyTab_22[] = {
        { "22", "ba", "�Ѱ˰ɰְΰհϰͰŰǰӰ԰Ȱаʰ̰Ұ��������������屁�����\x86\x5C�^�z�����ΊB���Q�y�i�p��[�˖��Ȟ� �X�j�q�F�����T�j�_ƞ���M҆�y�^ڕ�R���Z�T��E�N������" },
        { "22", "ca", "����������͔c�U�~�g���n" },
    };
    pyitem pyTab_224[] = {
        { "224", "bai", "�ٰװڰܰذݰ۲����������h�߰ǒ����Ŕ[�����ɪW�q�����]޵�b�oٔ����v" },
        { "224", "cai", "�Ų˲ɲĲƲò²Ȳǲ̲ʂ��Ɔ��Ɗ�u��A��H���Z�n�uؔ�P" },
    };
    pyitem pyTab_226[] = {
        { "226", "ban", "��������߰�����������������K�ֈm�Њ����E�����ʕL�D�������t�O�{�O�R�ZΆΌї҃���A�k�l����n�q�k�[���C���X" },
        { "226", "bao", "�����������������������ٱ����������������������������܃��������E�����~���������ސA�ޖ����h��������ǘ�}˝̙�dЈ�����f�Jم�E�t���d�s���h�b��U�R�d�_���" },
        { "226", "can", "�ϲв��βҲѲͲ���������ӂ����������ЇA�k�ԋۋ�ߑK�L�M���⓷����\x9C\x5C���� N |�_�d�L�]�Q�T֍ۊ�D�{���Y�����o" },
        { "226", "cao", "�ݲٲܲ۲����������������F���ٕ����H�Hܳɘ�G�_�����[�A�x��" },
    };
    pyitem pyTab_2264[] = {
        { "2264", "bang", "���������������������K�� �ȉY���L����������ϒ��ʓs�ԗ� ��g���������R��Ő�K�{�M��rߙ�^�D�u�o" },
        { "2264", "cang", "�زֲײղ������}����M�ș��P�����[���œ�n�i�@ى��I�]" },
    };
    pyitem pyTab_23[] = {
        { "23", "ce", "���߲�����ȃԅ��x���������ő�������դ�y�����Z�k���u���R�Y�mɃ���v��" },
    };
    pyitem pyTab_234[] = {
        { "234", "bei", "����������������������������������������������������Ղp���˂�F\x86\x5C�h�Ո������ʑv�d�K�{�ȗG�f�������� � ͪN�D�i�w� �F�t�L�pƅ�����i��ˍ͓���o�R�|ؐ���K݅�f�m�^�C�E�c�l" },
    };
    pyitem pyTab_236[] = {
        { "236", "ben", "������������������傖�ω��M�ٓ��L��y�`�ǟ� Ī����n�Sݙ�G�Q�M" },
        { "236", "cen", "���久������ߗq�N���_���d�~" },
    };
    pyitem pyTab_2364[] = {
        { "2364", "beng", "�ı��±��Ű�����ԁ�ٺ������爩��ܡ�l�R��ƽ�꒲�s�԰�m�Ԭa�e�n�p�l�X���E�M�J�A�a�G�a�" },
        { "2364", "ceng", "�������ɮ���Ӎ�I�}�����" },
    };
    pyitem pyTab_24[] = {
        { "24", "ai", "����������������������������������������������V�ˁ��v�����܄������ن��B�懆��a����֊�܍̐ۑ��������l����G���ܜ�G�C�s�a�}���}�v�o�K�i�B�@�L�c�rٌ�t�{�X�P�u���i�q�B\xEC\x5C�a�g�L�I�J�o����" },
        { "24", "bi", "�ȱʱձǱ̱رܱƱϱ۱˱ɱڱͱұױٱαбӱֱݱѱ�������޵ݩ����ذ�����������������������������������������������Ӂط��������񆞆�f���㸴���`�����ǋ�����Ŏ��ϏY�����P�W���Ϸ��������a�������ėa��������ța��� �������Ϊ������n�w���H�R�w�n�zƳ���K���P�t�u�v�`�z�������a�o�V��T�X���Y�Z�^Ƣ�M�bƃ�]ɜ�Y��͚ΓЋ���K�g�v�vם�P؄�C�M�S�F���P���~ۋ�K�Lߛ�����t�G�C�q�@�E���[\xE9\x5C�]�s\xEA\x5C������@�S�{��{�E�����x���I�m�s���p�S���z���G��" },
        { "24", "ci", "�δ˴ʴɴȴƴŴǴ̴��ŴôͲ����������فՁ肽�p�ޅ�˾�膝���􊜋��ύՎ����c������ܖ曁�̝ОB�u�y�N�r�Q�ҽa�W�h��ƘƝ��Ǆ�W�F�j��y�Έυ�~�n�a�e��ڝ�e�i�o���@�d�q�J�y\xFA\x5C�]��" },
    };
    pyitem pyTab_242[] = {
        { "242", "cha", "�����������ɲ�������������������ꁚ�����x�������g�����K�Q�����ݽӓc� б�˗^⪮��g�p�P�aő�O���NݱіӐԈԌۂ�O��\xE6\x5C�d���x�l��" },
    };
    pyitem pyTab_2424[] = {
        { "2424", "chai", "����������٭���в憶�ВK��� �}��Ə�OϊЃӐ�O�b��" },
    };
    pyitem pyTab_2426[] = {
        { "2426", "bian", "�߱�������ޱ����������������������������ԉ��O�̐�\x92\x5C�ՓO�c�M�� ��p� �K�V�H𡹏�e�D�����XŌ�q�xҌ�S׃�P�H�g�k�l�p�q߄߅ߛ��Q�r��Y�b�c�u�@��" },
        { "2426", "biao", "��������������������ڂl�G����w�Ύ��ғ��˙~�W��Ư�d��� g�Y���g� �r�A���Eˑ�FՕրٙ�l���S�s�R�[�j�k�l�n��Q�T�B����" },
        { "2426", "chan", "�������������������������������������������������夁P���׃]�d�{�����Äi�}�����g�冮�·c���ψF���ʋ���ո�ݍ��f�ʑ��ϑԵ��������۔v��C�{���^�ٚ�մ�������I�u���e���������a�b���v�U�o�g�C�A�W�p�s��È�Bɻ�r�M�sπП���g�R�b�cҗ�S�~֝׀׋׏��ۅ�{�����p�@�a�i�P��K��U�]��" },
        { "2426", "chao", "�����������������˴³��������ˁ���������Z�l�z�������ș��ΝR���q�� ��|�J�}�B�K�b�U������V�e�N�a֚���}ڈ�C�}�n���{��" },
    };
    pyitem pyTab_24264[] = {
        { "24264", "chang", "��������������������������������������������������潁��t�ȃY���������L�����j���ЏS�����������ʜC���`�d��� �D�^��Û�c�q�O�^�m�k���_�L� �L�M��O�o�K�l����" },
    };
    pyitem pyTab_243[] = {
        { "243", "bie", "��������e�񏕏ְǰΰƓ�Ʋ�Īm�T�ط�ƃ�a��̋�r�h�X�M����" },
        { "243", "che", "�����������߳������e�����q�ö���bլ���ؓF���ݳ�؟E�L�c ��u�����s�p͒�a֐܇ފ�J" },
    };
    pyitem pyTab_2436[] = {
        { "2436", "chen", "�óƳ����������³ĳȳ�������������������衂E�ს����\x89\x5C��m�}�����גדZ������F����������տ�c�G���M�����_���~�Q�D�b������Ɛ�_�k�c�l�I�r�HՀ�R�n֍׏�oٕ�fڒڙ�{ܕލ�p\xE2\x5C��J�����m���Y�Z��" },
    };
    pyitem pyTab_24364[] = {
        { "24364", "cheng", "�ɳ�ʢ�ųƳǳ̳ʳϳͳѳҳγȳ�����������������������ة�\x81\x5C���D�t� \x83\x5C��Ǻ�܈���S���k�w�ӎ񏻏��琑�r�~�������ޓ������Γճ��b���������̘����f�r�雄��䥛ƛ՜Q�˝��j�s � ����A�b�������������Q�����V�f���B�wÔ�^�B�|�c\xD5\x5C�W�X���k���J۫����j�d�p�K�p�l�d���G�r���h��" },
    };
    pyitem pyTab_244[] = {
        { "244", "chi", "�Գ߳ٳس�ճ�ݳֳܳ�޳ڳ۳��������ܯ����������������������߳�������с́��s���ȅh�q���Յ����Хϲ�ˇV�[�i���k���L���w�эI�����Ӑp�u�J�d�y���Ļ�x���ϒ������������~�o���ܘ��I�^�l�n�����n�Λ��F���͜��k�ßU�� ��E�b�v���V���l�o���Ƹ��M�x�}���Y�����@�B�]�L���n�qÒ�S�β��K��� �N�h���y�D�E�l�W� �B�v�s֖�P�d�m�pچڗ�F�L���y�Bދތ�W�g�o�t߆�M�r��~�x����S�����Y��P���T�|�A�`�������u�J�[�X�cۭ" },
    };
    pyitem pyTab_246[] = {
        { "246", "bin", "������������������������������݃��P�Ú�����亞I�M�l���p�W�_Ĝ̞ϙӟ�h�e�fٚ�Sߓ\xE8\x5C�E�l� Ƶ�x���W" },
    };
    pyitem pyTab_2464[] = {
        { "2464", "bing", "�����������������������������K����v���������}ƽ�Վ�T�mƴ��\x95\x5C�m�ʖޖ◀������ ]�ެV�n�R�S�}�A���p�l����u�s�@�M��u��v�h��@�S��V�m��" },
    };
    pyitem pyTab_24664[] = {
        { "24664", "chong", "���س����ӿ�����������������׆����Ì����בo�_�����_�ҝr���� ���\xAF\x5C�ѵr�N���Z�����u�x�n�~ی� ͪ�|�" },
    };
    pyitem pyTab_2468[] = {
        { "2468", "chou", "���������������ٱ����ŁE�G����������樋B����ΐJ��Ť����o�F�����䗹������ b � � ⮇� �{�T�y���N�I���[�I�WǓ�g�nԗ�a�pׇ׉��מ�S�P�c�O�b�h�~�oť�l�{\xF5\x5C����" },
    };
    pyitem pyTab_248[] = {
        { "248", "chu", "�������������������������������������ۻ���ء���������˂m�⃁���I���b�ǋ���ЏN�A�Ò}�����������ƘZ���[�s���������bͿ����� ˬG�`�l��Aף���a�e�X�I���^�aĕ�cǈ���Z�eɍ�x� ̎�{�E���c�|�xՑ�Tڰ���X�a،�n�H�U�u�X�s�I�z�z�r�R���i�s����" },
    };
    pyitem pyTab_24824[] = {
        { "24824", "chuai", "����������ߚI�D�u" },
    };
    pyitem pyTab_24826[] = {
        { "24826", "chuan", "�����������������������݂��b�����@���ĚN���k�[���U�@�x�x�F�i�w��ݎ�A���E" },
    };
    pyitem pyTab_248264[] = {
        { "248264", "chuang", "��������������ց��}���V�k�y�����l��ѐ�ꓜ�S�H�r�w � � ����}���RĀ�����[�J" },
    };
    pyitem pyTab_2484[] = {
        { "2484", "chui", "����������׵����������������Dǔ�]�N�m�q�D�s��" },
    };
    pyitem pyTab_2486[] = {
        { "2486", "chun", "����������������ݻ�Ȃ��b�@�a�ÕI���Ԗ~�J���Ꙛ��̜����_ Ƭt�Q�������aË�x�X�N�o�Oɔك�w�bݐ���c�T����j����" },
        { "2486", "chuo", "���������꡴مɇǊŊƋC�S�F�������f�����̴����ؾY�b��׺�J�����}���T����z�u���O�Qȩ�r�Y��q���p�w" },
    };
    pyitem pyTab_26[] = {
        { "26", "an", "�����������������������������������������\x85\x5C�{�H���������݋F�j��^�ɕ����q�u�бQ�V�U�O�W�I�C�sȀɎ�s�Y�O�t؁�V�Q�@�Bǯ����@�����O���K�c���g��" },
        { "26", "ao", "�������°��ð��������������������������������ᮅ����އƇ̈������S�W�����C��S�R�U�j�������`���|���E������ n���H�l�x�����K�O�b�T΂\xD2\x5C֒֓�E�U�G�O�J����^���q��" },
        { "26", "bo", "����������������������������������ز����������ǲ�������������ެ������뢁����N�`�k��ļ\x86\x5C�h�������ÌX�󎓏������İΒ���ߨ�����K�_�q�ؚ��Û_�������ٟ��� � � � ��t�������h�l�װٰ��C�j�B���R�z�q�����~��\xBC\x5C�����J�`Ň���tƅƞ��ȕ���N�X޵���Y�oГ�B�J�T�U�q�y�L�m�����@�R��K\xE3\x5C�c�n�}�D�G�o�A�C�F�g���m�p�E�N�Q�����P��" },
    };
    pyitem pyTab_264[] = {
        { "264", "ang", "���������n��n���Z�l�a" },
    };
    pyitem pyTab_2664[] = {
        { "2664", "cong", "�ӴԴдҴϴ�������������̅����Q�����ď�S�����F�m�����B���ژ�ߝY�^�|�������t�� Q ��B�j�����b�t���k�v���S��Ɖǈɐ�[�q�Z�pց�z�{�W�^�" },
    };
    pyitem pyTab_268[] = {
        { "268", "cou", "�����������圐�u����޴˒��Ȥڅݏ" },
    };
    pyitem pyTab_28[] = {
        { "28", "bu", "�������������������������������������߲�уW�υą����� �m��E���p�ԒÒѓ�򖿚h�i�ߪ����r�^�[ɞ���a�c�Yݕ�K�^�b☸�����J�X���G�L�Q" },
        { "28", "cu", "�ִ״ش�����������������҅a�m�ŊƋ{�I���ݒۯ|�����U�q�Ð�I�P�c�K���uȤڂڅ�U�c�n�q�A�e������������y" },
    };
    pyitem pyTab_2826[] = {
        { "2826", "cuan", "�ܴڴ���������ߥ�V�m�e�x��꿙��皖�U���䷉�U�Z�e�xǈ�{�f�g�" },
    };
    pyitem pyTab_284[] = {
        { "284", "cui", "�ߴ�ݴ�޴�˥�������������t����y�������썌������N�����y���n�ժ��X�Q�����W����\xBE\x5C\xBF\x5C�������yÜăċě�P�~�n�J���x" },
    };
    pyitem pyTab_286[] = {
        { "286", "cun", "�����������Y���������������v�Zߗ" },
        { "286", "cuo", "������������������������v�z��Վ������ �� I�����W�s�u�c�x�P̑�PՋ���g�H�u���A�i�S�e�q�z��" },
    };
    pyitem pyTab_3[] = {
        { "3", "e", "��Ŷ������ﰢ������������������������ݭ��������ج�����ǁ���α��٨���΃^�i��\x85\x5C�v�Ņن@�H�Ɔs���������f�ه��눺�׈�񊊊������j�ߌ�S�k���֎��������t�~���A�����ĚG�d���x���ᜊ�M���c�u�x���S�X�b�j�r�Ҵd�J���Jʂ�F�L�Y�FӞԛ�M�@�F׆�`ܗ�Qݑވ�]�{���e�~��y�p��i�q���O�P�~��I�_�Fت���t���{���E�Z�[���L�|��" },
    };
    pyitem pyTab_32[] = {
        { "32", "da", "���������������������������������A����}������������\x99\x5C�Κ��͞� [�}���o�K���J�e���E�Q�Rσ�u�z�Q�Jޅއ���Q�_�]�p�N�^����" },
        { "32", "fa", "����������������������늑�U���β��ܖ����o�����m�V�k�l�X���P�Uƞʆ�t�H���e�w�z�y��" },
    };
    pyitem pyTab_324[] = {
        { "324", "dai", "�������������������������߾�����߰�����ܤ�����N���������K���Ζ�馶������y�x�y���H�Dŕ�O�f�}�E�y�rڱ�J�Fې܍ܖ�D�a���f�r���O�^�W�j�~��\xF5\x5C�l�n" },
    };
    pyitem pyTab_326[] = {
        { "326", "dan", "������������������������������ʯ�������������������ࢁS�������d�{��Ƚ�[��S�g��m�����·d�n�~��̳���l���[���������򐴐ב������b�ړۓ����ܚK���X��տ̶夝ڟ� ��m���X�D�D�Q���N�V�������W�n�E��đ͞��π�yэ�R�bҗ���gӔղ�Qٜ֝� ��ې�l���G�]�K�F�Z���d���}�^�l�r����" },
        { "326", "dao", "���������������������������������߶ٱ�������������p�����u���W����㰒ғv�F�]�͘��|����Ν� c���I��\xB6\x5C�R�|�r���R�s�K�g�@�m�p�n܄�~�����I�Z����B����" },
        { "326", "fan", "���������������������������������������ެ����ᦁ����F�G��K�h���i��ˋ̋я鑌�B�Ք���i������������t�J�~���� �[���F\xB5\x5C�B�D� �O�o�u����ć�t�w�x�X�ϛ���Tӌ؜܏�G�N�x�C�x�c�x���Y�����" },
    };
    pyitem pyTab_3264[] = {
        { "3264", "dang", "������������������������}���W���������P���ɐՓ����n��띋�Ǟ��� C�����T�c�G�����U�^�X�D�Y����řʎ�o�}�d�[וځ�T�K�W��h" },
        { "3264", "fang", "�ŷ����ķ����÷·����������������Ђ��Έ��ڔ�P�X\x95\x5C�P�E ����f�}�p���K�Lړ�[�p���������h�J" },
    };
    pyitem pyTab_33[] = {
        { "33", "de", "�ĵصõµ�ｇN�Ԑz�����������u��" },
    };
    pyitem pyTab_334[] = {
        { "334", "dei", "�ÆO" },
        { "334", "fei", "�ǷɷʷѷηϷ˷ͷзƷ̷�������������������������������n�|�����O���Ў��U�����h���ՖF�{�ɗ���J���d�O �U�i�X�C����A�E�p��^�c�dƅ���Qʄʆʈ�N�n���p�q�U�u�M���]�q�w�y�[�I�W�a��E����" },
    };
    pyitem pyTab_336[] = {
        { "336", "den", "�O�Y" },
        { "336", "fen", "�ַݷҷ۷طܷ߷׷޷�ӷٷԷշ�������������f���燊�b�e�����^�}�����ˏk�����Ք��S�B�D���r���J\x9A\x5C��ǟ����ܪ��βb�W�l�j�S���i�����RďȆ�kʈ�_�`�vӟ�k�r�S���m�M�p��M�V��C���i���B�O���a�X�R�v��" },
    };
    pyitem pyTab_3364[] = {
        { "3364", "deng", "�ȵƵ˵ǳεɵʵ������������\x83\x5C�����~�ș����O�~Ř�R�O����Q" },
        { "3364", "feng", "�����������������ٺۺ�����􁧂��t�K�N�O������~���o���������Q���l�h���͜t�����m���Пu���� Ȫh�S�g���`�^�A� �p�T�}ł�l�X�t��҃�S�N�Sو�R�����h��Q�b�L�p�T�L�P�i�i���K" },
    };
    pyitem pyTab_34[] = {
        { "34", "di", "�صڵ׵͵еֵε۵ݵյܵ޵̵ĵ���ѵϵҵԵ���ۡ��ڮ��������ص����ݶ���������Ɓ��d���C���ׅ}���v����ഇ��h�k�������y�����D�X�ގR�f�t�w�~���K�d�F����W�����A輖m��\x97\x5C�b�N�����v��b ��Z���S�F���Y�����E�a�e�s��Լ�J���V���l�mݯǅǜɉ�H�L�O�yˋ�h�[�EД�]�h�g՜�B�p�d�h�q�y��ۇۗ�B��ޞ���f�m�r�K�d�~�C�s����{�L�E�}���V����W�M" },
        { "34", "ei", "���G" },
    };
    pyitem pyTab_342[] = {
        { "342", "dia", "��" },
    };
    pyitem pyTab_3426[] = {
        { "3426", "dian", "�������ߵ�������������������������ׂم������|���H���L�юo�p���锄�����Ϙ�����Aմ�ќ��լU�t���d���H�_�s��͟�aۆ���F����c��ؼ" },
        { "3426", "diao", "�������������������������٬�õ��a�P���ŏt�����F���������@�h���f�H���L�u�y�мg�r�I��ݯɉ�y�@�q��ӎ�A�{���w�����U����y�H��c�S��M����M� �B�J�@�m�b��" },
    };
    pyitem pyTab_343[] = {
        { "343", "die", "���������������ܦ���������������A�O���U���ގ��L�g�䒔���i�薻�G�����ۛu��h�� ������A�B�y���Ͻx���W�]��\xC5\x5CŎ�|�H�Hс���B�eՙ�g�@�L��ې�W����F�P�C�]�l������" },
    };
    pyitem pyTab_3464[] = {
        { "3464", "ding", "�����������������������������������व�c��������͡��Ʈk�G�O���J�b���Y�Bӆ��b�V��w��r�}���" },
    };
    pyitem pyTab_348[] = {
        { "348", "diu", "�����G�A�M" },
    };
    pyitem pyTab_36[] = {
        { "36", "en", "�������ŊC�W������" },
        { "36", "fo", "�������u��" },
    };
    pyitem pyTab_364[] = {
        { "364", "eng", "�E" },
    };
    pyitem pyTab_3664[] = {
        { "3664", "dong", "���������������������������������˂��P���ӄ�ĉ������ٍd�����㒜�_�k�|ͩ����򜧞����J𮸕Ͳ�c���p�L�{Ǉʐ�X�hԘՉޓͪ���L�[�C���H���" },
    };
    pyitem pyTab_368[] = {
        { "368", "dou", "�������������������������c�J�ÄE�r�ʆtͶ�Ԗ��u�X�Úћ��^�f�]Öŏ�W�x���K�H���^�W���k�L�h�L��Y�Z�^�`�a" },
        { "368", "fou", "��󾲻���v�伀�����]�[��]" },
    };
    pyitem pyTab_37[] = {
        { "37", "er", "���������������������٦����������n�����茩���X�p�r�k���ޚ����x� ����Y�x�sĞ�H�n�^�L� �@�Eڍ�[݉�W߃�s�z��X�D����b��" },
    };
    pyitem pyTab_38[] = {
        { "38", "du", "���ȶ��ɶ¶��ǶƶĶöŶ������ʶ��������������ܶ���E�����X� �����T����լ���������̘��ҙ�������^ � ٪��o�{���G���]�ø��V���T�}Ζ�C�t�e�l�GԌ�i�xט���Kـ�G�`�L��N�o���A�^��|�b�~��D�y�t" },
        { "38", "fu", "�����������������������������������򸸷����󸳸���������������������������������и����������������������������������������������������������ݳ���������߻ۮܽ���겻�T�����Y�a�������_��߼��b���`�}������m����D�c�ˋ�嵌 �@�T�����}�܏��ͻ��N�ʒh�������ꖎ�������󗭗ӗژ_�L�^�Л����ߝ��ޟJ�r�c�s�M�o�i�t�w�}���G�Q�y�O���J�c�A�[�r�������J�����E�n�������`�b�J���i�wŀ�]ƅ�C�X���Q�iȃɒʍ̒�b�k�|͗�l�uГЕ�}ч�L�i҄Ӈ�c�D�fؓ�M�xَ���~�P�oݕݗ��ߏߑ�G�M�~�K�U��a�R�V�����������h�v�\xEE\x5C�O�T���f�H�V�v�v�D�I�W�q�f�����A�F" },
    };
    pyitem pyTab_3826[] = {
        { "3826", "duan", "�ζ̶϶˶Ͷ�������Ǆ��F�e��������V�@�f���Z�aȘу���Y��H" },
    };
    pyitem pyTab_384[] = {
        { "384", "dui", "�ԶӶѶҶ�������������͉[��Z�����ő��������A�S�w�}�y�q�q��Ą�c�d�B�m׷�q�J��T�m������ �X��" },
    };
    pyitem pyTab_386[] = {
        { "386", "dun", "�ֶٶ׶նض۶ܶڶݲ����������������������ݎݏ������Ǔ�J������ Ԫ��]�R�]�P���v�H�Oޚ�q�g���D�" },
        { "386", "duo", "����������޶��Զȶ�������������綁��������҄A�m�������Ƈ������ʉ�����Z�b�s��������������������������\x96\x5C�Ӗm���ޖ��Ö�颗ٙE�Ǜk���ɯk���EƖ�E�q�B�y�r�F�G�T�o܀������T�N�I�����w�y���D���W�j�D�y�z�c" },
    };
    pyitem pyTab_42[] = {
        { "42", "ga", "����и¿�����٤��������ȇQ�V܈��m�p" },
        { "42", "ha", "����Ϻ���R�źǊU�o����r�x" },
    };
    pyitem pyTab_424[] = {
        { "424", "gai", "�øĸǸŸƽ�����ؤ�����_������Ȋ��Y�㓩�|�q�˘������[�y���o���i�w���Dȑ�wԓ�d�W�^�@�}�Y�u���d�B��" },
        { "424", "hai", "�������Ⱥ��������������܁���Ԇ㇯�h�����Q�n�w߀�@�V�u���W�������" },
    };
    pyitem pyTab_426[] = {
        { "426", "gan", "�ϸɸиҸ͸ʸθ̸˸Ӹ�����������ߦ�������������qǬ�x���΂����Q��錼�����֏�I�����U�o�g���N���l��\xAB\x5C�q���Y���C�m�T�����C�Q�H�r�l�P�J�C�M�s�|�F�D��_�v�x�h� �N" },
        { "426", "gao", "�߸����ݸ����۬ھ���غ�����޻�ƅ̾̉��z�������R�����Ɯ��������w�G�����J���X�l�c�o�Vǐ��˛�a���z�p�{�k����" },
        { "426", "han", "�������������������������������������������������������������΂��˄T���{��c�i�������΋��南��Ƕ��ВI��꺕~���U�c�ߘo���a�N��țۛ���̲�h�����Ȟ��� ��R�H�ʮ]�y�����b�`�Q�t�G�k�H͔�K�LΑ֛�E�J܎���F�j�I�d�w��\xE9\x5C�R\xEA\x5C�n�y�n��M�h�u��H�U�A�_�A�N�[" },
        { "426", "hao", "�úźƺ����º����ĺѸ�������������޶�ۃ���S���_�s椐h���a���������ؗ��B��������|���ް�������غ�m�h�D�G�|�z�Vƒ�A�^�r̖̗ϖՒ�q�z�e�����" },
    };
    pyitem pyTab_4264[] = {
        { "4264", "gang", "�ոָٸ۸׸ڸܸԸؿ���������鄂�Ո������ޑ߿��◞���ϟ� � � �I�M�L�V��� ���G��s�l�@��" },
        { "4264", "hang", "���ﺽ������������񈜊s�����쿻�Ǹ��V�W���f�aؘކߒ���@�" },
    };
    pyitem pyTab_43[] = {
        { "43", "ge", "�������������￩���������ٺϸ��������ܪ���������ت�����������ށ������ɅÅφ��S�����͑��M���R���q��� �Ɯ�� � � �n�������w�v�Iė�Zƌ���w�x\xD1\x5C�kԆ�Y�gݑ�P��t�x�d�k押����l�w�xբ��R�k�u�M�Z�����i�s�����m�w���B" },
        { "43", "he", "�ͺȺϺӺ̺˺κǺɺغպֺк׺ʺѺҺ����������������ڭ�����ú��J���Y� ����྇m���������y�P���Ԓu���Ҕ������B��Ǣ�f�z�ʜ����Z������ _ e �C�F���A�B��E�����K�t���v�U���G���M�r޽��ЫΘϚЎ҇�X�ZԆ�y؀�R�`� ��Ͻ�A�F�Y�u�H���a���e�f�g�H�M��g��]�����]���K�Q�S���i���L�[����" },
    };
    pyitem pyTab_434[] = {
        { "434", "gei", "���o" },
        { "434", "hei", "���ˋϝ�\xFC\x5C��" },
    };
    pyitem pyTab_436[] = {
        { "436", "gen", "������ݢب�ޓ^�j��" },
        { "436", "hen", "�ܺݺ޺ہ��燌������ԋ�" },
    };
    pyitem pyTab_4364[] = {
        { "4364", "geng", "����������������������箁����j��y�a�������ԛʟ��uӲ�b�c�����K�}�c�@�s���D�Q�i�i�����f" },
        { "4364", "heng", "���ߺ��������޿�䆑�����a���M���B�tÆ���U���C�a" },
    };
    pyitem pyTab_4664[] = {
        { "4664", "gong", "���������������������������������������@�C���ۆy�߉b�m���Ð�E���r�ܖ�|�˴b�T�k�t�������yؕ�C�M���p\xDD\x5C�U�������" },
        { "4664", "hong", "����������ڧ��ޮ��ް��ݦ���������ƅˆM�y�߇����k���f��c����E�Е{���K�ě͸ۜ|���~�������p�Y�a���{���f�s�C���t���������������o�|�yȇȈӏ�h�A�D�Fܟݓ�Z�v�p�U�f��b�{�����\xF4\x5C����Z" },
    };
    pyitem pyTab_468[] = {
        { "468", "gou", "��������������������������������ڸ���������׃����^��x�򊥒]�Гk���t�ϟ��v�����T�U�Vƙ�mНѐ�M�_ԍ�m�xُ�@�h�^�g�x�L�z�Y�" },
        { "468", "hou", "������������ܩ�����������˅鈋���� �T�@�F�J�Dȉԍڸ�_�C�j��A�f�`\xF6\x5C�c���J" },
    };
    pyitem pyTab_48[] = {
        { "48", "gu", "�ŹɹĹȹʹ¹��ù˹̹͹����ǹ����Ƽֹ��������������������������ڬ����������������ł�l�󄽸��߆f�g���؆�؉������g���H��M�_�ݖ����b���O���}�����J�k���ް��W���h�����Y�����H�M�S�B�l��Ù�V��Ƃ�u�[�v�M���b�Z�L�Mݞ�E���d���k� ���Y�A���]�X��" },
        { "48", "hu", "��������������������������������Ϸ�˺ͺ������������������������������������������������΁[�s��I�O���؆ۇF�P���~�։؊����|���������ďu�H�m��������_�����N�O�U�����������X����R�Z�~�����W�X���G�C���W�ڭ��@�C���}���n���`���S�T�e����Ċ�n�S�U«�̿��~�L�S�d�̏̕Ι�k�{�S֗�o���m� ����n�t��L���a���i��_��g�b�E���U�{�s���U���]���C�K�X�I" },
    };
    pyitem pyTab_482[] = {
        { "482", "gua", "�ҹιϹѹй����������ڴ�ք������F�J���q㷒�O����\xBD\x5C� �G�L��Ƃԟ� �o�|��T��N�W�m����" },
        { "482", "hua", "���������������������������٨������ۇW�����N�O����ѧ�W���ғ�����Ж��ɘ��噊䫝��Ҫ��L�������h���@�A�E�B�p�_�A�J�y�f�sΔ�iԒ�jՖ� ֜�f�{�D�E�n�k�f���q�����X" },
    };
    pyitem pyTab_4824[] = {
        { "4824", "guai", "�ֹչ��Ⅸ�������s���ʹy�L" },
        { "4824", "huai", "�������������ׁ݆Fఇ]�������đ��љƞx�j�x�|ёќ" },
    };
    pyitem pyTab_4826[] = {
        { "4826", "guan", "�عܹٹ۹ݹ߹޹�ڹ��������ݸ���������āO���j��� ���T�ד��ӹ���������ٛ����S�� ��g���p���H���e���A�`�]���o���X�Fҋ�Q�^؞�I݄�k�]���r�v�K�P�q�^���b�}�A�J�X" },
        { "4826", "huan", "���������������û»������������ߧ����ۨ���ۼ���������但����ȇ�����J�A�~�`���w�ё��דQԮ�k�h�����Z�g���o���ȝ׹��� �B�~襭h������ѣ�����`�o�]�b�����Q�v�K���B�P�VːΌ�Sג�h�o�}؎�k�S߀� �h�D�G�I�X�a�f�q�O���Z�d�b�J�X�q��" },
    };
    pyitem pyTab_48264[] = {
        { "48264", "guang", "�����������ׁ�U�Z�����ڏV�������єU�ᙤ�����ꞻ�Ӟ՞֟D�E���q�Q�Sƚڇ�_ނ� �U" },
        { "48264", "huang", "�ƻŻλĻɻ˻ʻѻ̻Ȼǻлͻ�������������������諂��Ɔň��E���N�h�r���x�U��N�s�͖M�R�n���R����ꟺ�� p���������k�mŊâãȏ�Yԅ�W�eڇ��w�u�B��c�b�m�U���S" },
    };
    pyitem pyTab_484[] = {
        { "484", "gui", "��������������������Ȳ����������������������wα��΃^�����Q�хT���ۈ����ދ������@�Q�`����@�i���ʔ����Q�_Φ�˗θŘ��������u���ƙ͚w�����ݜ��ĝ����Y���I�Z�n�z�u���W���K�l�}�L���vĄƗ�}�l͊Κ�j�O�^Ҏ���mԎ�d�F�bڑ��܉ߞ�F�|�{���v�W�o�h�k�q�Z�i�W�_�`��" },
        { "484", "hui", "�ػ�һ�ӻ�Իٻڻݻ޻ջֻ�ۻ߻׻仲�ܻ�������ޥ����������ڶ������������݃a���R���G�j�v�����߇�H�鉙�Ċ�^�@���Ꮉ�@�h�j�����ڐo�{�}�Β��]�֕�������ۗ򘞙B�b�m�u�������i�x�������󝌝ҝ�`���@�C�F���� S Z���q�_�g�`�����N�~���x�_�}�D�L�����E�P�U�L�]�C�D˙�l�s���Y�z� ΚЄы�^ԐԜ�d�M�M�e�f�w�Y�V�x�{Υޒ�D�`��i��T�_�D�u�W�f�}Τ�_��d�t���H�I��" },
    };
    pyitem pyTab_486[] = {
        { "486", "gun", "�������������ح������윆�L�g�e���O�i��ɀ�FЖ�r֏݁�K��P������" },
        { "486", "guo", "����������������������������������廮�F�J�����H��������͈剁���������I�ꓝ���ۗ똡������u�X�㯆���l�@�[�B�N�sǑ�b��΁�X���x�{�^�u���J��R�" },
        { "486", "hun", "���������������ڻ�[�����G�����ǐ�������]���e�p�y���������������[�k�q�d�E�J�i�r�������ȝ�M�o՟�F���Q�a�@" },
        { "486", "huo", "�������ͻ���������������޽߫�����ⷁ�i����������؇��Ɋ_���璻��n�N����뙊�[���t��C�m��Z�@�\xB0\x5C�n���������������W�h�N�s�Gş�u�^Ւ�f�m؛Խ�o�^ߘ��x�Z�X�b�o�[�d�r" },
    };
    pyitem pyTab_52[] = {
        { "52", "ka", "���������������툚���_�Q�l" },
        { "52", "la", "��������������������������깃��ēX�Y�yߡ�Y�j����ʜ� m���]�r��ė�Dǉˈ�`�|Ϟ�h�n�J�B�F�_�v�" },
    };
    pyitem pyTab_524[] = {
        { "524", "kai", "������������������������܄P�����ѺȆˆ��i�N�K�̎��Ԑ�����˙��@�f���۞G�͞Ϟ��_�M�a�|�b�z��_�G�]���a" },
        { "524", "lai", "����������������������g�|�Ѕ����ŋ@����ƑДj�����ʜZ�|���[�[�]�A�X�s�[�R�D�s�v�lه�F�[��n�m�s�Q�D�`���H���" },
    };
    pyitem pyTab_526[] = {
        { "526", "kan", "��������Ƕ���������٩�ݨ�ۂ����ɺ��ɉA�d�{�������X�ݙ��K�M�O���U�|��ݲ�W�b�t�|ݍݝ�R�R�y��W����" },
        { "526", "kao", "����������������@����ظ�ה�����\x9F\x5C�� _�X�^˛ӈ�D�}�w����" },
        { "526", "lan", "����������������������������������������N���������ۈh���������G���ӏ[�ސ������ДG�r���̕��ڙ��������i�E������������ A L f � � ��s���f�@�_�h�a�|ȟ�{�k�m�[�h�wҀ�E�[�G�E׎���_���Y�|��@�e�C" },
        { "526", "lao", "���������������������������������������X�ń��چK�[��E�Z�����`�������ÖU���Q�Н��Jⲫ��A�z���������j�g�Nޤ͌�o�~�L�����u" },
    };
    pyitem pyTab_5264[] = {
        { "5264", "kang", "���������������������H��ӷ܋��܏���������o �T�^�~���{ߒ��_�`�l�a�K" },
        { "5264", "lang", "������������������ݹ�������Z�Ɇ]�}���i���~���J�T�O���њD�R�����^�}��ÞŅ�vɇ͙�L���q�H�O�Z���@" },
    };
    pyitem pyTab_53[] = {
        { "53", "ke", "�ȿɿ˿ÿƿſ̿οͿǿʿ��¿Ŀ��������������������������������w�Ą�\x85\x5C���ъČ��Q�����P���ِړU�t���}�ʙ��M���Μf�G�� � ɯz���`���ٴR�h���L�S���~���mŋ�d�P�_Ў�nڐ�V�f��x��H����W�w�S����" },
        { "53", "le", "������������߷���Ϗ��A�S���� ��W�i���{�I�b��E���" },
    };
    pyitem pyTab_534[] = {
        { "534", "kei", "�̄w�Ąˌ�" },
        { "534", "lei", "��������������������������ڳ�����������ς�¬���։C���͔b�Ù������I�𞘭z�����N�R����� �W�X���a�t�w�h�n�}��Ú�B� �uˉ�q�r�{̅Ϝ�C�|�[�[��G�D�h��Y�L�[��K�m�P�F" },
    };
    pyitem pyTab_536[] = {
        { "536", "ken", "�Ͽпҿ����󉨑����ݫ��w�G\xC3\x5C�y�c�~�o� ���l��" },
    };
    pyitem pyTab_5364[] = {
        { "5364", "keng", "�ӿ�ﬄ��c�R�s�����@���  ��n�w�ʳ�����Ä�U�V�s�L��H���l" },
        { "5364", "leng", "�������ܨ���ٱ��G� �J�k�s" },
    };
    pyitem pyTab_54[] = {
        { "54", "ji", "�������ȼ��������Ǽ����Ƽ������ļ�ϵ���������ʼ��������������������������������¼ü������������˼̼�����������������������������������ڵ��������ߴ����������������������آ��ܸ٥�������ު���������ؽ��������M�U�����Ђ_�΄W�Z�����ޅh߲�u�ȅ��������\x87\x5C���j����J���j� �����ӌی�c���N���׎�^�揟����ꑢ����Ҿ�V�ēؓ���D�����������̖��m����O�����ۙC�W�o�v�����Ú��D�������g���P�T��������d �E⢭D�^�u���ïs�U�^�n�u]�Ĵ��I�S�ն��I�]�b�e�m�}�U���s�u�Ҽ_�o�����Y�o�@���]�����M�^���Y�a�b�c�f�h��Ð�l�Uŝ�I�a�nƈƖ�gݽ�Wȗ�a�D�mޭ�E�j���I�R�n�z�~���aΎ�lρτυ�_�w�H�Q҈҉җ�J�]�����f�sӋӓӛ�HՂՑ�I�^ڦ�C�G�}ي�l�|ږ�E�a�e�pۈ۔�Q�e�u݋�Uۤ�B�����Z��g��W�i���H�Y�u�|�}�P�V��Z��W�|���T�K���n����J���S�a���C�D�q���K�H���W�a�n�A�n�R�T�U�V�W" },
        { "54", "li", "��������������������������������������������������������������������۪�������������������������ت߿������������޼�������������������ٳ�����ݰٵ�����λ�������^�Є{�������������߷�o�����·щW�ȊڋK�C�V�ތ��b�q�_�c���������A�F�擅�^�i���������ѕ�^���Жۖ�~�����������������s�v�ӛl�m���ɛ�I�T�W�r���� i s � � ث���P���|�������O�[���L�X�@���P���Ѵ��Z�[�`�Y�]�w���{�]�h�����H�c�F�r�f�{��ÚŃ�nƍ�VǗ�T�W�k˞�y�j́�G�g΀�[�~ϋ� �G�Y�eџӀւׁ�N؂\xDA\x5C�V�]�^߆ߊ�B�r���W�����G�k\xE7\x5C�g�p�����_�`�x���Z�c�S��P��f�����P�k�u�w�~�E�t�v�b�Z����" },
    };
    pyitem pyTab_542[] = {
        { "542", "jia", "�ҼӼټۼܼ׼Ѽмμݼ޼ϼԼռؼ��Ѽ�������������������٤��������ۣ���̂�r���ȿ��k�]���ĉ�A�T�_���ˏ��S�zѺ�~����Ю�����a���ϔ�Ͼ�k��\x98\x5C�k���x���v�� Ǫm�o�w�k�O�_Í�`�v͐�r���W�j؆�Z�O�P��e�x�e����R�]�a����{��������G��" },
        { "542", "lia", "���z" },
    };
    pyitem pyTab_5426[] = {
        { "5426", "jian", "��������������潨��������߼��齡�������������ǳ���������𽢼���뽤�������������������������������������������������Ձ��k�����߃c����ǰ���������������؈�ǵ�A�q��������{���ԏ����ɐ���쒳���B�b��W�s�𕩕��Ԗ�g�ʗߗ�c�٘���Z�z���Қ�������\x9C\x5C�p���ĝu���E�R�h�������ҟ�  ��\xAA\x5C�l���{���O�R�v�{���D�������M�S�a�{��]���E�W�G���}�V� �O�o�w���[Ş�Dݢ�GȂȅȓ�`�zʗ�]�û�Mϕ�I�M�O�}Ҋ�S�V�dՐ�Gֈ�P�t�v���]�b�`�v�{ڙ�`�Y�_�z�J�V�]��E�[�g��X�b�s��G�I�~�Z���B�a�b�{�~��Ǯ�f�g���U�y�K�[�d�T�e�J�q��C�r�x�������Z�p�Y�x�y�{�|���b�j��" },
        { "5426", "jiao", "�нŽ��ǽ̽Ͻɾ���������У�����ƽ��ý������νѽ����Ƚ½ͽĽ���ܴ������������������ٮ���������ȃS�e��������ȴ�s��ҧ�̆����E�U�������ɋЋ�ѧ�W�j�ۍ����B�k���x�����������ד蔇���������ҕw���ݘȘ�˜���]������������}���������d�����C�X�p�����R���m�g�U�q���_�zĉ�T�Lƛ���c�wˊ̗�f�tҏҙ�Xӊ�K�_�]ڈڊ�]�F�^�B�I�z�� �q����f�o�R���a������" },
        { "5426", "lian", "�����������������������������������������������鬁���I� �U�V���t��Y残t���ՌD�X�z���������씁�����������ښa���˜��ǝi�ԝ���� R���In�S���^�d�����~�����I�Ę��ݲ�jɏ�O�W�_�`΋ў�cҜ֋�`ۚ�B���z�b��`�� �����H�n���H" },
        { "5426", "liao", "����������������������������ޤ�����������ЃJ�̈́ڋ������׍ۍ���\x8F\x5C�l�������Ř͝x�� r v�V���t�N�X�����kĂ�Y�i�o�Iْێ�G�L�|����B��H�R�f�m�s��" },
    };
    pyitem pyTab_54264[] = {
        { "54264", "jiang", "������������������������ǿ�������������������䮂ׄ߅G�D����X\x8A\x5C���ڏx�����������t���^�����@�{���{�����T�t�{�P�����v�w�@�Y�K΅�Q�H�v֘�n�u\xED\x5C��F��" },
        { "54264", "liang", "������������������������ܮ�������ݹ�I�Z�z���Ɇ]�|���Ȑ�����ś������|�Z�H�nÞ͙�W�oՏ��ۘ�g�v݈�c�y����n�@�u��" },
    };
    pyitem pyTab_543[] = {
        { "543", "jie", "�ӽڽֽ�Խؽ�����ҽ��׽ٽ�߽���ۿ��ս۽ܽݽ�޼��������������������ڦ����ڵ�N�����ق͂܃r�f�g�o�m���󆇆�������������o�d�m�}�����Ì�􍛍��ˎO�Y�^�ю��ȏ𐅒M��ʰ�������O�T��M�ߕ̗A�����H�P�Řm���w�Ú����f�ʜ���� ϪEⳫd�p�v�C�^�X�V���@��M�����v���Y�e�T���cÝŋ�}ǝɕ͎̈́͝�a�fϘϝ�V�w�|Ѝ���K\xD1\x5Cћ�nӓԑ�]�m֊�l�O�dޗ�]�|�O���A�e���R������^����" },
        { "543", "lie", "����������������������������|�����Æ`���G���h�_�{�蒞���Y�����������I�� M i m ڪd�C���F�~Ç���DƔ�}ޘ���V�Q�h�v��" },
    };
    pyitem pyTab_546[] = {
        { "546", "jin", "�����������ﾡ�������������������������������ݣ�������������B�H�q�����B���Ņ��������������������͋⌃�������[�|�ܕx���c�V�����ÝW����� a���Q�n��\xAD\x5C�n�M\xB3\x5C���������G�o�N���]�MǞ�Bɓ�|�P�b�C֔ف�B�M��Y�u\xE5\x5C����~�^�v�T��" },
        { "546", "lin", "������������������������������������������������z�΁��j�C���ɍ��[�t�������Ԕݕ��ɘ�_�����B���Ş��i�����l�U�V���r�R�S�@�A�������L�R�H�A�U�C\xDC\x5C�k�O�`���l����O�C��C�[��" },
    };
    pyitem pyTab_5464[] = {
        { "5464", "jing", "�������������������������������������������������������������������ݼ����������S����\x82\x5C����� ��q���ňg�i�l�n�����c�y������� �����ɕǕߗJ�}�Y�њ��ϛG�H���ܜQ�D�s���N G�S�E�E�Z�`�d�p�����t�x������~�U��Ä�G�oȍ��ς�e�Vޟ���t�R����i���m�n�o�K�e�i�I�@�L�X�~������� " },
        { "5464", "ling", "��������������������������������������۹����������������c�{�犖����H���X��������`�E�Й��R�Ξ��� U � ��O�s�g�׵��{�n� �@�c�zɈ�Cʙ�h�eЇ�k�fښ�C�s���䙶��q�t�����_�`�I�|�C�N�o�_�w���g�h��" },
    };
    pyitem pyTab_54664[] = {
        { "54664", "jiong", "�������ĂC�T��Ճׇ�s�����l���Q�s�ӝ��]���K� ���ɟ�� E�N���Q�S�S�Wѕޛ�}�v�y�G�o�" },
    };
    pyitem pyTab_548[] = {
        { "548", "jiu", "�;žƾɾþ��Ⱦ��˾��¾Ǿʾ��ľ̾������������������ుL�X�`�w����B�E�Y�݊e���G�H��W���A�[���`�w�͘͘�����C�М� ��o�T�c���j�m�������f�i\xC8\x5C���N��b�J�F�����n" },
        { "548", "liu", "����������������������µ½�����������������̓E�����g����͏A���Ք��ΗB�P��P�f�����Νx���g�ޫ������]�o�q�����@�e�z�^�S�[�����|���]�sޤ�V˘�Y�^ۉ�T��y�B�sí�H��w�C�d�f�i�v�s���t��j���V�w�m��" },
    };
    pyitem pyTab_56[] = {
        { "56", "lo", "����" },
    };
    pyitem pyTab_5664[] = {
        { "5664", "kong", "�տ׿ؿ�������^������M����zǻ�w�I��y" },
        { "5664", "long", "��£����¡¢Ū����¤��������������Ã����U���ŉƳ茙����a�b�ӏ��ܔn�o��V�Y���ɜ����V�{ z���������a�b�_�o�T\xBA\x5C\xBB\x5C�@ʔ�d�g�F�H�i�t�F�L�L�[�X�x�]�N�_�G�T��������" },
    };
    pyitem pyTab_568[] = {
        { "568", "kou", "�ڿۿٿ�ޢ������ߵ���ㄛ�������t���D�擸�����ϝA�r�]�g���l�pƒ�f�@��d" },
        { "568", "lou", "¥§©ª¶¦¨����������������ЃE�D�v�䌊�͍�I�f���ǜ��U���ήR�����k�M�t�e�|Ŕ�V�N֌�}�s�U�V�t" },
    };
    pyitem pyTab_58[] = {
        { "58", "ju", "��پ޾־߾���Ӿ۾оվؾھܾ�ϾѾ��Ҿݹ�۾㳵�׾Ҿ��������������������������������������������ڪ�۳������I�e���h��H�������R�o���ω��㊝��Ȣ��J���Ռ������e�l�ߏ��D�I�쑧�֒]�����������E�T���H�Z�x�����h�Ιۚj���ƛt�������H�����ޟh�q � � �~�Y�r�ĳ^�ⶀ�M�_¨�t���c�����D�`�KĔ�eŉ���g�{���X�aɛ�V�^޾̘̎�i���A�JЍ�z�nՇ�e؋�k�z�~��� �B�R�g۞�F�M�v�@�]ߚ���T�Y�`�u۸� �I�z�|��L���ꏳ��r�Z�u�x���M�����L�Q�X���~�V�q���G���A�e" },
        { "58", "ku", "�޿��ݿ�߿������ܥ竂V�Ň���ʥ����H�撹�򓇖F�����{\x9F\x5C�@���L���s���f�d�Fѝڏڜ��� �p�J" },
        { "58", "lu", "·¶¼¹½¯¬³±«­®µ°��²¸¾º»´��������ޤ������������������������ߣ��������J���΄ۆ뇣���P�v�n�o����V�L�]� � �ے��󓦓�]�d�m�����Ę̙����ڜG�O�˝F�U�V�Z�o�� t�G�S�f�o���f�J�R�F���t���{�����c���������U�V���v�r�������r�w�y�F�yś�@�AǊɝ�Iʀ�J́̔�F�B���tӀ���Tڀ�jۍ�`�A�_�~���X���h�j��G�e��u�z��B�J��z�����I�w�|���c�n���R�u�u" },
        { "58", "lv", "������¿����������������������������������H����i¬�Ά`����¦�䌊���ҍ�®�]�]�f��o�Ǚ������џf l���R�k�~�t����¨�t�۽��G�v�|���o�|Ȅ���V˃�@֌�}�L�X�h�U�r����e�H��³�y¹" },
    };
    pyitem pyTab_582[] = {
        { "582", "kua", "������٨�E���m�v��\xBD\x5C�~�A�yЎ�F�����g��" },
    };
    pyitem pyTab_5824[] = {
        { "5824", "kuai", "�����������ۦ���ڿ��~�S���Q�K���w�X�������Ҫ��g�[Ē��ʉ���i�U���d��" },
    };
    pyitem pyTab_5826[] = {
        { "5826", "juan", "��Ȧ�������۲����������������̄�ۇ������F���Q�`���������g��ߧ�K�]�������]���C��ѣ�����C�v���x�I\xC1\x5CÏ�CĖǚ�T�^���t���Z�N�z�m���g�m�����h�v��j��C�J�N" },
        { "5826", "kuan", "������ꌈ���p�ÚE�L�T�U�w�w���y" },
        { "5826", "luan", "��������������������v�y�J�K�a�D\x8C\x5C�n����螤���f�g�cÇ�L�M�H̉�T���F�[" },
    };
    pyitem pyTab_58264[] = {
        { "58264", "kuang", "�����������ڿ������ڲ�����сO���ք��N�j���D�V���b�ǑȒ[�p�����r���� p �q���m�q�ǵV���n�T�_�k�E�N�Lܒܜ�A�Hނ��ߝ���k�q�k\xF9\x5C�Y" },
    };
    pyitem pyTab_583[] = {
        { "583", "jue", "�������Ǿ����������������������������������ާ�����������ҁ|���]��Z���Ɇ��������x�H���֌؍��@�D�{�������ݒ����ޔ��ߙ@������ܛQ�������]�}�؟� u ���P�i�k���W�N�������O��Ѩ�^�~�����_Ĕ�`ʅީ�D�X���p�q�Мҏҙ�XӁ�E�o�H؏�b�kڑ�B�F�j�^���I�f�~���Q� �I�������X�i�j�Y�p�Z���_�`������" },
        { "583", "lue", "����ﲄ��G���^�ʮ��Dҩˎԛ�s�x" },
    };
    pyitem pyTab_584[] = {
        { "584", "kui", "�����������������������������������������ظ������l�T�t�]���Ō��h�u�|��u����晜�C�w�������z�j�Q���Aȱ�v�CĄ���Jʉ�w�l�ẁ̝���d��ۓ�i�k��K�q�^� �N������`����r���j�Y��" },
    };
    pyitem pyTab_586[] = {
        { "586", "jun", "�������������꿢���������������܃y���ȅ͈��������hѮ���T�J�F�a�l��⡬B�������A�����qȚ�^�S�DЂҟ��܊�x�z��]��}���h�K��E�z���Q�R�U������" },
        { "586", "kun", "���������������������ш҈܉׉ڋG���������y�ٻ을�j��^�@�������������H�CǍ�J�T�X�hт�c�~�K���B���Q���O���H�����{�A�d�l��" },
        { "586", "kuo", "������������������p���������U���I�t�N T ����Q�u�v������H�A�T�p�S��U��" },
        { "586", "lun", "�������������������������E�����������S�ӱ��K�����]�b�@ǒ�FՓ�i݆���M" },
        { "586", "luo", "�������������������������翩����������������������������փ����s���ӍR���Ӕm�{��������ҙ����T˸ q �⣫M�e���`��µ�[�J�j�j�z�_�T�Iƌ�z�}�x��΁����T�Zԛ��·�V�s߉�t�� 茸��b�����i�w�B��" },
    };
    pyitem pyTab_6[] = {
        { "6", "m", "߼�އ`" },
        { "6", "n", "�ņH��" },
        { "6", "o", "Ŷ��޹p" },
    };
    pyitem pyTab_62[] = {
        { "62", "ma", "������������Ĩ������Ħ��������ô�}���ņ�O�����ߌI���q�� Ъw���q�K�a�T�l�M�R���hΛ�W�����j��U���R���K���i�N��" },
        { "62", "na", "�����������������������ǁp���څ��Ά�{�f�����V�g������O�{���S�iМ�F�i�y�v�yہܘ�G�c��~���" },
    };
    pyitem pyTab_624[] = {
        { "624", "mai", "������������۽��ݤ�τ������X�����}�{�h�]؂�I�u�~�@�A������" },
        { "624", "nai", "��������������ܵ��ؾ٦������Y�i�퓈�����ïG�Y���GΗєޕ��r" },
    };
    pyitem pyTab_626[] = {
        { "626", "man", "������������������á���ܬ����������׃K��� ��Ļ���`�����ќ��M�ϝ٪����m�����z�A�p�T\xCF\x5C�U�Z֙��ۘ����N��z�M�N� " },
        { "626", "mao", "ëðñèìîòïóíêé���������������������ٰ�ЃӃ��ÄՈ��u���ؑ��蕧�������ʚӜ~Ĳ Ӫ��p�g�m�F���E���d�rɋ���cґ�~؈�Qܚ�|���F�T�w�^�W���" },
        { "626", "nan", "����������������O��{�ɋR���m�ڒo�D̯������������̲�����~�~�l�Q�a�y�" },
        { "626", "nao", "����������ث�����������ЅD�߉�C���p�H�j�u�F�������Ϙ�`�����D�L�L�Z×�Q�XĞ�j�u�i�D�t�m�[" },
    };
    pyitem pyTab_6264[] = {
        { "6264", "mang", "æâäçãå�������݅����W�܊�����}�M���n�x���� � ��K�m�g�Zޫ����Ɵǃ�M�{ϑ�I��� �L�s������" },
        { "6264", "nang", "��������߭�e���懁���~���r������Z�L�a��T�Q" },
    };
    pyitem pyTab_63[] = {
        { "63", "me", "ô�������P�۞Q�Z�N��" },
        { "63", "ne", "��������ګ�Ȓf�۱��G��" },
    };
    pyitem pyTab_634[] = {
        { "634", "mei", "ûÿúþ��ø��öùõü÷����ý������ĭ����������ݮ����鹃��ζ���b����rī�Z���ʍ��ے{���u�|ĳ�ϘM��������]�i�����՟� B�C�s�c�g�t���S���|�C���o�zÊ�PĊƀ�B�j�nڛ�z�d�Y�V�[�i�m�B�e�q" },
        { "634", "nei", "�������ǃȊ̊�ߛ�Õ�F�M�H�]����" },
    };
    pyitem pyTab_636[] = {
        { "636", "men", "������������ˁ����B���������Е��Ț��뜺���M F��f�j�J�m�`ǖ̊�{�T�Y��" },
        { "636", "nen", "���\x8B\x5C�����QĞ" },
    };
    pyitem pyTab_6364[] = {
        { "6364", "meng", "����������������å������������������ޫ�����������̎푸�����B������ٜɝ��B�H�m����E�m�_�p�{��������Y�i���D�F�W�X�������Q�j�L�s�w����" },
        { "6364", "neng", "�ܸo����Η" },
    };
    pyitem pyTab_64[] = {
        { "64", "mi", "���������������������������������������������������������ڢ�߃焯�O�Q�B�s�������a�����ۏ���Ħ���C�V�}�a�ƙ����^�m���P�}��D�e��󞅞��� � �⴫J���~���[�y�z�[�`���H���A�]�dƃȎ�o�q�U�Z�z�^�AҒғҚԙ�i�k�������f�S�J������" },
        { "64", "ng", "��" },
        { "64", "ni", "���������������������������������٣������컁Ã��������Јӊ��������N�T�Ɍ��ڏ��������f�v��M������������N�ܝ������ ��[�z�[�v�u�Q�f�Qā�M�s�o�e͉�U�A�r�y�r؃�C�rދ\xE0\x5C��b�X�S�W�D�F���u" },
    };
    pyitem pyTab_6426[] = {
        { "6426", "mian", "�����������������������������ŁD�a��ڤ�҅�����i��ҙ����������� �������E���d�r���������X�P�|�x�eϟ�r�t�|� �@�I�M�w�" },
        { "6426", "miao", "�����������������������������っ���b�����R��è�Q�k�F������ɴ���N�]��" },
        { "6426", "nian", "��������������ճإ����������`�P�����דӔf�^�ݜV�ǯ[�j�|�vň���fڙۅۜ�T݂ݚշ�R�T�D" },
        { "6426", "niao", "�����������Ջ����͌�����ƛ\xCA\x5C�Uљ�B" },
    };
    pyitem pyTab_64264[] = {
        { "64264", "niang", "�����݋��|�" },
    };
    pyitem pyTab_643[] = {
        { "643", "mie", "���������ؿ����_�P�ϑ̓}����f�u�I�`Ҕ���f�x�p" },
        { "643", "nie", "������������������������ؿ�߆Ǉy���ˇه���[���Z�T���ԎL�q���Ґ����I���㓵�z���������ǯ[�Q�H�b�f��Y�}ǌ�A�AՔב�W�f�h�b�b�c�O��R��X���E��D�m" },
    };
    pyitem pyTab_646[] = {
        { "646", "min", "�����������������������������ẃo���b�ǅ݈�������B�O���ϔ����F�G����b�������Y\xAC\x5C�z�x�]�a�߳R�C���I���r���K���Fϟق�� �F�h�}���s�w" },
        { "646", "nin", "���ᒌÀ" },
    };
    pyitem pyTab_6464[] = {
        { "6464", "ming", "��������������ڤ�����������������D���L�i���u�b�����q�KԚ�p��Q" },
        { "6464", "ning", "š��������Ţ��������A�������ތ|����������Q���F���Ý����ɲ��r�f�_�V�X�H" },
    };
    pyitem pyTab_648[] = {
        { "648", "miu", "���ѿ�և" },
        { "648", "niu", "ţŤŦť�������F�j���S\x9B\x5C�� ��~�y���o�" },
    };
    pyitem pyTab_66[] = {
        { "66", "mo", "��ĥĨĩĤīûĪĬħģĦġĮİĢ��ĭ����ðį�������������������������ô���ۄ�����������\x88\x5C�s������������\x90\x5C���۸���V�}���b������z�{�]�f�o j�C�ٰt�u�����a�h�]�c���U�Q�]�}�gō�e��ˏ͈��_���Jփք�O�{؀��ò����H�x���r����N�O�a����" },
    };
    pyitem pyTab_6664[] = {
        { "6664", "nong", "ŪŨũŧ��ٯ�z�Ǉ��������ם�J�Z���v�Yē�_ʝ�a�r�s�x�P��" },
    };
    pyitem pyTab_668[] = {
        { "668", "mou", "ĳıĲ������ٰ��������̅ވ��Đc�����㛣�y���w��\xD6\x5C�w�J���E��" },
        { "668", "nou", "�񆎋�x�J�����A���a�k�e�" },
    };
    pyitem pyTab_68[] = {
        { "68", "mu", "ľĸĶĻĿĹ��Ĳģ��ĺĵĴļĽ��ķ������������لL������\x8D\x5C���H�]���Қ��Ҟ� � 񪅮r�y�������c�}�����kōƟǀ�r�]�[�a�f���J߼��" },
        { "68", "nu", "ŭŬū������������������x�J�e�@���i�w" },
        { "68", "nv", "Ů�����H\x9B\x5C��s���x���Z�S" },
        { "68", "ou", "żŻŷźŸ��ŽŹ���ک��^���ˇI�p�Y���Փ������W���םa�ϟ�T�u���U�pɒ�q˚֎���q��k�t�{" },
    };
    pyitem pyTab_6826[] = {
        { "6826", "nuan", "ů�f�q��妟����`" },
    };
    pyitem pyTab_683[] = {
        { "683", "nue", "Űű�ʳ�" },
    };
    pyitem pyTab_686[] = {
        { "686", "nuo", "ŲŵųŴ����������������Ĉ�s���ޑµ����x���j�`�D�Üx�L�z�K�X�X�D�E�Zہ�S���G����y��" },
    };
    pyitem pyTab_72[] = {
        { "72", "pa", "����ſž�Ұ�������������ȰɊr���ђ��񝏰q�u���tВڕ�Z��" },
        { "72", "sa", "����������ئ��ۓ��c�E�ߙ����������{��ʔ�_�Q�a�l�p�o��M����S�`" },
    };
    pyitem pyTab_724[] = {
        { "724", "pai", "����������������ٽ��ȗ��� ۪T�u��Ƣ�M݇�W" },
        { "724", "sai", "������˼����w���T���H���˺w��ِ�|�w" },
    };
    pyitem pyTab_726[] = {
        { "726", "pan", "���������������ͷ������������������Z�����m��橋���q���������蓄�����c������b�c��Ƭ � ����P�_�e�~�B���O�T��ć�gΌї�j�A�sۘ۶��o���Q�G�b" },
        { "726", "pao", "������������������������������E�������� � ܭ����h�P�^������Ç���aˑ�dЈь�c�N�E���R��U�������B" },
        { "726", "ran", "ȾȼȻȽ�����Ńхm�߇Y���v���L�߫z���V�j�G�cЀЅЙۜ�" },
        { "726", "rao", "����������欋��ӓϔ_�� �n���@��ʁ�u�Y�v�N��" },
        { "726", "san", "��ɢɡ����������^����x�΅������Ў��q�V�ɚН� ѼB�R�V�W���Q֍�D�o�d���L����" },
        { "726", "sao", "ɨɩɦɧ��ܣ���������ڐ����ߒ��]�לП��ﲄ�����R�����A�b�X�}��Y�����f��" },
    };
    pyitem pyTab_7264[] = {
        { "7264", "pang", "���������Ұ���������°�����⋘����Ϸ����P�`�кU�T�p�t�}���I�Iړ���^����Q�o��������" },
        { "7264", "rang", "����ȿ����������������ݑә֞� }�K�y�v�Z�L�j׌�`����X" },
        { "7264", "sang", "ɣɥɤ������ʖ����vј�r�" },
    };
    pyitem pyTab_73[] = {
        { "73", "re", "��������ټ�ڜc��ہ" },
        { "73", "se", "ɫɬɪ�������կ�Z�呭�������ʚm�o�����i�՜��n�������i�X�i���w�����NǾ�N̟� �Q�G�C�a�|�m����S��o" },
    };
    pyitem pyTab_734[] = {
        { "734", "pei", "����������������������������΁��_���Ȼ������v����f��C�y��h��^�ȗ��ś��� 高�a�i���S����ƞɄ���[�p�r\xDE\x5C��k��]�s" },
    };
    pyitem pyTab_736[] = {
        { "736", "pen", "�����Էԅ܆χ���\x9A\x5C�ڝ孛���MȆ�v" },
        { "736", "ren", "��������������������������������������U�������P�Z�k�ߖ�e���� ��e���x���V�B���M�H\xC6\x5C�Yǌ�Gӕ�Jך�rܐ�J�m��z�~�g�������" },
        { "736", "sen", "ɭ���������B�d�I" },
    };
    pyitem pyTab_7364[] = {
        { "7364", "peng", "������������������������������ܡ��غ������������X�kׯ���y�u�����s���ԗZ�ė՘��՛��A�K��m�p�ԯn�v�y�y�@���U�l�e�g�Mƻ�L�l�e�s�J�Z�~݃�ŷ��J�A�m�o���s�u���J�i" },
        { "7364", "reng", "�����ֵi��ܵ�e�w�" },
        { "7364", "seng", "ɮ�O" },
    };
    pyitem pyTab_74[] = {
        { "74", "pi", "��Ƥ��ƥ������ƨƢƧƣƦ������ơƩ������ا�������ߨۯ������ܱ����������������������ԁ����¸����������������v���B���������ؐW�����˒y���F��C�����[�Ț����k����娞̟� � ��W�@����w�D�i�F�G�u�y�K���v���f���z���T�`��\xC2\x5C�YØ�M�m���k����ެ���n�oΓ�K�K���|�u�w۶�W�b�t���Y����C�q���V�o�R�@�H����y����B�Q���a�d���G" },
        { "74", "qi", "�������������������������������������������������������������������������������������ݽޭ���������ܻ��ؽ��ٹ��������������������������������آ�������ʂ��[�д̄~�ڳ�֨�х���u���������Їr�Ή�݊��ތ�ü����������j���Ԑ���h�i�s���M�Q�W���֒����ݒ�ғ ֧�����ŔƔ畒���O֦�֗R�t�������������������ݚ⛛�ÜD�g�՜j������n�����şd�X�O�^�D�P�»��O���[�H���J\xB4\x5C�m�w�����Jʾ�o�Q�S���g�����K�����e�L�N��_�e�z���d�����I�XĚ�p� �Z�W�j�s�I�T�V�[�BΉ�B�lτϓ�}�E�v�w�z�sәՃ�H�[�M�|��ږ�a�e�p�e�jܕܙހ��ߌ�V���H�W�K���M�B�� ���T�U��G�n�o�t�y�l�������u�}�������R�t" },
        { "74", "ri", "�Շ���J�~�_�R" },
        { "74", "si", "����˿˺��˽˻˼��˾˹ʳ�Ų���������������������������������������ٹ���ԁˁ́��h�ƂЃ��@��̨�z�ًw�K�P��l���y�����Ɨt���{�q������[�� ��f���D�L�T�r����i�z�����Q�B��ݾʑʜ̌�E·Β�a�zҖ�p�|� �L���j��F�l�J�r��\xEF\x5C�t�~������I�l�f�����D����" },
    };
    pyitem pyTab_742[] = {
        { "742", "qia", "ǡ����Ǣ�����ց҃r���҈X�͎��ْu�����U�����H����L�s�l�eڞ�M��^��" },
        { "742", "sha", "ɱɳɶɴɵɰɲɯ��ɷɼ���������������즁o�����x�~����ҭ���B���ӓ��㓗�z�f�ך���Q�����}����\xC0\x5C��� ǝ�S�e�d�h���|��������" },
    };
    pyitem pyTab_7424[] = {
        { "7424", "shai", "ɹɸɫ�������񚢺Y�k���i\xC0\x5C�g�L�" },
    };
    pyitem pyTab_7426[] = {
        { "7426", "pian", "Ƭƪƭƫ����������������҇�xƽ�̗�F�p�p���A�q����Ґ՗՛�G�X�M���q��N�]�_�j���@" },
        { "7426", "piao", "ƱƮƯư���ݳ�������������G�܏��ґG������ ܰ����g�~�H���E�iր�o�Q��g�h��Q�T�w��" },
        { "7426", "qian", "ǰǮǧǣǳǩǷǦǶǥǨǯǬǴǫǱǸ��ǤǲǭǵǪ���������ٻ������ݡ����ܷ����������幁q�����]���߃L�����ɄX���k��T�U�q�����d���`����Rկ��ҏQ������a�R��������B�b���Ó����o�p�q���e�}�̗��p��� �N�������K�M�k���F乜D\x9C\x5C���՝u���K�U�����蟚�ȟ� R ��|�d��G�R���R�`�x�P�y�`���u�{Í���d�Oň�g�@�MȓȜ�`�g�nˁ�O�Z�SՍ�t�l�@��ܝ݀�w�T�`�j�@�Q�U�E�u�D�X�P�Z�c�B�c�~��_�e�y�a�v�U�`�c�q�R�S�������Z�k�Y�e���b�l��" },
        { "7426", "qiao", "�����������¿�����������ȸ������������������������ڽ�䂸�S�s����ׇ̆a���U��������Ὅύ������ɳ����Ӹ㓳���У����]����륝����}��� ֯ ���~���`�x�������G�[�����R�N���Jǟ���w˖�f�V�K�Sڈډ���X�^�E�F�N�b�z������� �� �@�D�y�A��~�I�X�m�N��򜽾�f�|�~" },
        { "7426", "shan", "ɽ��������ɼɾɿ��ɺ����դɻ���������������������۷�������������ڨ������ރR�d�{�لh���g�·A�Z���������E������󓁓����v�����ڕܖu�ŗ֘�̴�c�ҝ ��壞���S���ĪG�k�Z�����U�_���������u����ÈȐ�`�sπ�I�v�@Ә�b�i� �]ܑ��ߍ����W�X�^��t����~���W�X�g�@������" },
        { "7426", "shao", "����������������������������ۿ������������p�������є�џ��� d�x���ԽB���K��z�V�pʖЌ�i�I�m�Y��}�" },
    };
    pyitem pyTab_74264[] = {
        { "74264", "qiang", "ǿǹǽ��ǻǺǼǾ�����������������������̈́����ц����܆󉂉��Ԍ�����Z�����c��ؓ������֗����{����\x9D\x5C���� � ��]�}�o�j���M��[���H�m�u�z��Ś�@�N�b�H�m��ۄۖ��j�I�j��I�]" },
        { "74264", "shang", "����������������������������A� �����È��j���v�Ց^�������C�g�@�y�K�D�L�xօ�p�}�l� �l" },
    };
    pyitem pyTab_743[] = {
        { "743", "pie", "ƳƲ���د���ŕȝ��α�Ҕ�v" },
        { "743", "qie", "������������ۧ���������٤�������ͅL�������漋}�����ܽݖA���㛭����C�m�G�l�`���D�]�f���jު�~͉̈́Ԉ�B�o����@�l��" },
        { "743", "she", "������������������������������������܅��L���b�ؒwʰ�����铔���z���ݛ��h�����޵������h�~�J�F��ͅχ�O�d�h�f�A�^�H�s�M" },
    };
    pyitem pyTab_7434[] = {
        { "7434", "shei", "˭" },
    };
    pyitem pyTab_7436[] = {
        { "7436", "shen", "�����������������������������ʲ��������ݷڷ������������ρ���L�Ń������ŇA�ފ��������J�q����v���z���J�b�ӓ��Y�֖����ؘY����؜V�B�c���|�`�e�}���m�s�_�s� �����p�r���D�A�KÌ�IȐɆ�Q�M͖�[\xD3\x5C�B�YԖՔ�}ןߕ�h�v���T��������Y�������_�l" },
    };
    pyitem pyTab_74364[] = {
        { "74364", "sheng", "��ʡʣ������ʤʢʥ����������������ة\x81\x5C�������م��щ��Պ������ΕN�������|�T�}� �������Ɵ� ��{�]��i���I�K�}Ɓ�o�W�Kً�H��j���j�|��" },
    };
    pyitem pyTab_744[] = {
        { "744", "shi", "��ʹʮʱ������ʯʦ��ʷʽʶʭʸʰʺʻʼ����ʾʿ��������������ʲֳ������ʧ������������ʨʳ��ʴ��ʵʩʪʫʬ��ݪ����������������������߱���F�d�~�ˁۃ����݅b�����څ�F�򆐇u�˵̉P�]���q�Ҍg�j�p�����ƍ]���֎��s��ʏ���^�ɑ���J˹�E�g�r���ɖ�N�V�t�y֭�n����Һ�����Ҝۜ�ɝ̝�����H�L�{�����a�c�i�x����u�_���b�E�Gɸ���I�Y��� �i�J�[����֫�e���kȞ�N�P�g�t�|� �n�|ҕ�lӔԇԊ՜՞�u�R�B���J�Y�y�Y�f�m�r�}ߟ���y����P����A�B�J�v�K�~��|����z���O�S���\xF1\x5C����Z�X�|�����O�[�P\xFB\x5C�����a�k" },
    };
    pyitem pyTab_746[] = {
        { "746", "pin", "ƷƶƸƴƵ�������ذ��泋��ՖW���ën�V���W�I�|�d�Oؚ�l�A�P�D" },
        { "746", "qin", "���������������������������������������������ﷃ����w�a���������]������������܏Q���[�����R�a�͓l��ܕT�v�șN�J�������B����p���l���������l�Q�OǙǛ�B��ޭ�C�I�Z�Oψ���H�W�_�c\xE2\x5C�d�s�u�d��M�z����V�g���V" },
    };
    pyitem pyTab_7464[] = {
        { "7464", "ping", "ƽƾƿ����ƹƼƻƺ�������ٷ���R��B�Ќ΍J�������k�{�q�����ڜK�v�r�J�j�f��y�z���q���g�E�Lɑ�O�g̓�u�Z݃�Z�u�Z�T�Gڢ��" },
        { "7464", "qing", "��������������������������������������������������ٻ�A� �����͆��������]�x���F�c���������������� ��ܜ[���N�D�l�_�|��� ���Pʤ�mȍՈ�X�p�W�[�i�m�����" },
    };
    pyitem pyTab_74664[] = {
        { "74664", "qiong", "����������������̃��o�֌^�đw���K�w�z���ŬI�W�������`�F\xB8\x5C�H�|�}˕͋�^��" },
    };
    pyitem pyTab_7468[] = {
        { "7468", "shou", "��������������������������緅��b���ۉ��В����Λ�����F�l�R�f�~�" },
    };
    pyitem pyTab_748[] = {
        { "748", "qiu", "���������������������������������ٴ������������فH�������p�ňw�p�ތx�����n�㸒@���z�_�W�Ϛ����ۚ�����r������ ��U�G���H�k�h�E�z�����Fܴ�i�cɒ�U�A͏�~�b�@�a�pӈӉ�g�zڂޝ���b���U�M���F�Gظ�F���p�q�A�G�F�j����j����" },
        { "748", "shu", "��������������������������������������������������ˡ��������������������������������ٿ�J�T��m�����ʆC����Ȣ��F�����َ���X����������d�������X�얀�̖��И�]�̚�䳝������򞂟Y���q��E�P���w�P�^�����R�����Oݱ�D�[\xCB\x5C޴˒˟� �O�W�g�V�e�l֑�Qԥ�H�S\xDB\x5Cܓݔ͸�gҰ�_�f�T�C���x����_�n�t�e������������ح" },
    };
    pyitem pyTab_7482[] = {
        { "7482", "shua", "ˢˣ������Xѡ�x" },
    };
    pyitem pyTab_74824[] = {
        { "74824", "shuai", "ˤ˦��˧˥�i����\xBF\x5C����" },
    };
    pyitem pyTab_74826[] = {
        { "74826", "shuan", "˨˩���̌��՘����Y���V" },
    };
    pyitem pyTab_748264[] = {
        { "748264", "shuang", "˫˪ˬ���ׂ��u���S�����Ȝ��w�{���d�Y�C�`�p��L�Z�{�U�t" },
    };
    pyitem pyTab_7484[] = {
        { "7484", "shui", "ˮ˭˯˰˵�܎����ɚ��絈��ß�c�f�h�l�j��" },
    };
    pyitem pyTab_7486[] = {
        { "7486", "shun", "˳˱˲˴����Ѳ�e���J�����i�pʊݐ��B" },
        { "7486", "shuo", "˵��˶˸˷����������d���ԚF������� d q�������T��ҩ�pˎ�f�h��l�p" },
    };
    pyitem pyTab_76[] = {
        { "76", "po", "�����������Ȳ����ӷ����������۶�������\x86\x5C�M�U�ˌ�� �ی��F���g�����^�K�ᙝ���_�����ߝ��T�B�t�~�k�����b�X�c���N�w��O�k���H�F�p�m��" },
    };
    pyitem pyTab_7664[] = {
        { "7664", "rong", "������������������������������Ԃ�c������]�t�ʎV�c�m�r����јs�x���՞q�V h���Z\xB7\x5C�q�^�d���sƎ΍ϔђ�P�g�F�������" },
        { "7664", "song", "�����������������ݿ�����ڡ���삑�������؎���Z�m�����֓K���������s���B���Y�볗ɐ�t�@�A�b�J�����m�� " },
    };
    pyitem pyTab_768[] = {
        { "768", "pou", "�������ą��V��������g�h�������� ��r�f���J�۲��^����H" },
        { "768", "rou", "���������������Y�`�Q�n���y�~�b��\xC4\x5C�y�|�j݊��`�q�k��k��" },
        { "768", "sou", "��������������޴���������σ������C���ȓ���\x94\x5C��嗯���F䳝��v���P�L�r˒�j�n�g�}��`�b�t�p" },
    };
    pyitem pyTab_78[] = {
        { "78", "pu", "�����׸��������������������ֱ��ձ����������������W���������O���}�~���p�Ó��귕�����k���ʟM�����j�r�h���o�r�b�m�n���[ǎ�h͗�L�i�E�V�fٟ�T��h���m���L���" },
        { "78", "qu", "ȥȡ��Ȣ������Ȥ��������ȣ���޾��ޡ��۾ڰ����������������������āǁҁڄ`�J�Z�^�����o���E��ޏl�ߐI�t��|���י�������T���a�S�l�y�L�c��� �M�P�����J�^�a�lÍ�Jǆȁ�m��΃�J�g�R�d� �N�U�Y�s�x�F�o�m�zڅ� �B�R�d�|�@ޑ���T�^�L����r�����l�n�|�����@�L���O�z���Y�C�D�L�z���x��" },
        { "78", "ru", "������������������������������޸���䲁����ʆB��Ů����]���C���J���d�����x ^�A�T�d�]���NĞ�Sʇ�M�zߏ�r�}��`����p�M�n��" },
        { "78", "su", "����������������������������������������䳂уD�rಇՈT�U���O���呈�۰ᓺ�V���j�ɘ��Ś������ߝ����T���X�d�c�B�D�d�@���i�s�C�h�x˂�K�V�V�q�xۑ�i�p�_�M��X���T���h" },
    };
    pyitem pyTab_782[] = {
        { "782", "rua", "��" },
    };
    pyitem pyTab_7826[] = {
        { "7826", "quan", "ȫȨȰȦȭȮȪȯȧȬȩ�����ڹ��������������톭���ڈ������A�Z�k�����w��˩�ԓ����𗨗јT���ؙ��L�������� � � �⵬g���l���o���h�J�X���Cț̆�S�jԏ�w�N�I�m�b� ��z�B�j�E��g�e���X���j��" },
        { "7826", "ruan", "�����Â��뉼\x8B\x5C���ޓə��x� ^�}�w�M�O���X�Q�pܛ݉��" },
        { "7826", "suan", "������⡅W׫�i�{���g�eѡ�x" },
    };
    pyitem pyTab_783[] = {
        { "783", "que", "ȴȱȷȸȳȵȲȶ��������s���U��������U�n߫���������Q P�Ԫ������F�_�`�C�]�b�����U�X�|�e�e� �I�a�B�o��" },
    };
    pyitem pyTab_784[] = {
        { "784", "rui", "������������ި�����҃��څ��Ǌ񐻒f�ɗM���G�I�c�����q�B��Ɓ�t�G�H�T�b�c�J��i��" },
        { "784", "sui", "���������������������������������ݴ����a������̋Ӎ������p�q�r�˛Ԝ�ܞv���խj���B�Z�X�[�u�w���⽗\xBF\x5C�����Z��ÜĎ�V�]ɯȚ���`�r\xD7\x5C�w�U���z�i�w��y� �S�m�[��}�l" },
    };
    pyitem pyTab_786[] = {
        { "786", "qun", "Ⱥȹ���҇��l�n� �V���t�d�Z�l������" },
        { "786", "run", "����ɘ����c�t" },
        { "786", "ruo", "������ټ���S���ǒ��ړɗ�c��x k�O���m�e�}���U" },
        { "786", "sun", "�������ݥ������ЌO���X�p�q���������s�p�S�����pʘ�V���{��Z" },
        { "786", "suo", "��������������ɯ�����������������Щ����������������qɳ�Ŝ��� ޫI�R���F�w�z�W�s�jȚ�R˥і�t���C\xE6\x5C�a�i�敻��[����" },
    };
    pyitem pyTab_82[] = {
        { "82", "ta", "������̤������̡̢̣����������������ં@�������ŉ�̫������ғ�d�ϛ�ʪ�͝ߝ�� ��H�H�k�N�Eя�w�n�D�c��ޅއ�Q�_�e�B�J�]�d�F�S�Y�`�����O�^�]��" },
    };
    pyitem pyTab_824[] = {
        { "824", "tai", "̧̨̫̬̥̦̩̪̭������߾����޷ۢ�惈�����r����U��L����B�E���@�����̝k�� M�}�x�F�����_�v� �rڱܖ����U�~�T" },
    };
    pyitem pyTab_826[] = {
        { "826", "tan", "̸̲̾̽��̶̵̷̴̼̯̰̳̺̹̱̮̻̿��۰����������������N�{�����@�c�d�ŉ�� ���򏎏��Z�����������ړ۔Z���ƕҘW�A�U��տ���h� ���׭f�a�D�c�U�g�W�������j���lݡ�I�nަ˓�g�fՄ�T�Z؍؝�y���]�a�v�g�U�t�Z���l" },
        { "826", "tao", "����������������������ػ��������߶�����G����Ҧ�����|���q������������� c������I�d�I�T�_�l�����I�iӑ�|�z��ݝޏ�[��c���N�w\xEE\x5C��u��P" },
    };
    pyitem pyTab_8264[] = {
        { "8264", "tang", "����������������������������������������������󥁹���ڃ������R�n�ɵ��Ց������U����y���霫�f�g�� C ����g�K�L���C�Q�g���yʎ�T�o�v�Z�}ۏ�T�o�h��M�|�K����E��O�W���G�U�h�n�y�S�h��" },
    };
    pyitem pyTab_83[] = {
        { "83", "te", "������߯��ʽ �Î�fΟ�cؖ�J���" },
    };
    pyitem pyTab_834[] = {
        { "834", "tei", "߯" },
    };
    pyitem pyTab_8364[] = {
        { "8364", "teng", "����������\x83\x5C�����b\xAF\x5C�L�T�gĆ̄Ο�`߂�L��v�I����" },
    };
    pyitem pyTab_84[] = {
        { "84", "ti", "��������������������������������������������㩂m�������ه��D���X�q�ύ��Ïw�܏ʏӐ����ɑ��ے���W�`�ǖ�馘N�Y�����v�z�ҫ��v�����Y�f�_���a�G�����H���lʃ�Š�y�s�}�{�|�g�B�pڮ��ڄڌԾ�yۇ�S�n܃��ޅއ�P�X�m�R�a�����}�f�e�w�����k�{�[�����Y�����e�f����" },
    };
    pyitem pyTab_8426[] = {
        { "8426", "tian", "�����������������������������̵��̅׆���\x89\x5C�Ǌ����Đ��ד�����pմ�L����_���k\xAE\x5C��s�x���t�]���V�_�[�k�K�G�g�b�j�qɻ�J�����C�`�q�L���`��������D�j�p�t������c�l�V" },
        { "8426", "tiao", "����������������������٬������Ѓ��G��Ҧ���i���G��f�Ӕ��q�I�]�җl�Եx��I�g�r�w�xÑŗ�K�VɂɉɊ�Cқ�A�{���q�}����p�x��\xEE\x5C�����f" },
    };
    pyitem pyTab_843[] = {
        { "843", "tie", "���������уcռ��G���z�u���N�@��@��~��F�����" },
    };
    pyitem pyTab_8464[] = {
        { "8464", "ting", "��ͣͦ��ͤͧͥ͢��͡����������������D�K���N��c�Ǎ��؎ߏa�d��H���w���s��N�P���E�j���[� É�J�b�P�Fߋ�b���c�F��" },
    };
    pyitem pyTab_8664[] = {
        { "8664", "tong", "ͬͨʹͭͰͲͱͳͯͮͩͫ����ͪ�����������١���킣�ׄ���L��M�d�����Q�q�z�ӖS���H�Զ��Ϝ�����ן� � ժI���]���ϳ����r�c���p�y��Ā��Ɍ�U�V�x�hԘ�U���P�n�~� �j����" },
    };
    pyitem pyTab_868[] = {
        { "868", "tou", "ͷ͵͸Ͷ������ʈǊ��U���䔫�Ӛ��}�������eш�I�O���϶��W�B�^��W" },
    };
    pyitem pyTab_88[] = {
        { "88", "tu", "��ͼ��Ϳ��ͺͻͽ͹;����ݱ����ܢ������l����D�E�M���T���_�x�č��O�L������\x93\x5C�����ŗ^�y�B�ޜ������f���d��\xB9\x5C�R�]ǁȋ\xC9\x5C�g���Tރ�Q��W���G�B�I�W�r���h���C" },
    };
    pyitem pyTab_8826[] = {
        { "8826", "tuan", "��������脌����C�F�t�������_���ؘ������`���l���u��˰�i�aɔущ؇��H���o����" },
    };
    pyitem pyTab_884[] = {
        { "884", "tui", "��������������߯�M�Q�U�����ь��w�ܐL����˰�~�vÓÕ��ɗ˔�L͑�dׂۃ۝׷�P�j�k�n�����D�o�h�s" },
    };
    pyitem pyTab_886[] = {
        { "886", "tun", "�������ζ�������ն���׆��p�d�ݏ����H�N�I������l����񸼃����Ćę�X�P�Zܔ���`������`" },
        { "886", "tuo", "������������������������������ر��٢��������������������M��c���s�����A����L�����ɓ�l�s�������E���͚��؛k�� � ��a�P�u��˰�X�FÓ�b���h�[�E��πІБЛӔӚ�q�f�hי˵ڗ�|܀�~��ސ�B�l���e�u�����W�X�j���n��C��D�z�W�r�K������" },
    };
    pyitem pyTab_92[] = {
        { "92", "wa", "�����������ݰ������������������승�z�܎��������@�A�ۜΝj� �|�[�������D�v�e�m֜ߜ�Ь�c�i��q���p�|" },
        { "92", "ya", "ѽѹ��ѺѿѼ��������Ѿ����ѻ��������������������������^�����o�����|�ᅃ��߹���s���B�L�R���׈ۉ����I�S���ގ����~������������Ъ��ŝQ���� �c�m�e���P�{�ٴl�����E���yʋҁ� ܈�`ݑ��а�X�E���lբ����f���g�s�����G\xFD\x5C����" },
        { "92", "za", "����զ���������ن������҇m�͇ԇَ����e�j�U�����ἒ���H�N�S�N�j�s�{���" },
    };
    pyitem pyTab_924[] = {
        { "924", "wai", "�������ÆJ��ز�x���" },
        { "924", "zai", "�������������������Ђ�ŒD�����֞Ğ��P�fǏن�d�P" },
    };
    pyitem pyTab_926[] = {
        { "926", "wan", "��������������������������������������ݸ�����ܹ��������ҁ^�{���\x84\x5C�d�e�n԰���G�ω����R�񎦏��񐭒e�̒畊���Öv�i�������𝟝Ϟ��T�D������w�����O�U�DÁ���{�|�X�f�H�Wؙ؞ٖ�@���l�k�nߐ���[�j��s��~�v�K�P�B�[\xF3\x5C�]��" },
        { "926", "yan", "����������������������������������������������������������������Ǧ����ܾ�������������������������������������������ٲ۱��۳���������́m���������B�����҄��]���y�������m�ǆ͇{�����������c�������ĉ��z�����Ԋ׋j�ǋ͋���E�ߍ����������M�i�r�s�t�vѲ���֏e�m���ݑ�����Z�����ɒ�C�R��V�������󗦗���ܙL�����뚇볛W䦛��ћ������{�����ĝv� �������ϟS�g���̟� w ��ݪP�_���J���[�x�����N�h�c�����t���w�d�E�F�G�rݲ�C�TȀȊ�B���W̚�i�sъ��ҍ�_ӃӅ�Pԝ�Vׅחڥ�V�W�]�bٞ�I���y܂���@�V�I���D�Z�z���U�U���Z����m�����C�U���v������V�Y�z��F�e�|�o�H�N�e�����`���}�����G�d�f�i�j�k�m�s�B�]�d�z����" },
        { "926", "yao", "Ҫҡҩҧ��ҤҨ����ҥңҦ��ҫҢԿ����Լű��ز������سߺ��������������ô�ց��x����e�������ڇy������欋Q���ƌa����i�A�C�׏ِQ�f��q�e�u���ꕬ�ꖔ�̗�e�l���|������Ȝ�实���� d ��q�r���Q���ɱl���t�n�������G�H�O���s���fŗ�w��ș�@�|ʁ�aˎ�iЉҝ�@�o�{�|׊ڌ�u�U�b��c������_�u��P�[������^���_�r�G�o" },
        { "926", "zan", "��������������������ɂ̃��������Ԍv�S�˔�������՞R�U�������`���d���N�{�{ד�mٝڎۊ�����A�Y�Z���" },
        { "926", "zao", "��������������������������������r�בV�җ_���۟��F�b�o�ѸY�^�r���R����Ł���k֍�Yڋۛ�s�" },
    };
    pyitem pyTab_9264[] = {
        { "9264", "wang", "��������������������â������聓���ǿ��̌����������������[���M�R���_���]�ʱZ�W�w�D�^͇\xCE\x5C�s�yނގ" },
        { "9264", "yang", "������������������������������������������������ւꄽ�؅n��t���I���P�����������Ēt�P�a���D���[ӳ������D���ӚT�ޚ眫���Y�柬�������W�j���S�@�D�f�k�n�y�oӢ�hԔ�U���I݌�Z�}��{��g����R�^�r��B��u�����F" },
        { "9264", "zang", "�����߲�������M�Z�n�� � ��n� �K�i�_�j�E�N�Q�z�G�v" },
    };
    pyitem pyTab_93[] = {
        { "93", "ye", "ҲҹҵҰҶүҳҺҴҸұҭҮ��ҷҬа�������������́��������p�����ȇS��������������l�I�J���wק����������@�I�K�Lб���ϕЕ░�����G�I�S�������Ϳ�c���֟����� { ����u���w�|�B�E����ݱ�~�F�J�M�]�v���P�X�y�E�U�d�H�v��N�Y�v�����@�B�w�E�g" },
        { "93", "ze", "��������զ������������������Ӂ��Ȅt�ޅ������K���������َ��k�����W�����t��g�z�ڜ��ɞ����G�c�������j�d�[�y�j�EϏ�]Ջֆ։�y��؟ّ��B�`�v" },
    };
    pyitem pyTab_934[] = {
        { "934", "wei", "ΪλδΧιθ΢ζβα��ΰ��ΣΥίκΨάηΩΤΡενξΫγοΦήέμ�������������������������������������������ޱ�������΃^���y�������҇�����̉��ËW�n�y�����_�e�����U�h���@�ΐi�̐Α��˒ړG�f�֓�͕��л��|�ۗܘL�ޛW�����w�����՝�����H�S�w����������ٟ� V � � �⢪c�^�|�M���_�I�L���z�u�}�S�j�o���S�����J�W�^�Y��ƄƑ�Uݴǋ��ȔȖ�Jɖ�l�e˗�v�O�T�V�k�o�G�l�o�E�A�W�}ӂӄԕՆ�^�~׈�~�b�c�Z�^�E�`�z���W�M���A�������G�S�f�l�t�|�Q�]�]�j���[\xF3\x5C�]�K�d�n�g�h�z����" },
        { "934", "zei", "��ό\xD9\x5C�a�f�e����" },
    };
    pyitem pyTab_936[] = {
        { "936", "wen", "�������������������������������Ѕ؅݆��e�p�䏨���㳑C�^�h�����j�S�X�v�z�⚍�b�؞ɟ��������۳R�g���˼y���A�Z���WÁÂ�[�|ʕ��ʟ˜�N�PΝ�Rю�nݘݜ�d������Z���y���w�b���������Y�j�s����" },
        { "936", "zen", "�����ԇד��P�U" },
    };
    pyitem pyTab_9364[] = {
        { "9364", "weng", "������޳��؉R�ՊT�Ǖ���Y\xB2\x5C����Ί�f�O�l�N" },
        { "9364", "zeng", "���������������שּ����I��Q�D���C�f��֟ٛ���{�i�_" },
    };
    pyitem pyTab_94[] = {
        { "94", "xi", "��ϴϸ��ϷϵϲϯϡϪϨ��ϥϢϮϧϰ��ϦϤ����ϣϭ������ϱ��ϳϩ����϶��ϫϬ��������������������������������������������������������������ݾ��������S�`�݄D�[�c�k�s�w�����A���҆��q�����I���G�֋f�Čj��ʺ�ʌڍƍ�Q�`�d�K���Џ���O�Y�_����������������Q�V��˺���ȕ����ʖy� �N���̗�~����S���@�]������lʪ��S�d�������񞢟X�_�m�y���������� O x � � ުL�Ԫ��I�N�t�����_���q���F�����G�O�Y�����k�]�u�G�M�{���p�x�����Z�[в�{�|�~�b�b�m�}�Y�j�t�Dʓ�@̟�E��΀Ή�k�P�a���u҂� �B�}ӂӄ�D�q�O�L�l�u֐�@�����G�H�g�l؉�T�V�i�vے�h�gۧ�E�S�q�@��M�R�l�|�b�c��a�e��^�蕴��S�K�^�v��I�U�e�F�O�q��w��N�]���w�@�^�����T� �_���Aۭ" },
        { "94", "yi", "һ��������������ҽ������������������������ʳ��������������Ҽ����Ҿҿ�����������ض���β���������������������������������������������������������ܲ����ڱ�����������������������٫���������������߮����������޲߽������د�U�VҲ�{���ʁ�٢��X�Ãx�|���σބ��ք���Fӡ����̨̾�������jҭ�҈I�و`�爣�ˉ��҉�Ϧʧ�抉���f�����΋ڌT���b�h������[�鍩�F�K�Ȏ���������M�o������������@���q���������������L��������~�̓񔏔�����ʩ��i�����˕ٕ��p�s�������ؖ������ח��]�������j�}���������]�c���������n��й�u����䪛��ś��͜����ɝ۞����ɟy�͟|�����֟۟� D J W�� � ��~�p�}�C�A������m�����G�e�ҵE�K�t�B�h�F�j�v�����m�J���X�S�_�O���X�[��ά�p�r���w�x�]�k�E�jŒŜ�N�i�q�U�^ɚ˄ˇ�[̈�~͂͆ΒΕΜρ���t�z��ЄБК�`�vы�A�]�~�~Ӕ�T�U�m�q�rԄ�B�O�x�u֖�b�g�h�rׂה�����[\xD8\x5C�s؊ؗ�Oٌٓژ�D�p�W�r�}�T�j�v�~��ސޖ� �z�c�t�y�{�����N�P�r�z�A�B�i���W��F�O�����d�e�u����c����J�a���U�V�{�����k�A�`�k�l�G�C���������^�g�s�����@�k�o�p�]���p�t�~" },
        { "94", "zi", "��������������֨�����������������������������������������������������������������چ��ꊗ���I�U� �j��h�U�Λd�������n�� ��R�u�޴ñ{�I���f���T�}�|�l�c�h�u�TƆƓƝǏȌɛ�F�I�`�J�D�Y�aڃڝ�d�wݖ���t�B�\xE4\x5C�O�S�tп�C�o�p���������R�U���b" },
    };
    pyitem pyTab_942[] = {
        { "942", "xia", "������ϿϺϹϼ��ϻ��Ͻ��Ͼ����������������要B�b�ق҅�ѽ����྇��Y����Aᬍ{�B�ˑ�Ѻ�ܓ����g���B��䤛ќ��ٞ����M���K�P���L���W�l�����d�o�E�[�����r�{�S��ʛ�rΘՒ�l�B�Y� �A��_�]�i�p���P�h� �y�T" },
        { "942", "zha", "��ը��բգեէ��թա������դզ����߸��������������������Բᄑ���~�߆Ƈ͊L�o���K�s��������c�����������Ř��͜ѝ����� ��h�����й��������d���z���P�x� �l�u�pՋ֊�A�Q�zۂ܈ށ�m��l��C�W�~�l�������O�e�v������" },
    };
    pyitem pyTab_9424[] = {
        { "9424", "zhai", "ժխծիկ���լ�����񩁅�Ȃ��z�~������Ȓn�Ɠ�`�Ȳ�z�y �����j�y��؟���S�~���d�S" },
    };
    pyitem pyTab_9426[] = {
        { "9426", "xian", "����������������������������������������������������ϳ����޺���ݲ����������������������������������ق]�M�g�m�n����Z�m����J���ɉA���h桊���橊������ҊދM�����͋�後����ݍs���M�ҏ`��㻑a������������̽�`�y�{�ȓ͔g�s���}���g����̙�����ϴ�ל��ǝ�奞n������A�����I�N�t���F�Q�B�G�]ʡ�h���v�ӳw��U� �[�i�S�ȹa�����`�L�m�����Q���h�����o�w���w�{��в�j�{�|�~�d�@�O�`�x�{���Wˁ\xCC\x5C�_�`�p̀͘�j�D�vҊ�^�t�P֛�]�R�t�D�`۟�]܌܎ݍ���_�z�����}�D�U�v��o�v������e�f�R�����U�`���y��@�W�u�M�r�x���N�������y���G���E" },
        { "9426", "xiao", "СЦ��������Ч����ФТ����Х������У�����������������������ٮ�P�΂j�儿���źŅ��D�����뻣���ۇC�E�V�Z�[�^�Ƈ�毊�n�鏖�k�|�����ӓ`�ѓϓߔ��Õ��ԗn�Ҙ��ϚR�Y�^�������ߜ��x���͞t������^����� _س�ƪV�����e�h�~�������n���G�q���S�}���g����������Ñą�����z�pʒ�@�ṙ̍�S�]�v�D�Fԉ�[�q�j�y֗�D�X�^�B���U�N�Y�}�򜽾ɧ�f�n�u�{�����j�r�^" },
        { "9426", "zhan", "վռսյմճձչջղ��պտ��նշոհ����칁��ׂ��~���������E�G����𒀔ؔ���C����^���֚ٚ���夬W���K�D�`Ǖ�Ư̜�t̻�f�O�a�t�`�dזǫ�j�@ۅ���uݚ�J߁\xE1\x5C���n��Q�s��e���� ���}�g�@�Z�D�r�c�r" },
        { "9426", "zhao", "����������צ�׳������س�������������گ�Ԇ����������˕ז��ҙ���媞� Y ��D�����@���S�|���^�A�Dǟ�����t֚�w��W�D��q�e�J�{��" },
    };
    pyitem pyTab_94264[] = {
        { "94264", "xiang", "���������������������������ή���������������������ܼ����ٺ����߂탨�������������������}�ږ٘U���󝋫������|�|�v���fč���e�G�Z�Jφ�i�VԔ�Kކ�_�l�m�x�}��t�}��{�����A����J\xF4\x5C�a���P�`�z����" },
        { "94264", "zhang", "���³��������������������������������۵����󯁟�@�z���Ǐ{���P�E�Е���q�o���d���w� Ûɟ�~�l�b��L�M� \xF0\x5C��J��" },
    };
    pyitem pyTab_943[] = {
        { "943", "xie", "дЩЬЪбѪлжЮмзкийШаЭегЫЯв����Ҷ��������ߢ�����������ޯ�����āĂ��ăD���愵�f�l����ஆ������f��A�G���r�@���ȌόьԌڍl�O�ǐe��������ӓa�yߡ���X�y�������ۘf���G쨚�֭�����Ȝ띢�ʞa����L�c�� X y�n�����c�m�c�I���X�e�u�������T�i����Ү�{�|�~�n�Zˆ�d�qϐϒ�~�Wр�C�p�i�nՙ�C�x�fא��ԥ���a���E�H���C�P���Rҳ���k�@�q���K�^�a�k����" },
        { "943", "zhe", "����������������������������ߡ����������ر���z����࿆��և��ˈ��������e�V����z�╆���l�����Κy�J���K�Y�q�������z�E�U�VП���xԀֆ֑֕�yׄ�W�m�t�H���@�m�O�N���X�C���p�v���" },
    };
    pyitem pyTab_9434[] = {
        { "9434", "zhei", "���@" },
    };
    pyitem pyTab_9436[] = {
        { "9436", "zhen", "���������������������������������������������������������驂E�ɴ���\x89\x5C�`����z�ǎ�����ꬒr���L�������_�b���זڗF�E�^���皋�l�m���ڵ᝛�ت������p�w���U���G�t�E���G���b�j���r�ZȜ�R�m͖А�]Ҙ\xD4\x5C�g�nؑ�c���f�Fݟ�tލ�Z�G�I�\xE2\x5C���g��P�����k�}�I�a�y���c�l�m����֡" },
    };
    pyitem pyTab_94364[] = {
        { "94364", "zheng", "��������������֤֢֣����������������ں����ة���͂t�J�����^���o�����򎬏��яՐ�~�Вc���@�ճ���ֹ��Ɯ��ڟA ��bY�k� ~�P�l�P�t�w�^Պ�C���t���`�P�@�S���]�g֡" },
    };
    pyitem pyTab_944[] = {
        { "944", "zhi", "ֱֻ֪֮��ָֽ֧֥֦��֨֩��֭֫֬��ְ֯��ֲ��ֳִֵֶַ��ֹֺ��ּ��־ֿ����������ʶ������������������������������ۤ���������������������������������ش�������΁v�~���f�u�����Ѓ��M���������A���^�p�����̉y�~������͋q��ʵ�����������Î��D�����Ï����ѐd�e�p���Ƒ�W�X�n�ؒ����Ów���������S�T�`�Ք��Ǖy�s�y�����ԗd���З��u�����ޘ������lص�D�E�b�������]����Z����\x9E\x5C�� êO�a�}�����F�U�W�����U�Yʾ��o�w�����A�_�h�o�q�~���������W�a�e���������@�{�������p�e�qĈ\xC5\x5C�]�WƇƏ� �Sˌ�ǔ�V�H�d�}ЁЗИ�u�jҞ�d�h�z�J�I�}�R�T�U� �|ٗ�N�yېەۗ�U�W܁�T�X�e��ތ�g�t۪�B����K�k�e����@�e�n�u\xEB\x5C�b\xF1\x5C�c��s���S�F�T�v���E�v��~�" },
    };
    pyitem pyTab_946[] = {
        { "946", "xin", "��������онп��Ѱ�����ضݷ��ܰ��꿁����r�ˇ����|���׌J���ߏQ���ב��ږ����A�E��L���ԟ{�^�UÒ�d�g�W�D�M܌ߔ��d\xE4\x5C��c��Q�^�g��" },
        { "946", "yin", "����ӡ����������������������������ܧ۴��ط���������������������Z�]���ځ��B�܃������w�������􈊿ш���Ҽ�A�H�|����\x8E\x5C�ҏJ�֑@\x91\x5C�������Ֆ@��V�a�����ә��J�P���ʛ���䱜^���ޜ�̶�����@�� �Z�l���K���E�a�w�H�������N���s���t���g�Z�M�_�a�a�P�r�P��ӗӝ�C�D�z�N׍�_�y�l�D�S�Y�i�w�y����f����L�[�� �������S�g���]�l������" },
    };
    pyitem pyTab_9464[] = {
        { "9464", "xing", "������������������������������ʡ�������ߩ��邆�Q�g�l���D�Ȋ�����y�ۛ����� ��w���M�гx�����mʤ�B�d�n͍�R�q�w�_�D�]�o��t����h��H�U�S�]" },
        { "9464", "ying", "ӦӲӰӪӭӳӬӮӥӢӱӨӯӤӣӧӫө������������ݺ�۫�������������������\x82\x5C���O�솦�Ӈ|�L����k������[�ʎc�g�_��ᑪ���l�t�w�@�����P���@�H�w�љ՛s�Ɯ�������}�����L�]�u�������������� I�������O�Z��`���j�A�Q�_�f�Y�k�x�I�M�K�t���������m�{�o�t�p�c�w�s΄Ξω�Nњ�L�h�G�s�a�A܅���v��]�A�����e�I�j���D�L�����K�W" },
    };
    pyitem pyTab_94664[] = {
        { "94664", "xiong", "��������������ܺ���M���܏��r���d�����r�K�wԞכלق�U" },
        { "94664", "zhong", "�����������������������������ڣ��Z�����d�����V�q�t�g�������ז��p�O�w���Ɵ� �~���r�N�rͯ�W�b�K���[��� ���W\xCD\x5C��u� �x\xD0\x5C�x�{�~�A� މ�`�{�V�R������" },
    };
    pyitem pyTab_9468[] = {
        { "9468", "zhou", "����������������������������������ݧ������������٪���Ãu�م�B�Ć�็����B����Ť�������֗�ע���@������L�J���T�H�Bף���N�Q���q���U���i���FȒ�g�kԗ�{Ռ�a�pמ�����k�Q�S�c�q�b���L�X��{����t��L�|�E�����B�@�b" },
    };
    pyitem pyTab_948[] = {
        { "948", "xiu", "����������������������������������ᶂc�����Ϝ�����㫋�L�P�N�������CÃÑ�W�^�vƒݬɊΐ�fфх��P�T��V�n�q�}��x�G� �M" },
        { "948", "zhu", "ס��������������������עףפ�������������������������������������������������٪�����������ۥ������Є������B�����ڈ|���ԌF���e���ٍ����o��������������������֙�������{Ţ����z���۟� T ��v���d�p���������m�����h�B�Z�a���A�Z���C�q�^�r���A�dɍ�x\xCB\x5C˟� ���wώ�E�W�N�]�}�D�T�i�Aڟ�B�H�Oގ���I�I�L���T��������[�v��|���f�^�E�������}��ؼ" },
    };
    pyitem pyTab_9482[] = {
        { "9482", "zhua", "ץצ�Γ���t��Đ�" },
    };
    pyitem pyTab_94824[] = {
        { "94824", "zhuai", "קת���ű��J���" },
    };
    pyitem pyTab_94826[] = {
        { "94826", "zhuan", "תרש׬��׫׭���������Q�]�����ʈ�t���N�����w�ғ��ĝ`�����A�U�u�|�e�i���M�x�Z�R�x�E�m�N�K�Nٍܞ�D������H" },
    };
    pyitem pyTab_948264[] = {
        { "948264", "zhuang", "װײׯ׳׮״��ױ������܉щՊy�ώ�㿑ޑߗ[�����r�` ���P���P�f�b�C�M��" },
    };
    pyitem pyTab_9484[] = {
        { "9484", "zhui", "׷׹׺׶׸׵����������������ܴ�鳛d�I�����q�������Y�P�J�i����Յ٘�V�W�^�F�M�Y�m�V� ���U�K�x" },
    };
    pyitem pyTab_9486[] = {
        { "9486", "zhun", "׼׻���������S�͌d���H�����ʮl�ﶛ���M�����q�RՁބ���n" },
        { "9486", "zhuo", "׽������׾����׿��������ߪ��������پ�����Q�����ׅ���ਇ��V�p�~���ߏ����ޓ�𔽔ٔڔ۔ޕ��z���������������לʝផ��O �K�k�����q�����B��W�S�m�U�M�v���|ީ�y�[ϗ�X�}Վ֑�}����ە���n�r�@�C�h�|���" },
    };
    pyitem pyTab_96[] = {
        { "96", "wo", "������������������������ݫ����ҁ������ɇf������ز����_�����Ӓڒܓ�N軖�����u����s�i�x���Y���C�Oğ�Pş�n�^�h΁�b�l�o�N�}��" },
        { "96", "yo", "Ӵ��ࡆч�" },
    };
    pyitem pyTab_9664[] = {
        { "9664", "yong", "��ӿ��ӵӼ��ӺӽӾӶӻӸӹӷ�����ٸܭ���������ނ��ʆއ����M���ݍӏb���[�~���Ӑ���N�햺�Ԙ����K�ў� ��M�b�l���H�c���o�K޳ԁ�x���a�{�k�V�O�t��J�����I���x" },
        { "9664", "zong", "����������������������~�������ُĐ��Ȑߒ֓K�i���f�Q�ޘ��|�����П� Q�`�f�S�������O�F�C�h�t�����G�k�v���Cŋ� �~ɐ�x�q�rۙ�S�C�E�Q�R�i�W�A�i�R�`" },
    };
    pyitem pyTab_968[] = {
        { "968", "you", "����������������������������������������������ݬ������ݵ������������ݯ����������٧�J��������̾�N�e����m���M�̌��f�r��J�M�Q�n�ɑ��œA����X�`�A�����Ԛ��S�Y���w�|�����H�X � � ��q�D�h�_�v���x�n�l�g�h�m�i�u���UÅÑ�h�x�K�~�Y͜фх�I�T�z�jݒޔޜ�K�[߈�]���R��B�P���f���O���~" },
        { "968", "zou", "����������۸�������������o�嗯��騹t�j�cǈՌ�[�Y�u�|���O�P�w����" },
    };
    pyitem pyTab_977[] = {
        { "977", "zpp", "�����ܳ���������������ح���د��ڢ����������������ڥ����������ؼ�������������" },
    };
    pyitem pyTab_98[] = {
        { "98", "wu", "������������������������������������������������������������������أ������������������������������������؁W�����٨�W�����Ǆ��Յǅ҆�ฆ�f�눺��]���V�ÊӊՋ����}���ΎďT�v���퐒�������G�H�N�h����츕J�f�g�Ø�Tĸ�@�A�^�����r�לם����o���ʫb� �@���N�Wy�J�I�������P�˹��|Ċƕ�`Īʏ�FΏ�w�G�_�`�Oڏ�R�A�N�w�E�n�o�q�u���F���F�W�}\xF2\x5C�������M�^�F�~�c�H�I�r������" },
        { "98", "xu", "�����������������������������������������������ޣ���������ڼ��������ځ����݁�����T���ۄԅrŻ����݆���I�b�u���ي����㋀�����V��j���A��T����긕B�d�v� ���ԗ옏���A�H�[�_�~�T�U�M����G�s����T�������L�N�S�r�W�x���P�V� �n�A�w�{���H�]�m���a���R�^�[ɒʌ�v˅̐̓�m͂�dҎ��Ӓ�S�[Ԃ՚�[�~֎֞ک� �[а���_��`��������P�q�z��r" },
        { "98", "yu", "������������������������������������������������������������������������������ξ����ԡԢԣԤԥԦε����������������������������������������خ��ٶ��������������������������ع�������������@�������R�q�����h���ʅP������ࡆ�ெ����ɇo�އ��S�ֈ�Ϧ�ʊӊ؋U�V�����������}�ȍ�����Z�����󐃐������j�Ñ����G�T�֒���� �˔є�꼖f��������������@�K�ș��Q�e�u�@�A����M�U�����O���ĝ˰Ğ����~�П� V � ��z�����]�_�Z�^�r�m�����_���K�E�I���_�����H�N���R�r�C�U�{���z�h�B�Z�n�u�s���N�|�����c��ń�RԷƑƜ�S���g�h�fə�vʚ� �v�P�]�G���C΃�L�X�j���s�@ш�D�Z՘�I�~�u؂؅؋�u܆�hݛ�X�}�N�yߎ�N�h�C�q�D���`�o�[��~�������|��T�k�M�A�Y��J��N�|�S�e��^�k�c�d�r�~����V�i�N�r\xF8\x5C�������O�}���C�O���r�{�" },
        { "98", "zu", "���������������������ށ��ǂy���a�X���Ҍ������ސI���ڴ� ��~�^�B�����M\xBE\x5C���{�a�{֊��ڎ�nۀ����I�J�@�c�����x�z��" },
    };
    pyitem pyTab_9826[] = {
        { "9826", "xuan", "ѡ������������ѤѣѢȯ������������������������������ب���I���H�銈���l���֏��R�ːБ��ғE׫ߧ�R�]�t��ů�×]�C�e�丝ן@���B���R�t�I�K�u�v���_�P���U���P���L�k���h�������A�Q�k�{�Rʞ�B�T͕͛�hύ�fО՝�X�X�z�K܎�F�x߀�C�m�M��G�I��X������C�~" },
        { "9826", "yuan", "ԶԱԪԺԲԭԸ԰ԮԳԹԩԴԵԬԨԷԫԧԯ��������������ܾ������ܫ�����ʄu�����ʆT��������@�A�튀������� �����w��������z���C�g�r��丛�Y�a�e�m���ƞ��]�j�x\xB1\x5C���������F�~�O�A�V�d�Q�e�W͛�Q�m�z�c�j�rцѓ�wؒ�O�k�@�R�h߇ߖ�J��������E��r�{���S�x�t� �M�g�x����" },
        { "9826", "zuan", "����׬����߬���S���ܔ���e�g�F�j�yٍ�g�j�" },
    };
    pyitem pyTab_983[] = {
        { "983", "xue", "ѧѩѪѥѨ��Ѧ�������l���������y���W���N�G�V�Ė��]�ݛQ������͞yȲ�� K ��N�T�x�}ŖƋ�HЏ�{�o���p�G�j�z�Y�|�L���`" },
        { "983", "yue", "��ԽԼԾ��������Ի˵��Կ�����������܆d��������x���[�����x�����F�`�Ք^��������˸�] q ~�h���E�j�^���M�C�a�l���sğҩ�g�Q�R͑����f�hڌڔ���S�V܋�_�X�J��p��������N�V�g��" },
    };
    pyitem pyTab_984[] = {
        { "984", "zui", "��������Ѿ���ީ�����������T�ݴ镍�K���蘧��d�i�ޝ��r�B���B�s�S�x��Ï�`�f�E�P�U��@�h" },
    };
    pyitem pyTab_986[] = {
        { "986", "xun", "ѰѶѬѵѭѳѮѲѸѱѴѷѫ��ѯ���������������ۨ�ަ޹������߁����ńׄ��_�C�e�x� �_�_���ˊQ����O���e㪐��M�͔��h�՗D��ߚ�����̶���F���[����� @ ` o w�F⡫��R�������S�o�J�r�k�cѤĝݡȝ�M�n�`�Q�r�y�WӍӖӜԃ�bޙ�Ҷ��d���R����Z��S\xF7\x5C�Z��" },
        { "986", "yun", "������������������������Ա���۩ܿ�����������ف��ք򅰅ԆT������@�[�u����ξ��Թ����C�d�l�����X��������V����ݝ����������«j�s���ܱd�p�n�S�o�J�����A�Z�a�I���m�ZԷ\xC7\x5C���C�Q�l�|ʕʟ˜�N�Q΂юؒلٚ�O�Sݘݜ�d\xDF\x5C�i�y�d�j�q�]�m�E��B�r�y��f�a�N�a�q�y" },
        { "986", "zun", "������ߤ�׃Q�V�g��������Ēۖ瞈�����I�J�I�Z�����V����" },
        { "986", "zuo", "������������������������������������է�F��������ۖ×��Ķ}���i�d���z�g�y�zɁЊՋ���������" },
    };
    pyitem pyTab_987[] = {
        { "987", "zts", "���ĮB�`�ԁk�����K�e�u���H�_�g�V�Å��c���s���҅�g�h�Ɇ��ֆ���Ła���݇ցY�b���j�U���f�eψ�|ŉ�gޑ�{���]�W�i�̓����F�M���x�_���i��C�ҟ�ǂ��G���Q\xA0\x5C�Fű��Ű��j�j�M�s�����C�n�ԃ͆R裃������@�ݖӁõ�S���{�~�L�������A�r���k�z�z�Y�W�l�h��Ď��Č��������" },
    };
    pyitem pyTab_988[] = {
        { "988", "zuu", "�ˏ��ɕ�G���`�����ě �H�e�� H�i���s�E�S�qņƊ�IɅˀ�C�_�C�J�x�m�w���[�T��" },
    };

    static const t9item t9TableCN[] = {
        { "0", 1, pyTab_0 },
        { "2", 1, pyTab_2 },
        { "22", 2, pyTab_22 },
        { "224", 2, pyTab_224 },
        { "226", 4, pyTab_226 },
        { "2264", 2, pyTab_2264 },
        { "23", 1, pyTab_23 },
        { "234", 1, pyTab_234 },
        { "236", 2, pyTab_236 },
        { "2364", 2, pyTab_2364 },
        { "24", 3, pyTab_24 },
        { "242", 1, pyTab_242 },
        { "2424", 1, pyTab_2424 },
        { "2426", 4, pyTab_2426 },
        { "24264", 1, pyTab_24264 },
        { "243", 2, pyTab_243 },
        { "2436", 1, pyTab_2436 },
        { "24364", 1, pyTab_24364 },
        { "244", 1, pyTab_244 },
        { "246", 1, pyTab_246 },
        { "2464", 1, pyTab_2464 },
        { "24664", 1, pyTab_24664 },
        { "2468", 1, pyTab_2468 },
        { "248", 1, pyTab_248 },
        { "24824", 1, pyTab_24824 },
        { "24826", 1, pyTab_24826 },
        { "248264", 1, pyTab_248264 },
        { "2484", 1, pyTab_2484 },
        { "2486", 2, pyTab_2486 },
        { "26", 3, pyTab_26 },
        { "264", 1, pyTab_264 },
        { "2664", 1, pyTab_2664 },
        { "268", 1, pyTab_268 },
        { "28", 2, pyTab_28 },
        { "2826", 1, pyTab_2826 },
        { "284", 1, pyTab_284 },
        { "286", 2, pyTab_286 },
        { "3", 1, pyTab_3 },
        { "32", 2, pyTab_32 },
        { "324", 1, pyTab_324 },
        { "326", 3, pyTab_326 },
        { "3264", 2, pyTab_3264 },
        { "33", 1, pyTab_33 },
        { "334", 2, pyTab_334 },
        { "336", 2, pyTab_336 },
        { "3364", 2, pyTab_3364 },
        { "34", 2, pyTab_34 },
        { "342", 1, pyTab_342 },
        { "3426", 2, pyTab_3426 },
        { "343", 1, pyTab_343 },
        { "3464", 1, pyTab_3464 },
        { "348", 1, pyTab_348 },
        { "36", 2, pyTab_36 },
        { "364", 1, pyTab_364 },
        { "3664", 1, pyTab_3664 },
        { "368", 2, pyTab_368 },
        { "37", 1, pyTab_37 },
        { "38", 2, pyTab_38 },
        { "3826", 1, pyTab_3826 },
        { "384", 1, pyTab_384 },
        { "386", 2, pyTab_386 },
        { "42", 2, pyTab_42 },
        { "424", 2, pyTab_424 },
        { "426", 4, pyTab_426 },
        { "4264", 2, pyTab_4264 },
        { "43", 2, pyTab_43 },
        { "434", 2, pyTab_434 },
        { "436", 2, pyTab_436 },
        { "4364", 2, pyTab_4364 },
        { "4664", 2, pyTab_4664 },
        { "468", 2, pyTab_468 },
        { "48", 2, pyTab_48 },
        { "482", 2, pyTab_482 },
        { "4824", 2, pyTab_4824 },
        { "4826", 2, pyTab_4826 },
        { "48264", 2, pyTab_48264 },
        { "484", 2, pyTab_484 },
        { "486", 4, pyTab_486 },
        { "52", 2, pyTab_52 },
        { "524", 2, pyTab_524 },
        { "526", 4, pyTab_526 },
        { "5264", 2, pyTab_5264 },
        { "53", 2, pyTab_53 },
        { "534", 2, pyTab_534 },
        { "536", 1, pyTab_536 },
        { "5364", 2, pyTab_5364 },
        { "54", 2, pyTab_54 },
        { "542", 2, pyTab_542 },
        { "5426", 4, pyTab_5426 },
        { "54264", 2, pyTab_54264 },
        { "543", 2, pyTab_543 },
        { "546", 2, pyTab_546 },
        { "5464", 2, pyTab_5464 },
        { "54664", 1, pyTab_54664 },
        { "548", 2, pyTab_548 },
        { "56", 1, pyTab_56 },
        { "5664", 2, pyTab_5664 },
        { "568", 2, pyTab_568 },
        { "58", 4, pyTab_58 },
        { "582", 1, pyTab_582 },
        { "5824", 1, pyTab_5824 },
        { "5826", 3, pyTab_5826 },
        { "58264", 1, pyTab_58264 },
        { "583", 2, pyTab_583 },
        { "584", 1, pyTab_584 },
        { "586", 5, pyTab_586 },
        { "6", 3, pyTab_6 },
        { "62", 2, pyTab_62 },
        { "624", 2, pyTab_624 },
        { "626", 4, pyTab_626 },
        { "6264", 2, pyTab_6264 },
        { "63", 2, pyTab_63 },
        { "634", 2, pyTab_634 },
        { "636", 2, pyTab_636 },
        { "6364", 2, pyTab_6364 },
        { "64", 3, pyTab_64 },
        { "6426", 4, pyTab_6426 },
        { "64264", 1, pyTab_64264 },
        { "643", 2, pyTab_643 },
        { "646", 2, pyTab_646 },
        { "6464", 2, pyTab_6464 },
        { "648", 2, pyTab_648 },
        { "66", 1, pyTab_66 },
        { "6664", 1, pyTab_6664 },
        { "668", 2, pyTab_668 },
        { "68", 4, pyTab_68 },
        { "6826", 1, pyTab_6826 },
        { "683", 1, pyTab_683 },
        { "686", 1, pyTab_686 },
        { "72", 2, pyTab_72 },
        { "724", 2, pyTab_724 },
        { "726", 6, pyTab_726 },
        { "7264", 3, pyTab_7264 },
        { "73", 2, pyTab_73 },
        { "734", 1, pyTab_734 },
        { "736", 3, pyTab_736 },
        { "7364", 3, pyTab_7364 },
        { "74", 4, pyTab_74 },
        { "742", 2, pyTab_742 },
        { "7424", 1, pyTab_7424 },
        { "7426", 6, pyTab_7426 },
        { "74264", 2, pyTab_74264 },
        { "743", 3, pyTab_743 },
        { "7434", 1, pyTab_7434 },
        { "7436", 1, pyTab_7436 },
        { "74364", 1, pyTab_74364 },
        { "744", 1, pyTab_744 },
        { "746", 2, pyTab_746 },
        { "7464", 2, pyTab_7464 },
        { "74664", 1, pyTab_74664 },
        { "7468", 1, pyTab_7468 },
        { "748", 2, pyTab_748 },
        { "7482", 1, pyTab_7482 },
        { "74824", 1, pyTab_74824 },
        { "74826", 1, pyTab_74826 },
        { "748264", 1, pyTab_748264 },
        { "7484", 1, pyTab_7484 },
        { "7486", 2, pyTab_7486 },
        { "76", 1, pyTab_76 },
        { "7664", 2, pyTab_7664 },
        { "768", 3, pyTab_768 },
        { "78", 4, pyTab_78 },
        { "782", 1, pyTab_782 },
        { "7826", 3, pyTab_7826 },
        { "783", 1, pyTab_783 },
        { "784", 2, pyTab_784 },
        { "786", 5, pyTab_786 },
        { "82", 1, pyTab_82 },
        { "824", 1, pyTab_824 },
        { "826", 2, pyTab_826 },
        { "8264", 1, pyTab_8264 },
        { "83", 1, pyTab_83 },
        { "834", 1, pyTab_834 },
        { "8364", 1, pyTab_8364 },
        { "84", 1, pyTab_84 },
        { "8426", 2, pyTab_8426 },
        { "843", 1, pyTab_843 },
        { "8464", 1, pyTab_8464 },
        { "8664", 1, pyTab_8664 },
        { "868", 1, pyTab_868 },
        { "88", 1, pyTab_88 },
        { "8826", 1, pyTab_8826 },
        { "884", 1, pyTab_884 },
        { "886", 2, pyTab_886 },
        { "92", 3, pyTab_92 },
        { "924", 2, pyTab_924 },
        { "926", 5, pyTab_926 },
        { "9264", 3, pyTab_9264 },
        { "93", 2, pyTab_93 },
        { "934", 2, pyTab_934 },
        { "936", 2, pyTab_936 },
        { "9364", 2, pyTab_9364 },
        { "94", 3, pyTab_94 },
        { "942", 2, pyTab_942 },
        { "9424", 1, pyTab_9424 },
        { "9426", 4, pyTab_9426 },
        { "94264", 2, pyTab_94264 },
        { "943", 2, pyTab_943 },
        { "9434", 1, pyTab_9434 },
        { "9436", 1, pyTab_9436 },
        { "94364", 1, pyTab_94364 },
        { "944", 1, pyTab_944 },
        { "946", 2, pyTab_946 },
        { "9464", 2, pyTab_9464 },
        { "94664", 2, pyTab_94664 },
        { "9468", 1, pyTab_9468 },
        { "948", 2, pyTab_948 },
        { "9482", 1, pyTab_9482 },
        { "94824", 1, pyTab_94824 },
        { "94826", 1, pyTab_94826 },
        { "948264", 1, pyTab_948264 },
        { "9484", 1, pyTab_9484 },
        { "9486", 2, pyTab_9486 },
        { "96", 2, pyTab_96 },
        { "9664", 2, pyTab_9664 },
        { "968", 2, pyTab_968 },
        { "977", 1, pyTab_977 },
        { "98", 4, pyTab_98 },
        { "9826", 3, pyTab_9826 },
        { "983", 2, pyTab_983 },
        { "984", 1, pyTab_984 },
        { "986", 4, pyTab_986 },
        { "987", 1, pyTab_987 },
    };

#include <string.h>
    static int t9compare(const char *key, PCPYITEM item2)
    {
        return strcmp(key, item2->T9);
    }
    typedef int (*cmpfunc)(const void *, const void *);

    static PCT9ITEM PY_MatchHZ(const char *number)
    {
        PCT9ITEM ret = (PCT9ITEM)bsearch(number,
                               t9TableCN, sizeof(t9TableCN) / sizeof(t9TableCN[0]),
                               sizeof(t9TableCN[0]), (cmpfunc)t9compare);
        return ret;
    }
    static PCT9ITEM PY_MatchEN(char number)
    {
        if((number < '0') || (number > '9'))
            return NULL;
        return &t9TableEN[number - '0'];
    }
}

const QSize smallSize = QSize(167, 208);
const QSize bigSize = QSize(167*2, 208*2);
T9Widget::T9Widget(QWidget *recver, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::T9Widget)
    , msgReceiver(recver)
{
    QFont fnt = this->font();
    fnt.setPixelSize(12);
    this->setFont(fnt);
    isZoomIn = false;
    this->setMinimumSize(smallSize);
    this->setMaximumSize(smallSize);
    isMoving = false;

    currentMethod = chinese;
    {
        for(unsigned int i = 0; i < sizeof(methodEnableList) / sizeof(methodEnableList[0]); i++)
            methodEnableList[i] = true;
    }
    maxCount = 0;
    pageCount = 0;
    currentPage = 0;
    confirmHZ = -1;

    pyMaxCount = 0;
    pyPageCount = 0;
    pyCurrentPage = 0;
    currentPY = 0;

    ui->setupUi(this);
    ui->tipLabel->setAutoFillBackground(true);
    this->setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
    this->installEventFilter(this);
//    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_InputMethodEnabled);
    this->setFocusPolicy(Qt::NoFocus);
    this->setFocusProxy(QApplication::focusWidget());

    pyGroup = new QButtonGroup(this);
    pyGroup->addButton(ui->pyBtn0, 0);
    pyGroup->addButton(ui->pyBtn1, 1);
    pyGroup->addButton(ui->pyBtn2, 2);
    connect(pyGroup, SIGNAL(buttonClicked(int)), this, SLOT(onPyClicked(int)));

    hzGroup = new QButtonGroup(this);
    hzGroup->addButton(ui->hzBtn0, 0);
    hzGroup->addButton(ui->hzBtn1, 1);
    hzGroup->addButton(ui->hzBtn2, 2);
    hzGroup->addButton(ui->hzBtn3, 3);
    hzGroup->addButton(ui->hzBtn4, 4);
    connect(hzGroup, SIGNAL(buttonClicked(int)), this, SLOT(onHzClicked(int)));

    numberGroup = new QButtonGroup(this);
    numberGroup->addButton(ui->n0Btn, 0);
    numberGroup->addButton(ui->n1Btn, 1);
    numberGroup->addButton(ui->n2Btn, 2);
    numberGroup->addButton(ui->n3Btn, 3);
    numberGroup->addButton(ui->n4Btn, 4);
    numberGroup->addButton(ui->n5Btn, 5);
    numberGroup->addButton(ui->n6Btn, 6);
    numberGroup->addButton(ui->n7Btn, 7);
    numberGroup->addButton(ui->n8Btn, 8);
    numberGroup->addButton(ui->n9Btn, 9);

    connect(numberGroup, SIGNAL(buttonClicked(int)), this, SLOT(onNumberClicked(int)));

    QPixmap p[2][10];
    for(int i = 0; i < 10; i++)
    {
        p[0][i].loadFromData(RAWRES::numMap[i].pic, RAWRES::numMap[i].size);
        btnIcon[0][i].addPixmap(p[0][i]);
        p[1][i].loadFromData(RAWRES::sysMap[i].pic, RAWRES::sysMap[i].size);
        btnIcon[1][i].addPixmap(p[1][i]);
    }

    changeUI();
}

T9Widget::~T9Widget()
{
    delete ui;
}

void T9Widget::changeUI()
{
    if(!methodEnableList[currentMethod])
    {
        this->setEnabled(false);
        switchMethod();
        return;
    }
    else
        this->setEnabled(true);
    int btnIconGroup = 0;
    switch(currentMethod)
    {
    case english:
        ui->methodBtn->setText(tr("ENG"));
        break;
    case chinese:
        ui->methodBtn->setText(tr("CHS"));
        break;
    case number:
        ui->methodBtn->setText(tr("NUM"));
        break;
    case syssymbol:
        ui->methodBtn->setText("System");
        btnIconGroup = 1;
        break;
    default:
        break;
    }
    for(int i = 0; i < 10; i++)
    {
        numberGroup->button(i)->setIcon(btnIcon[btnIconGroup][i]);
    }
    int i;
    for(i = 0; i < pyGroup->buttons().count(); i++)
        pyGroup->button(i)->setText("");
    for(i = 0; i < hzGroup->buttons().count(); i++)
        hzGroup->button(i)->setText("");
    inputString = "";
    ui->tipLabel->setText(inputString);
    updateT9UI(T9Widget::ReloadNumberString);
}

void T9Widget::updateT9UI(int type)
{
    if(type & T9Widget::ReloadNumberString)
    {
        readyPYList = NULL;
//        readyPYList.clear();
        confirmHZ = -1;

        currentPY = 0;
        pyMaxCount = 0;
        pyCurrentPage = 0;
        pyPageCount = 0;
        switch(currentMethod)
        {
        case english:
            readyPYList = T9MAP::PY_MatchEN(inputString.toAscii().constData()[0]);
            break;
        case chinese:
            /*int count = */
            //T9MAP::PY_MatchHZ(inputString.toAscii().constData() , readyPYList);
            readyPYList = T9MAP::PY_MatchHZ(inputString.toAscii().constData());
            break;
        default:
            break;
        }
        if(readyPYList)
            pyMaxCount = readyPYList->count;
        int btnCount = pyGroup->buttons().count();
        pyPageCount = (pyMaxCount + btnCount - 1) / btnCount;
        pyCurrentPage = 0;
        currentPY = 0;
        type |= T9Widget::ReloadPinYin;
    }
    if(type & T9Widget::ReloadPinYin)
    {
        readyCharList.clear();
        maxCount = 0;
        pageCount = 0;
        currentPage = 0;
        if(currentMethod == english)
        {
            currentPY = 0;
            if(readyPYList)
            if(readyPYList->count > 0)
            {
                const char *enString = (const char *)readyPYList->pyTab[0].HZ;
                if(enString != NULL)
                {
                    while(*enString)
                        readyCharList.append(QString(*enString++));
                }
            }
        }
        else if(currentMethod == chinese)
        {
            int curIdx = currentPY + pyCurrentPage * pyGroup->buttons().count();
            if(readyPYList)
            if(curIdx < readyPYList->count)
            {
                const char *p = (const char *)readyPYList->pyTab[curIdx].HZ;
                while(*p)
                {
                    readyCharList.append(QTextCodec::codecForName("GB2312")->toUnicode(p, 2));
                    p += 2;
                }
            }
        }
        maxCount = readyCharList.count();
        int btnCount = hzGroup->buttons().count();
        pageCount = (maxCount + btnCount - 1) / btnCount;
        currentPage = 0;
    }
    int i;
    ui->pyPgUp->setEnabled(pyCurrentPage > 0);
    ui->pyPgDn->setEnabled(pyCurrentPage < pyPageCount - 1);
    int pyPageOffset = pyCurrentPage * pyGroup->buttons().count();
    for(i = 0; i < pyGroup->buttons().count(); i++)
    {
        QAbstractButton *btn = pyGroup->button(i);
        QFont fnt = btn->font();
        fnt.setBold(i == currentPY);
        btn->setFont(fnt);
        if(pyPageOffset + i < pyMaxCount)
            btn->setText(readyPYList->pyTab[pyPageOffset + i].PY);
        else
            btn->setText("");
    }
    ui->pgUpBtn->setEnabled(currentPage > 0);
    ui->pgDnBtn->setEnabled(currentPage < pageCount - 1);
    int pageOffset = currentPage * hzGroup->buttons().count();
    for(i = 0; i < hzGroup->buttons().count(); i++)
    {
        QAbstractButton *btn = hzGroup->button(i);
        QFont fnt = btn->font();
        fnt.setBold(i == confirmHZ);
        btn->setFont(fnt);
        if(pageOffset + i < maxCount)
            btn->setText(readyCharList.at(pageOffset + i));
        else
            btn->setText("");
    }
}

void T9Widget::switchMethod()
{
    int nextMethod = currentMethod;
    do {
        if(++nextMethod >= METHODMAX)
            nextMethod = 0;
        if(methodEnableList[nextMethod])
            break;
    } while(nextMethod != currentMethod);
    currentMethod = INPUTMETHOD(nextMethod);
    if(!methodEnableList[currentMethod])
    {
        this->setEnabled(false);
        return;
    }
//    if(currentMethod == syssymbol)
//        currentMethod = chinese;
//    else if(currentMethod == chinese)
//        currentMethod = english;
//    else
//        currentMethod = syssymbol;
    changeUI();
}

void T9Widget::pageUp()
{
    if(--currentPage < 0)
        currentPage = 0;
    updateT9UI();
}

void T9Widget::pageDown()
{
    if(++currentPage >= pageCount)
        currentPage = pageCount - 1;
    if(currentPage < 0)
        currentPage = 0;
    updateT9UI();
}

void T9Widget::moveLeft()
{
    int nextHZ = confirmHZ - 1;
    if(nextHZ < 0)
    {
        confirmHZ = 0;
        pageUp();
        return;
    }
    if(!hzGroup->button(nextHZ)->text().isEmpty())
    {
        confirmHZ = nextHZ;
        updateT9UI(T9Widget::ReloadUI);
    }
}

void T9Widget::moveRight()
{
    int nextHZ = confirmHZ + 1;
    int pageSize = hzGroup->buttons().count();
    if(nextHZ >= pageSize)
    {
        confirmHZ = 0;
        pageDown();
        return;
    }
    if(hzGroup->button(nextHZ)->text().isEmpty())
        nextHZ = confirmHZ;
    if(nextHZ == confirmHZ)
        return;
    if(!hzGroup->button(nextHZ)->text().isEmpty())
    {
        confirmHZ = nextHZ;
        updateT9UI(T9Widget::ReloadUI);
    }
}

void T9Widget::pyPageUp()
{
    if(--pyCurrentPage < 0)
        pyCurrentPage = 0;
    updateT9UI(T9Widget::ReloadPinYin);
}

void T9Widget::pyPageDown()
{
    if(++pyCurrentPage >= pyPageCount)
        pyCurrentPage = pyPageCount - 1;
    updateT9UI(T9Widget::ReloadPinYin);
}

void T9Widget::pyMoveLeft()
{
    int nextPY = currentPY - 1;
    if(nextPY < 0)
    {
        currentPY = 0;
        pyPageUp();
        return;
    }
    currentPY = nextPY;
    updateT9UI(T9Widget::ReloadPinYin);
}

void T9Widget::pyMoveRight()
{
    int nextPY = currentPY + 1;
    int pageSize = pyGroup->buttons().count();
    if(nextPY >= pageSize)
    {
        currentPY = 0;
        pyPageDown();
        return;
    }
    if(readyPYList)
    if((pageSize * pyCurrentPage + nextPY) < readyPYList->count)
    {
        currentPY = nextPY;
        updateT9UI(T9Widget::ReloadPinYin);
    }
}

void T9Widget::keyPressEvent(QKeyEvent *ev)
{
    switch(ev->key())
    {
    case '0' ... '9':
        onNumberClicked(ev->key() - '0');
        break;
    case '*':
        on_starBtn_clicked();
        break;
    case Qt::Key_F11:
        on_jingBtn_clicked();
        break;
    case Qt::Key_Escape:
        on_methodBtn_clicked();
        break;
    case Qt::Key_Backspace:
        on_backSpaceBtn_clicked();
        break;
    case Qt::Key_F12:
        on_spaceBtn_clicked();
        break;
    case Qt::Key_Enter:
        on_enterBtn_clicked();
        break;
    default:
        break;
    }
}

void T9Widget::mousePressEvent(QMouseEvent *ev)
{
    isMoving = true;
    lastPnt = ev->pos() + pos();
}

void T9Widget::mouseMoveEvent(QMouseEvent *ev)
{
    if(!isMoving)
        return;
    if((lastPnt.x() < 0) && (lastPnt.y() < 0))
        lastPnt = ev->pos();
    else
    {
        QPoint to = pos() + ev->pos() - lastPnt;
        lastPnt = ev->pos() + pos();
        move(pos() + to);
    }
}

void T9Widget::mouseReleaseEvent(QMouseEvent *ev)
{
    Q_UNUSED(ev);
    isMoving = false;
    lastPnt = QPoint(-1, -1);
}

void T9Widget::onNumberClicked(int id)
{
    if(confirmHZ >= 0)
    {
        onHzClicked(id - 1);
        return;
    }
    switch(currentMethod)
    {
    case english:
    case chinese:
        inputString += (id + '0');
        break;
    case number:
        //QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_0 + id, Qt::NoModifier));
        emit newString(QString() + char(id + '0'));
        break;
    default:
        switch(id)
        {
        case 0:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Insert, Qt::NoModifier));
            break;
        case 1:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Home, Qt::NoModifier));
            break;
        case 2:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Up, Qt::NoModifier));
            break;
        case 3:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_PageUp, Qt::NoModifier));
            break;
        case 4:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Left, Qt::NoModifier));
            break;
        case 5:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Tab, Qt::NoModifier));
            break;
        case 6:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Right, Qt::NoModifier));
            break;
        case 7:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_End, Qt::NoModifier));
            break;
        case 8:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Down, Qt::NoModifier));
            break;
        case 9:
            QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_PageDown, Qt::NoModifier));
            break;
        }
        break;
    }
    ui->tipLabel->setText(inputString);
    updateT9UI(T9Widget::ReloadNumberString);
}

void T9Widget::onHzClicked(int id)
{
    QString txt = hzGroup->button(id)->text();
    if(!txt.isEmpty())
        emit newString(txt);
    if(currentMethod == english)
        inputString = inputString.mid(1);
    else if(currentMethod == chinese)
        inputString = "";
    ui->tipLabel->setText(inputString);
    updateT9UI(T9Widget::ReloadNumberString);
    confirmHZ = -1;
//    QCoreApplication::postEvent(eventRecver, key);
}

void T9Widget::onPyClicked(int id)
{
    if(currentMethod == chinese)
    if(readyPYList)
    if(id < readyPYList->count)
    {
        currentPY = id;
        updateT9UI(T9Widget::ReloadPinYin);
    }
}

void T9Widget::on_pgUpBtn_clicked()
{
    pageUp();
}

void T9Widget::on_pgDnBtn_clicked()
{
    pageDown();
}

void T9Widget::on_methodBtn_clicked()
{
    switchMethod();
}

void T9Widget::on_backSpaceBtn_clicked()
{
    if(confirmHZ >= 0)
    {
        confirmHZ = -1;
        updateT9UI();
    }
    else if(inputString.isEmpty())
        QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier));
    else
    {
        inputString = inputString.left(inputString.length() - 1);
        ui->tipLabel->setText(inputString);
        updateT9UI(T9Widget::ReloadNumberString);
    }
}

void T9Widget::on_spaceBtn_clicked()
{
    if(inputString.isEmpty())
        QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Space, Qt::NoModifier));
}

void T9Widget::on_enterBtn_clicked()
{
    if(inputString.isEmpty())
        QCoreApplication::postEvent(msgReceiver, new QKeyEvent(QEvent::KeyPress, Qt::Key_Enter, Qt::NoModifier));
    else if(confirmHZ < 0)
    {
        confirmHZ = 0;
        updateT9UI();
    }
    else
    {
        onHzClicked(confirmHZ);
    }
}

void T9Widget::on_starBtn_clicked()
{
    if(confirmHZ < 0)
    {
        pyMoveLeft();
    }
    else
    {
        moveLeft();
    }
}

void T9Widget::on_jingBtn_clicked()
{
    if(confirmHZ < 0)
    {
        pyMoveRight();
    }
    else
    {
        moveRight();
    }
}
#if 0
void T9Widget::on_zoomBtn_clicked()
{
    isZoomIn = !isZoomIn;
    if(this->isZoomIn)
    {
        this->setMinimumSize(bigSize);
        this->setMaximumSize(bigSize);
        this->resize(bigSize);
    }
    else
    {
        this->setMinimumSize(smallSize);
        this->setMaximumSize(smallSize);
        this->resize(smallSize);
    }
}
#endif
void T9Widget::on_pyPgUp_clicked()
{
    pyPageUp();
}

void T9Widget::on_pyPgDn_clicked()
{
    pyPageDown();
}

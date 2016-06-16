//
//  SinhVienToanTin.h
//  Example
//
//  Created by Chu Nam Anh on 6/16/16.
//  Copyright © 2016 Chu Nam Anh. All rights reserved.
//

#import "SinhVienBachKhoa.h"

@interface SinhVienToanTin : SinhVienBachKhoa
{
    NSString *sinhVienNhomNganh2;
    int diemToeic;
    BOOL daCoGau;
}

+(void)trangthaisinhvien : (SinhVienToanTin*)sinhvienA;
+(BOOL)checktoeic : (SinhVienToanTin*)sinhvienA;

@end

//
//  SinhVienToanTin.m
//  Example
//
//  Created by Chu Nam Anh on 6/16/16.
//  Copyright © 2016 Chu Nam Anh. All rights reserved.
//

#import "SinhVienToanTin.h"

@implementation SinhVienToanTin

+(void)trangthaisinhvien : (SinhVienToanTin*)sinhvienA
{
    if(sinhvienA->daCoGau == true) NSLog(@"Handsome guy");
    else NSLog(@"Xau trai von");
}

+(BOOL)checktoeic : (SinhVienToanTin*)sinhvienA
{
    if ( sinhvienA.diemToan>450) return true;
    return false;
}
@end

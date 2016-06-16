//
//  SinhVienBachKhoa.m
//  Example
//
//  Created by Chu Nam Anh on 6/14/16.
//  Copyright © 2016 Chu Nam Anh. All rights reserved.
//

#import "SinhVienBachKhoa.h"

@implementation SinhVienBachKhoa

+(void) helloStudent : (SinhVienBachKhoa*)svBK
{
    NSLog(@" Ten sinh vien la : %@",svBK);
}


-(NSString*) xetGioiTinh : (BOOL)gioitinh
{
    if (gioitinh == true) return @"Nam";
    return @"Nu";
}


+(BOOL) checkHB : (SinhVienBachKhoa*) sinhvienA
{
    // Doan duoi nay la bia. =))
    if(sinhvienA.diemLy>5) return TRUE;
    return false;
}


+(SinhVienBachKhoa*) soSanh : (SinhVienBachKhoa*)sinhvienA : (SinhVienBachKhoa*)sinhvienB
{
    if (sinhvienA.diemToan > sinhvienB.diemToan) return sinhvienA;
    return sinhvienB;
}


@end

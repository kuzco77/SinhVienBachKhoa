//
//  SinhvienToanTinh.h
//  Example
//
//  Created by Chu Nam Anh on 6/14/16.
//  Copyright © 2016 Chu Nam Anh. All rights reserved.
//

#import "SinhVienBachKhoa.h"

@interface SinhVienToanTin : SinhVienBachKhoa
{
    NSString *sinhviennhomnganh2;
    int diemtoeic;
    BOOL Dacogau;
}

@property (nonatomic,readwrite) (BOOL) dacogau;

-(void)trangthaisinhvien : (SinhVienToanTin*)sinhvienA;
-(BOOL)checktoeic : (SinhVienToanTin*)sinhvienA;

@end

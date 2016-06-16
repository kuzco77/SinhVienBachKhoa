//
//  SinhvienToanTinh.m
//  Example
//
//  Created by Chu Nam Anh on 6/14/16.
//  Copyright © 2016 Chu Nam Anh. All rights reserved.
//

#import "SinhvienToanTinh.h"

@implementation SinhvienToanTinh

-(id)trangthaisinhvien : (SinhVienToanTin*)sinhvienA
{
    
    if(dacogau == true) NSLog(@"Handsome guy");
    else NSLog(@"Xau trai von");
}

-(BOOL)checktoeic : (SinhVienToanTin*)sinhvienA
{
    if ( sinhvienA->diemtoeic>450) return true;
    return false
}

@end

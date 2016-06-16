//
//  SinhVienBachKhoa.h
//  Example
//
//  Created by Chu Nam Anh on 6/14/16.
//  Copyright © 2016 Chu Nam Anh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SinhVienBachKhoa : NSObject
{
    CGFloat diemtoan;
    CGFloat diemhoa;
    CGFloat diemly;
    BOOL sex;
    CGFloat ten;
    CGFloat khoa;
    NSString *khoahoc;
}

-(void) helloStudent : (SinhVienBachKhoa*)svBK;
-(NSString*) xetgioitinh : (BOOL)gioitinh;
-(BOOL) checkHB : (SinhVienBachKhoa*) sinhvienA;
-(SinhVienBachKhoa*) sosanh : (SinhVienBachKhoa*)sinhvienA : (SinhVienBachKhoa*)sinhvienB;

@end

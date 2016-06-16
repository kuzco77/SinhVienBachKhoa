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
    
}

@property(nonatomic,readwrite) CGFloat diemToan;
@property(nonatomic,readwrite) CGFloat diemHoa;
@property(nonatomic,readwrite) CGFloat diemLy;
@property(nonatomic,readwrite) BOOL sex;
@property(nonatomic,readwrite) CGFloat ten;
@property(nonatomic,readwrite) CGFloat khoa;
@property(nonatomic,readwrite) NSString *khoaHoc;



+(void) helloStudent : (SinhVienBachKhoa*)svBK;
-(NSString*) xetGioiTinh : (BOOL)gioitinh;
+(BOOL) checkHB : (SinhVienBachKhoa*) sinhvienA;
+(SinhVienBachKhoa*) soSanh : (SinhVienBachKhoa*)sinhvienA : (SinhVienBachKhoa*)sinhvienB;

@end

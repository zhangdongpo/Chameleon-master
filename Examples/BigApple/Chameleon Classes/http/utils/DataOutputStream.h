//
//  DataOutputStream.h
//  laipaoba
//
//  Created by 沧浪之水 on 16/3/14.
//  Copyright © 2016年 沧浪之水. All rights reserved.
//

#ifndef DataOutputStream_h
#define DataOutputStream_h

#import <Foundation/Foundation.h>


// 数据输出流允许应用程序以适当方式将基本数据类型写入输出流中
@interface DataOutputStream : NSObject {
    NSMutableData *data;
    NSInteger length;
}

// 将一个 char 值以 1-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeChar:(int8_t)v;

// 将一个 bool 值以 1-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeBool:(int8_t)v;

//将一个 short 值以 2-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeShort:(int16_t)v;

//将一个 int 值以 4-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeInt:(int32_t)v;

//将一个 float 值以 4-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeFloat:(float)v;

//将一个 long 值以 8-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeLong:(int64_t)v;

//将一个 double 值以 8-byte 值形式写入基础输出流中，先写入高字节。
- (void)writeDouble:(double)v;

//以与机器无关方式使用 UTF-8 修改版编码将一个字符串写入基础输出流。
- (void)writeUTF:(NSString *)v;

//将一个 NSData byte数组写入输出流中，先写入高字节。
- (void)writeBytes:(NSData *)v;

//将此转换为 byte 序列。
- (NSData *)toByteArray;

@end

#endif /* DataOutputStream_h */

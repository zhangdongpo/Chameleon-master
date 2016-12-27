//
//  DataInputStream.h
//  laipaoba
//
//  Created by 沧浪之水 on 16/3/14.
//  Copyright © 2016年 沧浪之水. All rights reserved.
//

#ifndef DataInputStream_h
#define DataInputStream_h

#import <Foundation/Foundation.h>

// 从输入流读取基本数据类型的方法，以便解组自定义值类型
@interface DataInputStream : NSObject {
	NSData *data;
	NSInteger length;
}

//
- (id)initWithData:(NSData *)data;

//
+ (id)dataInputStreamWithData:(NSData *)aData;

// 从输入流读取 char 值。
- (int8_t)readChar;

// 从输入流读取 BOOL 值。
- (BOOL)readBool;

// 从输入流读取 short 值。
- (int16_t)readShort;

// 从输入流读取 int 值。
- (int32_t)readInt;

// 从输入流读取 long 值。
- (int64_t)readLong;

// 从输入流读取 double 值。
- (double)readDouble;

// 从输入流读取 float 值
- (float)readFloat;

// 从输入流读取 NSString 字符串。
- (NSString *)readUTF;

// 从输入流读取 NSData。
- (NSData *)readBytes :(long) datalength;
@end

#endif /* DataInputStream_h */

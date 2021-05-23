/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData)

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)dataWithLength:(unsigned long long)arg1;
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithCapacity:(unsigned long long)arg1;

- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)_isCompact;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)arg1;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (Class)classForCoder;
- (id)initWithLength:(unsigned long long)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)appendData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (void)setData:(id)arg1;
- (_Bool)compressUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (_Bool)decompressUsingAlgorithm:(long long)arg1 error:(id *)arg2;

@end

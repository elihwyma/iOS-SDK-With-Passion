/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSString.h>

@interface NSString (CUByteCodable)

+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;

- (id)encodedDataAndReturnError:(id *)arg1;
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;

@end

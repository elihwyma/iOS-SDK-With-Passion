/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

#import <Foundation/NSData.h>

@interface NSData (TransparencyData)

+ (id)random;
+ (id)dataWithHexString:(const char *)arg1;
+ (id)dataWithUint64:(unsigned long long)arg1 length:(unsigned long long)arg2;

- (id)hexString;
- (id)sha256;

@end

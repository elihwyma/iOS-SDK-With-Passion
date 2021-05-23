/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSUUID.h>

@interface NSUUID (ARAdditions)

+ (id)ar_UUIDWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)ar_UUIDWithData:(id)arg1;
+ (id)ar_UUIDWithIntegerValue:(unsigned long long)arg1;
+ (id)ar_UUIDWithCFUUIDRef:(struct __CFUUID *)arg1;
+ (id)ar_zeroUUID;

- (struct __CFUUID *)ar_CFUUIDRef;
- (unsigned long long)ar_integerValue;

@end

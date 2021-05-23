/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSMutableData.h>

@interface NSMutableData (HKUUID)

- (void)hk_appendBytesWithUUID:(id)arg1;
- (void)hk_appendUUIDBytes:(unsigned char [16])arg1;

@end

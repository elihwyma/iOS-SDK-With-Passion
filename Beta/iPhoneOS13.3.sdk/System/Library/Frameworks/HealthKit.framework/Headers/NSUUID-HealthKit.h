/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSUUID.h>

@class NSString;

@interface NSUUID (HealthKit)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hk_UUIDWithData:(id)arg1;

- (id)hk_shortRepresentation;
- (id)hk_dataForUUIDBytes;
- (long long)hk_compare:(id)arg1;
- (id)hk_UUID;

@end

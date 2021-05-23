/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKCodedQuantity.h>

@class NSString;

@interface HKCodedQuantity (HDCodingSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end

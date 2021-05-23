/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKMedicalDateInterval.h>

@class NSString;

@interface HKMedicalDateInterval (HDCodingSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end

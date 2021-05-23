/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKMedicalCoding.h>

@class NSString;

@interface HKMedicalCoding (HDCodingSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createWithCodable:(id)arg1;
+ (id)medicalCodingsWithCodeable:(id)arg1;
+ (id)multipleMedicalCodingsWithCodables:(id)arg1;
+ (id)codeableRepresentationForMedicalCodings:(id)arg1;

- (id)codableRepresentationForSync;

@end

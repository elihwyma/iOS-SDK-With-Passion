/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKMedicalRecord.h>

@class NSString;

@interface HKMedicalRecord (HDDistinctableObject)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)hd_dataEntityClass;
+ (id)createWithCodable:(id)arg1;
+ (_Bool)supportsSecureCoding:(id)arg1;

- (id)codableRepresentationForSync;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKSample.h>

@class NSString;

@interface HKSample (HDDistinctableObject)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createWithCodable:(id)arg1;
+ (_Bool)supportsDistinctByKeyPath:(id)arg1;
+ (id)hd_sampleTypesForObjects:(id)arg1;

- (long long)entityType;
- (id)codableRepresentationForSync;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;
- (id)hd_sampleType;
- (id)hd_associatedSampleTypes;

@end

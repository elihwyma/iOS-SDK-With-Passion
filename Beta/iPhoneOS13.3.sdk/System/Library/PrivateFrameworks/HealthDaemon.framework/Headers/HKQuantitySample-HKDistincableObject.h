/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKQuantitySample.h>

@class NSString;

@interface HKQuantitySample (HKDistincableObject)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)hd_dataEntityClass;
+ (id)createWithCodable:(id)arg1;
+ (_Bool)supportsDistinctByKeyPath:(id)arg1;
+ (id)migrateCodableObject:(id)arg1;

- (id)codableRepresentationForSync;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)uniqueIdentifierForDistinctByKeyPath:(id)arg1 error:(id *)arg2;

@end

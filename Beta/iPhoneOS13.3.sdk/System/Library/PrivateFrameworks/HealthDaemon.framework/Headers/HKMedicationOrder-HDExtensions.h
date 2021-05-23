/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKMedicationOrder.h>

@class NSString;

@interface HKMedicationOrder (HDExtensions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)hd_dataEntityClass;
+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;

@end

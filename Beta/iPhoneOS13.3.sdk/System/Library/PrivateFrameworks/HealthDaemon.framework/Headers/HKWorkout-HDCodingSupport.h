/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKWorkout.h>

@class NSString;

@interface HKWorkout (HDCodingSupport)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)hd_dataEntityClass;
+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableWorkoutEvents;
- (_Bool)hd_insertRelatedDataWithPersistentID:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5;

@end

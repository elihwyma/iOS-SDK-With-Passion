/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <HealthKit/_HKFitnessFriendWorkout.h>

@class ASCodableCloudKitWorkout, NSString;

@interface _HKFitnessFriendWorkout (CloudKitCodingSupport)

@property (nonatomic, readonly) ASCodableCloudKitWorkout *codableWorkout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;
+ (id)_fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;
+ (struct _HKFitnessFriendWorkout *)fitnessFriendWorkoutWithRecord:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1;

- (id)recordWithZoneID:(id)arg1;

@end

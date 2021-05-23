/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface ASNotificationEvent : NSObject

{
    NSUUID *_friendUUID;
    long long _type;
    NSDate *_date;
    NSUUID *_triggerUUID;
    long long _triggerSnapshotIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *friendUUID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSUUID *triggerUUID;
@property (nonatomic) long long triggerSnapshotIndex;

+ (id)notificationEventWithRecord:(id)arg1 friendUUID:(id)arg2;
+ (id)goalCompletionEventWithActivitySummary:(id)arg1;
+ (id)workoutCompletionEventWithWorkout:(struct _HKFitnessFriendWorkout *)arg1;
+ (id)achievementCompletionEventWithAchievement:(struct _HKFitnessFriendAchievement *)arg1;
+ (id)deletedWorkoutEventWithUUID:(id)arg1;

- (id)recordWithZoneID:(id)arg1;

@end

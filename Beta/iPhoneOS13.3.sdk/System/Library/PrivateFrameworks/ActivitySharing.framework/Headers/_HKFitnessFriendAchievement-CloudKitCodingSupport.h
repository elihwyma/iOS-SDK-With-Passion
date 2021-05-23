/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <HealthKit/_HKFitnessFriendAchievement.h>

@class ASCodableCloudKitAchievement, NSString;

@interface _HKFitnessFriendAchievement (CloudKitCodingSupport)

@property (nonatomic, readonly) ASCodableCloudKitAchievement *codableAchievement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (id)_fitnessFriendAchievementWithCodableAchievement:(id)arg1 friendUUID:(id)arg2;
+ (struct _HKFitnessFriendAchievement *)fitnessFriendAchievementWithRecord:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendAchievementWithCodableAchievement:(id)arg1;

- (id)recordWithZoneID:(id)arg1;

@end

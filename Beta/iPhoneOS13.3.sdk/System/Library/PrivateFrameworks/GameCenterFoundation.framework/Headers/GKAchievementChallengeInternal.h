/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal

{
    GKAchievementInternal *_achievement;
}

@property (copy, nonatomic) GKAchievementInternal *achievement;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned long long)type;
- (id)titleText;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;

@end

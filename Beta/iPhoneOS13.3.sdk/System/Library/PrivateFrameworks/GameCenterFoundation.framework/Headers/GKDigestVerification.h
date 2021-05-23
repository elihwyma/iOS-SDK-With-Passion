/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@interface GKDigestVerification : NSObject

+ (id)computeVerificationHashForDigest:(id)arg1;
+ (_Bool)digest:(id)arg1 matchesHash:(id)arg2;
+ (id)digestForSubmitScore:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;
+ (id)digestForSubmitAchievement:(id)arg1 forBundleID:(id)arg2 shouldScreen:(_Bool)arg3 eligibleChallenges:(id)arg4;

@end

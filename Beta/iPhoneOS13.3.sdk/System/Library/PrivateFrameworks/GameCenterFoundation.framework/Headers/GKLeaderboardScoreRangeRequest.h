/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest

{
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKFamiliarPlayerInternal.h>

@class GKGameInternal, NSDate, NSString;

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal

{
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:(id)arg1;
- (id)lastPlayedGame;
- (int)defaultFamiliarity;
- (_Bool)isFriend;
- (void)setLastPlayedGame:(id)arg1;

@end

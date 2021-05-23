/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKAutomatchPlayerInternal : GKSpecialPlayerInternal

{
    long long _automatchPosition;
}

@property (nonatomic) long long automatchPosition;

+ (_Bool)supportsSecureCoding;

- (id)alias;
- (id)playerID;
- (_Bool)isAutomatchPlayer;
- (id)teamPlayerID;
- (id)gamePlayerID;

@end

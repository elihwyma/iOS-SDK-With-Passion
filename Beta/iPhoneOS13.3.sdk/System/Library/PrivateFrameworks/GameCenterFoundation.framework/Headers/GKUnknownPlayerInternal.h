/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKSpecialPlayerInternal.h>

@interface GKUnknownPlayerInternal : GKSpecialPlayerInternal

+ (_Bool)supportsSecureCoding;

- (id)playerID;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (_Bool)isUnknownPlayer;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKLocalPlayerInternal.h>

@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal

{
    int _encodingCount;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)alias;
- (id)playerID;
- (id)teamPlayerID;
- (id)gamePlayerID;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKPlayerInternal.h>

@interface GKSpecialPlayerInternal : GKPlayerInternal

+ (_Bool)supportsSecureCoding;

- (_Bool)isLoaded;
- (id)photos;
- (void)setPhotos:(id)arg1;
- (void)setAlias:(id)arg1;
- (id)alias;
- (id)playerID;
- (id)compositeName;
- (void)setPlayerID:(id)arg1;
- (id)teamPlayerID;
- (id)gamePlayerID;
- (void)setGamePlayerID:(id)arg1;
- (void)setTeamPlayerID:(id)arg1;

@end

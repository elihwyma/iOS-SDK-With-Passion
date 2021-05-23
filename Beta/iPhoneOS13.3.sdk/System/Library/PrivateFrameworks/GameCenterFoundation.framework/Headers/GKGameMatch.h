/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKGame, GKPlayer, GKRecentMatchInternal, NSDate;

@interface GKGameMatch : NSObject

{
    GKRecentMatchInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

@property (retain) GKRecentMatchInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) NSDate *date;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1 game:(id)arg2;

@end

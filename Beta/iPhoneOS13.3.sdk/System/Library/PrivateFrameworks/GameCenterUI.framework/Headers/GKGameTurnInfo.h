/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKGame, NSDate;

@interface GKGameTurnInfo : NSObject

{
    GKGame *_game;
    unsigned long long _numberOfActiveMatches;
    unsigned long long _numberOfLocalPlayerTurns;
    NSDate *_lastTurnDate;
}

@property (retain, nonatomic) GKGame *game;
@property (nonatomic) unsigned long long numberOfActiveMatches;
@property (nonatomic) unsigned long long numberOfLocalPlayerTurns;
@property (retain, nonatomic) NSDate *lastTurnDate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

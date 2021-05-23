/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKGame, GKLeaderboard, GKPlayer, GKScore, UIImage;

@interface GKScoreSharingInfo : NSObject <Swift>

{
    _Bool _complete;
    GKLeaderboard *_leaderboardCategory;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_badgeImage;
    UIImage *_iconImage;
    GKScore *_score;
}

@property (retain, nonatomic) GKLeaderboard *leaderboardCategory;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) UIImage *badgeImage;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) _Bool complete;
@property (retain, nonatomic) GKScore *score;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)thumbnailForActivityType:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)subjectForEmailActivity;
- (id)initWithCategoryID:(id)arg1 forGame:(id)arg2 player:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKAchievement, GKGame, GKPlayer, UIImage;

@interface GKAchievementSharingInfo : NSObject <Swift>

{
    _Bool _complete;
    GKAchievement *_achievement;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_iconImage;
    UIImage *_badgeImage;
}

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *badgeImage;
@property (nonatomic) _Bool complete;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)thumbnailForActivityType:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)subjectForEmailActivity;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2;

@end

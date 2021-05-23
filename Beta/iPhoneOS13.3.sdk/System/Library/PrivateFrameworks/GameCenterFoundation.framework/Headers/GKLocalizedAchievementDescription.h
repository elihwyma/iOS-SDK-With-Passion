/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKAchievementDescription.h>

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription : GKAchievementDescription

{
    GKGame *_game;
    NSString *_iconImageName;
}

@property (retain) GKGame *game;
@property (copy) NSString *iconImageName;

- (void)dealloc;
- (id)title;
- (id)achievedDescription;
- (id)unachievedDescription;
- (id)imageNameForIcon;
- (id)_localizedStringFromKey:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterFoundation/GKAchievementDescription.h>

@interface GKAchievementDescription (UI)

+ (id)incompleteAchievementImage;
+ (id)placeholderCompletedAchievementImage;

- (id)imageURL;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showBanner;

@end

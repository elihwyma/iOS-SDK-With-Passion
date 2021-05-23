/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@protocol GKAchievementViewControllerDelegate;

@interface GKAchievementViewController

{
    id <GKAchievementViewControllerDelegate> _achievementDelegate;
}

@property (weak, nonatomic) id <GKAchievementViewControllerDelegate> achievementDelegate;

- (id)init;
- (void)dealloc;
- (void)notifyDelegateOnWillFinish;

@end

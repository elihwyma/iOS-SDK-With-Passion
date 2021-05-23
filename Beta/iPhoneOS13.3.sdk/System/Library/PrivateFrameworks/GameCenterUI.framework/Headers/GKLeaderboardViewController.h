/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString;

@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController

{
    id <GKLeaderboardViewControllerDelegate> _leaderboardDelegate;
}

@property (nonatomic) long long timeScope;
@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) id <GKLeaderboardViewControllerDelegate> leaderboardDelegate;

- (id)init;
- (void)notifyDelegateOnWillFinish;

@end

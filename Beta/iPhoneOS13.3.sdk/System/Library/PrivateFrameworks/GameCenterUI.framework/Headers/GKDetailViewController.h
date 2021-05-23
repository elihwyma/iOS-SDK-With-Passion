/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKHorizontalBubbleControlsView;

@interface GKDetailViewController : GKDashboardCollectionViewController

{
    GKHorizontalBubbleControlsView *_bubbleView;
}

@property (nonatomic) GKHorizontalBubbleControlsView *bubbleView;
@property (nonatomic, readonly) _Bool wantsBubbles;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canShare;
- (void)reportProblemAboutPlayer:(id)arg1;
- (void)hideBubbles;
- (void)floatInBubbles;
- (void)pushBubble:(id)arg1;
- (id)addBubbleWithType:(long long)arg1 useLargeSize:(_Bool)arg2 title:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)shareAchievement:(id)arg1 sendingView:(id)arg2;
- (void)shareScore:(id)arg1 fromLeaderboard:(id)arg2 sendingView:(id)arg3;

@end

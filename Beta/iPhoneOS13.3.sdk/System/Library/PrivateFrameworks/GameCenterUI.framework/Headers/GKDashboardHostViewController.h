/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKExtensionRemoteViewController.h>

@class GKGame, GKGameCenterViewController, NSObject, NSString;

@interface GKDashboardHostViewController : GKExtensionRemoteViewController

{
    GKGameCenterViewController *_delegateWeak;
    NSObject *_dashboardAssetController;
}

@property (retain, nonatomic) NSObject *dashboardAssetController;
@property (nonatomic) GKGameCenterViewController *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) GKGame *game;

+ (id)dashboardExtension;
+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)messageFromExtension:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)hostDidChangeViewState:(id)arg1;
- (void)hostDidChangeLeaderboardIdentifier:(id)arg1;
- (void)hostDidChangeLeaderboardTimeScope:(id)arg1;
- (void)extensionIsCanceling;
- (id)extensionObjectProxy;
- (void)extensionIsFinishing;
- (void)playPressedForChallenge:(id)arg1;
- (void)hostSupportsShowingPlayForChallenge:(_Bool)arg1;
- (void)hostSupportsShowingPlayForTurnBasedMatch:(_Bool)arg1;
- (void)hostSupportsShowingQuitForTurnBasedMatch:(_Bool)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKNavigationController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKGame, NSString, UIViewController;

@interface GKServiceViewController : GKNavigationController <Swift>

{
    _Bool _alwaysShowDoneButton;
    int _hostPID;
    GKGame *_game;
    UIViewController *_privateViewController;
    double _statusBarHeight;
}

@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) UIViewController *privateViewController;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) _Bool alwaysShowDoneButton;
@property (nonatomic) int hostPID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)finish;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)donePressed:(id)arg1;
- (void)remoteViewControllerDidCancel;
- (void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)observedKeyPaths;
- (void)nudge;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerDidFinish;
- (void)remoteViewControllerIsCanceling;
- (void)constructPrivateViewController;
- (_Bool)_useBackdropViewForWindowBackground;
- (void)finishAndPlayChallenge:(id)arg1;
- (void)finishWithTurnBasedMatch:(id)arg1;
- (void)quitTurnBasedMatch:(id)arg1;
- (void)messageFromClient:(id)arg1;
- (void)dashboardDidChangeToViewState:(long long)arg1;
- (void)requestDashboardLogoImageWithHandler:(CDUnknownBlockType)arg1;
- (void)requestImagesForLeaderboardSetsWithHandler:(CDUnknownBlockType)arg1;
- (void)_startObservingChangesToProperties;
- (void)serviceViewControllerCreated:(id)arg1;
- (void)_stopObservingChangesToProperties;
- (void)cancelServiceViewController;
- (void)presentInitialViewController:(id)arg1;
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)_addDoneButtonToViewController:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1;
- (void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1;
- (void)resetPrivateViewController;
- (void)performSelectorOnHostController:(SEL)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UINavigationController.h>

#import <GameCenterUI/Swift-Protocol.h>

@class GKGame, NSLayoutConstraint, NSString, UIViewController, UIVisualEffectView;

@interface GKExtensionViewController : UINavigationController <Swift>

{
    _Bool _alwaysShowDoneButton;
    _Bool _adjustTopConstraint;
    _Bool _hasInitialData;
    int _hostPID;
    double _statusBarHeight;
    UIViewController *_contentViewController;
    GKGame *_game;
    UIVisualEffectView *_effectView;
    NSLayoutConstraint *_effectBottomConstraint;
    NSLayoutConstraint *_effectTopConstraint;
}

@property (nonatomic) _Bool hasInitialData;
@property (nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *effectBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *effectTopConstraint;
@property (nonatomic) _Bool alwaysShowDoneButton;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) int hostPID;
@property (nonatomic) _Bool adjustTopConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)finish;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)donePressed:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)messageFromExtension:(id)arg1;
- (_Bool)_useBackdropViewForWindowBackground;
- (id)blurEffectForTraitCollection:(id)arg1;
- (void)extensionIsCanceling;
- (void)messageFromClient:(id)arg1;
- (void)extensionIsFinishing;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)setToLightBackground;
- (void)setToDarkBackground;
- (void)constructContentViewController;
- (void)configureContentViewController;
- (void)addDoneButtonToViewController:(id)arg1;
- (id)hostObjectProxy;
- (void)sendMessageToClient:(id)arg1;
- (void)clientDidFinish;
- (void)clientDidCancel;
- (void)clientWillTerminate;

@end

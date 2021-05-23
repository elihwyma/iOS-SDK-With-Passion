/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UIViewController.h>

@class NSString, TFBetaAppLaunchPresenter, TFBetaAppLaunchScreenView, UIBarButtonItem;

@protocol TFBetaAppLaunchScreenHost;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchScreenViewController : UIViewController

{
    id <TFBetaAppLaunchScreenHost> _launchScreenHost;
    TFBetaAppLaunchPresenter *_presenter;
    TFBetaAppLaunchScreenView *_launchScreenView;
    UIBarButtonItem *_cancelBarButtonItem;
}

@property (nonatomic, readonly) TFBetaAppLaunchPresenter *presenter;
@property (retain, nonatomic) TFBetaAppLaunchScreenView *launchScreenView;
@property (nonatomic, readonly) UIBarButtonItem *cancelBarButtonItem;
@property (weak, nonatomic) id <TFBetaAppLaunchScreenHost> launchScreenHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithPresenter:(id)arg1;
- (long long)_currentInterfaceOrientation;
- (void)showLoadingAnimated:(_Bool)arg1;
- (void)showTestNotesWithTitle:(id)arg1 lockup:(id)arg2 testNotesTitle:(id)arg3 testNotesText:(id)arg4 primaryButtonTitle:(id)arg5 primaryButtonEvent:(unsigned long long)arg6 animated:(_Bool)arg7 fetchingOnImageFetcher:(id)arg8;
- (void)showHowToWithTitle:(id)arg1 subtitle:(id)arg2 imageIdentifier:(id)arg3 primaryButtonTitle:(id)arg4 primaryButtonEvent:(unsigned long long)arg5 secondaryButtonTitle:(id)arg6 secondaryButtonEvent:(unsigned long long)arg7 animated:(_Bool)arg8;
- (void)_didPressNavigationItemCancel;
- (void)_updateForContainmentInHostEnvironment:(id)arg1;
- (void)_updateNavigationBarForHostTraitCollection:(id)arg1;
- (id)_fadeTransition;
- (void)_animateLaunchScreenViewWithUpdateBlock:(CDUnknownBlockType)arg1 transition:(id)arg2;
- (SEL)_selectorForPresentorViewEvent:(unsigned long long)arg1;
- (id)_pushTransition;
- (void)_didPressShowHowToButton;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressExitLaunchScreenButton;
- (void)launchScreenHost:(id)arg1 traitCollectionDidChange:(id)arg2;

@end

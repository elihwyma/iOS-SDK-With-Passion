/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <UIKit/UIViewController.h>

@class NSString, OBWelcomeController, UIStatusBar, UIView, VTUISiriDataSharingOptInPresenter, VTUITurnOnSiriView, _UIBackdropView;

@protocol AFUISiriSetupViewControllerDelegate;

@interface AFUISiriSetupViewController : UIViewController

{
    UIView *_contentView;
    VTUITurnOnSiriView *_setupView;
    VTUISiriDataSharingOptInPresenter *_dataSharingOptInPresenter;
    OBWelcomeController *_dataSharingOptInViewController;
    _UIBackdropView *_backdropView;
    _Bool _backdropViewVisible;
    _Bool _visible;
    _Bool _lastTimeShown;
    id <AFUISiriSetupViewControllerDelegate> _delegate;
    UIView *_siriSetupView;
    UIStatusBar *_statusBar;
}

@property (retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar;
@property (weak, nonatomic) id <AFUISiriSetupViewControllerDelegate> delegate;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (nonatomic) _Bool lastTimeShown;
@property (retain, nonatomic) UIView *siriSetupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)setBackdropVisible:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)siriDataSharingOptInRequestsDismissalFromPresenter:(id)arg1;
- (void)siriDataSharingOptInViewControllerDidDismissFromPresenter:(id)arg1;
- (struct CGRect)_statusBarFrame;
- (void)setFluidDismissalState:(id)arg1;
- (void)animatedAppearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animatedDisappearanceWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dimBackdropSettings;
- (void)_removeStatusBar;
- (void)_continueTapped:(id)arg1;
- (void)_laterTapped:(id)arg1;
- (_Bool)_siriDataSharingOptInFeatureFlagEnabled;
- (void)_addStatusBar;
- (void)_presentDataSharingOptInViewController;
- (void)aboutSelectedInTurnOnSiriView:(id)arg1;

@end

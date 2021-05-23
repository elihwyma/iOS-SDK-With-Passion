/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <UIKit/UIViewController.h>

@class AFUISceneConfiguration, AFUISceneController, FBScene, FBSceneClientProviderInvalidationAction, NSString, UIView;

@protocol BSInvalidatable, FBSceneHost, UIScenePresenter;

@interface AFUISceneHostingViewController : UIViewController

{
    _Bool _pauseDeferrals;
    long long _deferralMode;
    AFUISceneConfiguration *_configuration;
    AFUISceneController *_sceneController;
    UIView *_windowSceneHostingView;
    id <UIScenePresenter> _presentation;
    FBSceneClientProviderInvalidationAction *_invalidationAction;
    id <FBSceneHost> _sceneHost;
    FBScene *_scene;
    id <BSInvalidatable> _predicateInvalidationHandler;
    long long _currentOrientation;
}

@property (retain, nonatomic) AFUISceneController *sceneController;
@property (retain, nonatomic) UIView *windowSceneHostingView;
@property (retain, nonatomic) id <UIScenePresenter> presentation;
@property (retain, nonatomic) FBSceneClientProviderInvalidationAction *invalidationAction;
@property (nonatomic) id <FBSceneHost> sceneHost;
@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) id <BSInvalidatable> predicateInvalidationHandler;
@property (nonatomic) _Bool pauseDeferrals;
@property (nonatomic) long long currentOrientation;
@property (nonatomic, readonly) long long deferralMode;
@property (nonatomic, readonly) AFUISceneConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)arg1;
- (void)_transitionContentsWithView:(id)arg1 forContentState:(long long)arg2;
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)arg1;
- (void)stopHostingScene;
- (void)deactivateSceneForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (void)_updateDeferralChainWithWindow:(id)arg1;
- (_Bool)_shouldDeferHIDEventsForMode;
- (void)_handleInvalidationForReason:(unsigned long long)arg1 explanation:(id)arg2;
- (id)sceneConfigurationForDelegate;
- (void)sceneController:(id)arg1 sceneContentStateDidChange:(id)arg2;
- (void)sceneController:(id)arg1 sceneWasInvalidated:(id)arg2 forReason:(unsigned long long)arg3;
- (void)sceneController:(id)arg1 sceneDidUpdateClientSettings:(id)arg2;
- (void)updateSettingsForInterfaceOrientationChange:(long long)arg1 willAnimationWithDuration:(double)arg2;
- (void)startHostingSceneForConfiguration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isHostingScene;
- (_Bool)isDeferringHIDEvents;
- (void)startDeferringHIDEventsIfNeeded;
- (void)invalidateAndPauseDeferringHIDEvents;
- (void)updateSceneWithConfiguration:(id)arg1;
- (_Bool)_hasScene;

@end

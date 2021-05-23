/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBAppContainerViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSCornerRadiusConfiguration, NSMutableSet, NSString, SBHomeGrabberView, SBInlineAppExposeContainerViewController, SBSceneHandle, SBSceneViewStatusBarAssertion, UIDropInteraction, UIView;

@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <Swift>

{
    _Bool _nubViewHidden;
    _Bool _nubViewHighlighted;
    NSMutableSet *_maskDisplayCornersReasons;
    _Bool _clipsToBounds;
    double _darkenViewAlpha;
    UIDropInteraction *_dropInteraction;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    double _shadowOpacity;
    double _shadowOffset;
    SBSceneViewStatusBarAssertion *_inlineAppExposeContainerStatusBarAssertion;
    SBInlineAppExposeContainerViewController *_inlineAppExposeContainerOverlayViewController;
}

@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowOffset;
@property (retain, nonatomic) SBSceneViewStatusBarAssertion *inlineAppExposeContainerStatusBarAssertion;
@property (nonatomic, readonly) SBInlineAppExposeContainerViewController *inlineAppExposeContainerOverlayViewController;
@property (nonatomic) _Bool clipsToBounds;
@property (nonatomic) double darkenViewAlpha;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) long long displayMode;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic, readonly) struct CGSize contentReferenceSize;
@property (nonatomic, readonly) long long contentInterfaceOrientation;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (weak, nonatomic) id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;
@property (nonatomic, readonly, getter=isBlurred) _Bool blurred;
@property (nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;

- (void)prepareForReuse;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(_Bool)arg2;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)setMaskDisplayCorners:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
- (_Bool)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (id)_applicationSceneViewController;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2;
- (id)initialCornerRadiusConfiguration;
- (id)containerViewForBlurContentView;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)_deviceApplicationSceneViewController;
- (_Bool)_shouldDisplayLayoutElementBecomeActive;
- (unsigned long long)supportedContentInterfaceOrientations;
- (void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;
- (id)_applicationSceneViewControllerForSceneHandle:(id)arg1;
- (void)_configureViewController:(id)arg1;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (void)blurApplicationContent:(_Bool)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_medusaDecoratedVC;
- (void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (id)_medusaDecoratedVC:(id)arg1;
- (void)setInlineAppExposeContainerViewController:(id)arg1;
- (id)_deviceApplicationSceneViewController:(id)arg1;
- (id)_relinquishInlineAppExposeContainerViewController;

@end

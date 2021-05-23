/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSCornerRadiusConfiguration, MTLumaDodgePillSettings, NSHashTable, NSMutableSet, NSString, SBApplicationBlurContentView, SBAsymmetricalCornerRadiusWrapperView, SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, SBHomeGrabberView, SBInlineAppExposeContainerViewController, SBNubView, SBSceneHandle, SBSceneViewStatusBarAssertion, UIDropInteraction, UIView;

@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBMedusaDecoratedDeviceApplicationSceneViewController : UIViewController <Swift>

{
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    UIView *_inlineAppExposeContainerView;
    SBInlineAppExposeContainerViewController *_inlineContainerViewController;
    _Bool _nubViewHidden;
    _Bool _nubViewHighlighted;
    UIView *_rimShadowView;
    UIView *_containerView;
    SBAsymmetricalCornerRadiusWrapperView *_asymmetricalCornerRadiusWrapperView;
    UIView *_blurViewContainerView;
    SBNubView *_nubView;
    UIView *_darkenView;
    _Bool _isBlurred;
    SBApplicationBlurContentView *_blurView;
    NSHashTable *_statusBarAssertions;
    SBSceneViewStatusBarAssertion *_inlineAppExposeStatusBarAssertion;
    NSMutableSet *_matchMoveAnimationRequiringReasons;
    _Bool _clipsToBounds;
    double _shadowOpacity;
    double _shadowOffset;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    unsigned long long _maskedCorners;
    double _darkenViewAlpha;
    UIDropInteraction *_dropInteraction;
}

@property (nonatomic, readonly) UIView *_blurViewContainerView;
@property (nonatomic, readonly, getter=isBlurred) _Bool blurred;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowOffset;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) _Bool clipsToBounds;
@property (nonatomic) double darkenViewAlpha;
@property (nonatomic) long long layoutRole;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (nonatomic) _Bool shouldRasterizeSceneHostView;
@property (copy, nonatomic) NSString *sceneHostViewMinificationFilter;
@property (retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings;
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
@property (nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;

- (void)invalidate;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (id)newSnapshot;
- (void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)statusBarAssertionDidUpdate:(id)arg1;
- (void)statusBarAssertionDidInvalidate:(id)arg1;
- (_Bool)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (id)newSnapshotView;
- (void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2;
- (void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;
- (void)blurApplicationContent:(_Bool)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (id)initWithDeviceApplicationSceneHandle:(id)arg1 inlineContainerViewController:(id)arg2 layoutRole:(long long)arg3;
- (void)setInlineAppExposeContainerViewController:(id)arg1;
- (id)_blurContentView;
- (void)_setBlurContentView:(id)arg1;
- (void)_updateNubViewAlpha;
- (_Bool)_sceneViewHasMatchMoveAnimation;
- (double)effectiveCornerRadius;
- (void)_handleNubTapGestureRecognizerAction:(id)arg1;
- (void)_addSceneViewMatchMoveAnimation;
- (void)_removeSceneViewMatchMoveAnimation;
- (void)_setAbsoluteDiffuseShadowOpacity:(double)arg1;
- (void)_setAbsoluteShadowOffset:(struct CGSize)arg1;
- (void)_setAbsoluteShadowRadius:(double)arg1;

@end

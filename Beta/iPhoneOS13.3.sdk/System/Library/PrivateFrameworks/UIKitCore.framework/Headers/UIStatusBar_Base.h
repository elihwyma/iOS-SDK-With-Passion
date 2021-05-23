/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIScrollsToTopInitiatorView.h>

@class NSArray, NSString, UIColor, UIStatusBarServer, UIStatusBarStyleRequest, UIStatusBarWindow;

@protocol UIStatusBarCarPlayDockDataProviding, UIStatusBarManager, UIStatusBarStateProvider, UIStatusBarStyleDelegate, UIViewControllerTransitionCoordinator;

@interface UIStatusBar_Base : _UIScrollsToTopInitiatorView

{
    _Bool _persistentAnimationsEnabled;
    _Bool _foreground;
    _Bool _hidden;
    _Bool _registered;
    _Bool _serverUpdatesDisabled;
    _Bool _suppressesHiddenSideEffects;
    _Bool _homeItemsDisabled;
    _Bool _disablesRasterization;
    int _styleOverrides;
    int _activeStyleOverride;
    id <UIStatusBarStyleDelegate> _styleDelegate;
    id <UIStatusBarCarPlayDockDataProviding> _dockDataProvider;
    UIStatusBarWindow *_statusBarWindow;
    long long _orientation;
    UIStatusBarServer *_statusBarServer;
    id <UIStatusBarStateProvider> _inProcessStateProvider;
    CDStruct_f9a79af9 *_localDataOverrides;
    long long _requestedStyle;
    id <UIViewControllerTransitionCoordinator> __transitionCoordinator;
    UIColor *_foregroundColor;
    long long _legibilityStyle;
    UIStatusBarStyleRequest *_styleRequest;
    long long _mode;
    NSArray *_enabledPartIdentifiers;
    id <UIStatusBarManager> _manager;
    struct CGRect _avoidanceFrame;
}

@property (retain, nonatomic) UIStatusBarServer *statusBarServer;
@property (nonatomic) _Bool foreground;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool registered;
@property (retain, nonatomic) id <UIStatusBarStateProvider> inProcessStateProvider;
@property (nonatomic, readonly) CDStruct_f9a79af9 *localDataOverrides;
@property (nonatomic) _Bool serverUpdatesDisabled;
@property (nonatomic, getter=_requestStyle, setter=_setRequestedStyle:) long long requestedStyle;
@property (weak, nonatomic) id <UIViewControllerTransitionCoordinator> _transitionCoordinator;
@property (nonatomic) _Bool suppressesHiddenSideEffects;
@property (nonatomic) _Bool homeItemsDisabled;
@property (nonatomic, setter=_setDisablesRasterization:) _Bool disablesRasterization;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) long long legibilityStyle;
@property (copy, nonatomic) UIStatusBarStyleRequest *styleRequest;
@property (nonatomic) int activeStyleOverride;
@property (nonatomic) long long mode;
@property (copy, nonatomic) NSArray *enabledPartIdentifiers;
@property (nonatomic) struct CGRect avoidanceFrame;
@property (weak, nonatomic) id <UIStatusBarManager> manager;
@property (weak, nonatomic) id <UIStatusBarStyleDelegate> styleDelegate;
@property (weak, nonatomic) id <UIStatusBarCarPlayDockDataProviding> dockDataProvider;
@property (weak, nonatomic, readonly) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) _Bool persistentAnimationsEnabled;
@property (nonatomic, readonly) int styleOverrides;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)heightForStyle:(long long)arg1 orientation:(long long)arg2;
+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyle:(long long)arg1 orientation:(long long)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (Class)_implementationClass;
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 activeStyleOverride:(int *)arg3;
+ (void)_setImplementationClass:(Class)arg1;

- (void)dealloc;
- (_Bool)isHidden;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlpha:(double)arg1;
- (void)setTintColor:(id)arg1;
- (void)didMoveToSuperview;
- (double)defaultHeight;
- (_Bool)isTranslucent;
- (double)currentHeight;
- (void)forceUpdateStyleOverrides:(_Bool)arg1;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;
- (long long)currentStyle;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (double)defaultDoubleHeight;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdate:(_Bool)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;
- (double)heightForOrientation:(long long)arg1;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (void)setOffset:(struct UIOffset)arg1 forPartWithIdentifier:(id)arg2;
- (struct UIOffset)offsetForPartWithIdentifier:(id)arg1;
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;
- (double)alphaForPartWithIdentifier:(id)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(_Bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (_Bool)isDoubleHeight;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;
- (void)_evaluateServerRegistration;
- (void)forceUpdateToData:(const CDStruct_0942cde0 *)arg1 animated:(_Bool)arg2;
- (struct CGRect)frameForOrientation:(long long)arg1;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)_getStyle:(long long *)arg1 andActiveOverride:(int *)arg2 forRequestedStyle:(long long)arg3;
- (void)_performAnimations:(CDUnknownBlockType)arg1 withParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestStyle:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldSeekHigherPriorityTouchTarget;
- (void)animateUnlock;
- (void)jiggleLockIcon;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (long long)styleForRequestedStyle:(long long)arg1;
- (void)setEnabledCenterItems:(id)arg1 duration:(double)arg2;
- (void)forceUpdateData:(_Bool)arg1;
- (void)_noteStyleOverridesChangedLocally;
- (void)forgetEitherSideHistory;
- (void)setShowsOnlyCenterItems:(_Bool)arg1;
- (void)requestStyle:(long long)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)_statusBarWillAnimateRotation;
- (void)_statusBarDidAnimateRotation;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (_Bool)_isTransparent;
- (void)_setOverrideHeight:(double)arg1;
- (void)_clearOverrideHeight;
- (_Bool)_rectIntersectsTimeItem:(struct CGRect)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)_styleOverridesDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 inProcessStateProvider:(id)arg3;
- (void)requestStyle:(long long)arg1 animationParameters:(id)arg2 forced:(_Bool)arg3;
- (void)requestStyle:(long long)arg1 animated:(_Bool)arg2 forced:(_Bool)arg3;
- (void)_setHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;
- (double)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (struct CGRect)currentFrame;
- (void)requestStyle:(long long)arg1;
- (id)activeTintColor;
- (_Bool)_canShowInOrientation:(long long)arg1;
- (void)setLocalDataOverrides:(CDStruct_f9a79af9 *)arg1;
- (_Bool)showsContentsOnScreen;
- (_Bool)_usesModernBar;

@end

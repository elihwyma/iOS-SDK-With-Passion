/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SBDeviceApplicationSceneHandle, SBMedusaSettings, SBOrientationTransformWrapperView, UIColor, UIStatusBar, _UIStatusBar;

@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource, UIStatusBarStyleDelegate_SpringBoardOnly;

@interface SBMainDisplaySceneLayoutStatusBarView : UIView <Swift>

{
    SBOrientationTransformWrapperView *_statusBarContainerView;
    UIView *_statusBarWrapperView;
    UIStatusBar *_statusBar;
    _UIStatusBar *_statusBarUnderlyingViewAccessor;
    NSMutableSet *_statusBarRequiringReasons;
    NSMutableDictionary *_partIdentifiersDefaultStyles;
    NSMutableDictionary *_partIdentifiersCustomStyles;
    NSMutableDictionary *_hitTestLayers;
    SBDeviceApplicationSceneHandle *_statusBarBreadcrumbSceneHandle;
    _Bool _statusBarLaidOutForClassic;
    SBMedusaSettings *_medusaSettings;
    _Bool _debugBackgroundColorEnabled;
    _Bool _debugOffsetEnabled;
    unsigned long long _debugOffsetIndex;
    UIColor *_debugBackgroundColor;
    struct {
        unsigned int styleDelegateWants_statusBar_styleForRequestedStyle_overrides:1;
        unsigned int styleDelegateWants_statusBar_willAnimateFromHeight_toHeight_duration_animation:1;
        unsigned int styleDelegateWants_statusBar_didAnimateFromHeight_toHeight_animation:1;
        unsigned int styleDelegateWants_statusBarSystemNavigationAction:1;
        unsigned int styleDelegateWants_statusBar_didTriggerButtonType_withAction:1;
        unsigned int styleDelegateWants_statusBar_didTriggerButtonType_withAction_context:1;
        unsigned int styleDelegateWants_statusBar_effectiveStyleOverridesForRequestedStyle_overrides:1;
        unsigned int styleDelegateWants_overriddenRequestedStyleFromStyle:1;
        unsigned int dataSourceWants_statusBarPartsForSceneWithIdentifier:1;
        unsigned int dataSourceWants_currentlyValidStatusBarPartIdentifiers:1;
        unsigned int dataSourceWants_statusBarDescriberAtPoint_inView_pointInSceneLayoutSpace:1;
        unsigned int dataSourceWants_frameForSceneIdentifier_inView:1;
        unsigned int dataSourceWants_statusBarAvoidanceFrame:1;
    } _conformanceFlags;
    id <SBMainDisplaySceneLayoutStatusBarViewDataSource> _dataSource;
    id <UIStatusBarStyleDelegate_SpringBoardOnly> _realStyleDelegate;
}

@property (weak, nonatomic) id <UIStatusBarStyleDelegate_SpringBoardOnly> realStyleDelegate;
@property (nonatomic, readonly, getter=isRequiringStatusBar) _Bool requiringStatusBar;
@property (nonatomic, readonly, getter=isStatusBarEffectivelyHidden) _Bool statusBarEffectivelyHidden;
@property (weak, nonatomic) id <SBMainDisplaySceneLayoutStatusBarViewDataSource> dataSource;
@property (nonatomic) long long containerOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (id)statusBarSystemNavigationAction:(id)arg1;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (int)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;
- (struct CGRect)_statusBarFrameForOrientation:(long long)arg1;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect)arg2;
- (void)_setupDebugging;
- (void)_addStatusBarIfNeeded;
- (void)_tearDownStatusBar;
- (id)_defaultStatusBarStyleRequest;
- (id)createStatusBarWithFrame:(struct CGRect)arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3;
- (_Bool)_allowChangingIndividualStatusBarParts;
- (void)applyStatusBarStylesForDescriber:(id)arg1;
- (void)_statusBarScrollToTop:(id)arg1;
- (void)_statusBarShowDebug:(id)arg1;
- (void)_updateHitTestLayers;
- (void)_updateDebugBackgroundColor;
- (void)_statusBarTapped:(id)arg1 type:(long long)arg2;
- (id)_sceneHandleForPrimaryApplicationIfAny;
- (id)_anyAppViewControllerOwningInterfaceOrientation;
- (void)_layoutStatusBarForOrientation:(long long)arg1;
- (id)_sceneHandleForClassicApplicationIfAny;
- (_Bool)_statusBarNeedsSpecialLayoutForClassic;
- (struct CGRect)_statusBarAvoidanceFrame;
- (id)allValidStatusBarPartIdentifiers;
- (long long)_effectiveStyleForPartIdentifier:(id)arg1;
- (void)_applyStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2 toSceneWithIdentifier:(id)arg3;
- (void)_applyStatusBarStyleOverridesToSuppress:(int)arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarAlpha:(double)arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarStyle:(long long)arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarAvoidanceFrame:(struct CGRect)arg1 toSceneWithIdentifier:(id)arg2;
- (void)_applyStatusBarStyle:(long long)arg1 toPartIdentifier:(id)arg2 ofSceneWithIdentifier:(id)arg3;
- (void)_enumerateValidStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_validStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1;
- (void)_animateHidden:(_Bool)arg1 withAnimation:(long long)arg2 transitionHandler:(CDUnknownBlockType)arg3 applyHandler:(CDUnknownBlockType)arg4;
- (id)_currentlyValidStatusBarPartIdentifiers;
- (int)_effectiveStatusBarStyleOverridesToSuppress;
- (id)statusBarStyleRequestForStatusBarPart:(id)arg1;
- (struct CGAffineTransform)_hiddenTransformForAnimation:(long long)arg1;
- (double)_hiddenAlphaForAnimation:(long long)arg1;
- (void)_updateDebugOffset;
- (void)beginRequiringStatusBarForReason:(id)arg1;
- (void)endRequiringStatusBarForReason:(id)arg1;
- (void)layoutStatusBarForSpringBoardRotationToOrientation:(long long)arg1;
- (void)updateStatusBarOrientationForLegacyApp;
- (void)updateBreadcrumbActionIfNecessary;
- (void)_setDebugBackgroundColor:(id)arg1;
- (void)_setDebugOffsetIndex:(unsigned long long)arg1;

@end

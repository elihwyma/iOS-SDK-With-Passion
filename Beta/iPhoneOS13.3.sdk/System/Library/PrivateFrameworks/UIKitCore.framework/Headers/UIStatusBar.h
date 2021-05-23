/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBar_Base.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIView;

@interface UIStatusBar : UIStatusBar_Base

{
    _Bool _showsForeground;
    _Bool _observingDefaults;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    CDStruct_0942cde0 _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    UIStatusBarStyleAttributes *_styleAttributes;
    _Bool _waitingOnCallbackAfterChangingStyleOverridesLocally;
    _Bool _showOnlyCenterItems;
    _Bool _foregroundViewShouldIgnoreStatusBarDataDuringAnimation;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    NSMutableDictionary *_actions;
    _Bool _disablesRasterization;
    _Bool _timeHidden;
}

@property (nonatomic, getter=isTimeHidden) _Bool timeHidden;

+ (double)_viewControllerAdjustmentForOrientation:(long long)arg1;
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3;
+ (long long)lowBatteryLevel;
+ (long long)_deviceUserInterfaceLayoutDirection;
+ (struct NSDirectionalEdgeInsets)_roundedPadEdgeInsets;
+ (struct NSDirectionalEdgeInsets)_regularPadEdgeInsets;
+ (double)_roundedPadBaselineOffset;
+ (double)_regularPadBaselineOffset;
+ (void)getData:(CDStruct_0942cde0 *)arg1 forRequestedData:(const CDStruct_0942cde0 *)arg2 withOverrides:(const CDStruct_f9a79af9 *)arg3;
+ (long long)defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2;
+ (id)_styleAttributesForStatusBarStyle:(long long)arg1;
+ (void)_setDeviceUserInterfaceLayoutDirection:(long long)arg1;
+ (_Bool)_shouldForwardToImplementationClassForStyle:(long long)arg1;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (_Bool)_isLightContentStyle:(long long)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (void)enumerateStatusBarStyleOverridesWithBlock:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setOrientation:(long long)arg1;
- (void)setRegistered:(_Bool)arg1;
- (id)_backgroundView;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (double)defaultHeight;
- (_Bool)isTranslucent;
- (_Bool)_shouldReverseLayoutDirection;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (id)statusBarWindow;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdate:(_Bool)arg1;
- (void)_performBlockWhileIgnoringForegroundViewChanges:(CDUnknownBlockType)arg1;
- (double)heightForOrientation:(long long)arg1;
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;
- (void)_dateTimePreferencesUpdated;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (id)enabledPartIdentifiers;
- (id)_doubleHeightStatusStringForStyle:(long long)arg1;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(_Bool)arg2 forStyle:(long long)arg3;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (_Bool)isDoubleHeight;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_updateShouldRasterize;
- (void)forceUpdateToData:(const CDStruct_0942cde0 *)arg1 animated:(_Bool)arg2;
- (id)_currentComposedData;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (void)_adjustDoubleHeightTextVisibility;
- (struct CGRect)frameForOrientation:(long long)arg1;
- (id)_currentStyleAttributes;
- (id)styleRequest;
- (id)_styleAttributesForRequest:(id)arg1;
- (id)currentStyleRequestForStyle:(long long)arg1;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2 forced:(_Bool)arg3;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2 forced:(_Bool)arg3;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_finishedSettingStyleWithOldHeight:(double)arg1 newHeight:(double)arg2 animation:(int)arg3;
- (_Bool)_shouldUseInProcessProviderDoubleHeightStatusString;
- (void)_updateBackgroundFrame;
- (struct CGRect)_backgroundFrameForAttributes:(id)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(_Bool)arg1;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (id)_currentComposedDataForStyle:(id)arg1;
- (struct CGAffineTransform)_slideTransform;
- (void)_setFrameForStyle:(id)arg1;
- (void)_swapToNewBackgroundView;
- (void)_crossfadeToNewForegroundViewWithAlpha:(double)arg1;
- (void)_setStyle:(id)arg1;
- (void)_swapToNewForegroundView;
- (void)_crossfadeToNewBackgroundView;
- (void)setSuppressesHiddenSideEffects:(_Bool)arg1;
- (_Bool)_shouldSeekHigherPriorityTouchTarget;
- (_Bool)_touchShouldProduceReturnEvent;
- (void)animateUnlock;
- (void)jiggleLockIcon;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)_updateUIWithStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
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
- (void)_setDisablesRasterization:(_Bool)arg1;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(long long)arg2;
- (_Bool)_isTransparent;
- (void)_setOverrideHeight:(double)arg1;
- (void)_clearOverrideHeight;
- (_Bool)_rectIntersectsTimeItem:(struct CGRect)arg1;
- (_Bool)disablesRasterization;

@end

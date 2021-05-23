/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBar_Base.h>

@class _UIStatusBar;

@interface UIStatusBar_Modern : UIStatusBar_Base

{
    _UIStatusBar *_statusBar;
}

@property (retain, nonatomic) _UIStatusBar *statusBar;

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3;
+ (Class)_implementationClass;
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(int)arg2 activeStyleOverride:(int *)arg3;

- (void)setMode:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAvoidanceFrame:(struct CGRect)arg1;
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;
- (void)setEnabledPartIdentifiers:(id)arg1;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (void)forceUpdate:(_Bool)arg1;
- (long long)_effectiveStyleFromStyle:(long long)arg1;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (void)setOffset:(struct UIOffset)arg1 forPartWithIdentifier:(id)arg2;
- (struct UIOffset)offsetForPartWithIdentifier:(id)arg1;
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;
- (double)alphaForPartWithIdentifier:(id)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (id)enabledPartIdentifiers;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;
- (void)jiggleLockIcon;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)forceUpdateData:(_Bool)arg1;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (int)_implicitStyleOverrideForStyle:(long long)arg1;
- (id)_effectiveDataFromData:(id)arg1 activeOverride:(int)arg2 canUpdateBackgroundActivity:(_Bool)arg3;
- (void)_updateWithData:(id)arg1 force:(_Bool)arg2;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(_Bool)arg6;
- (void)_updateSemanticContentAttributeFromLegacyData:(const CDStruct_0942cde0 *)arg1;
- (id)_dataFromLegacyData:(const CDStruct_0942cde0 *)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableSet, NSString, UIScene, UIWindowScene;

@interface UIStatusBarManager : NSObject

{
    _Bool _statusBarHidden;
    _Bool _inStatusBarFadeAnimation;
    long long _statusBarStyle;
    UIWindowScene *_windowScene;
    NSMutableSet *_localStatusBars;
    NSDictionary *_statusBarPartStyles;
    double _statusBarAlpha;
    CDUnknownBlockType _debugMenuHandler;
}

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (retain, nonatomic) NSMutableSet *localStatusBars;
@property (nonatomic, readonly) NSDictionary *statusBarPartStyles;
@property (nonatomic, readonly, getter=isInStatusBarFadeAnimation) _Bool inStatusBarFadeAnimation;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) double statusBarHeight;
@property (copy, nonatomic) CDUnknownBlockType debugMenuHandler;
@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly, getter=isStatusBarHidden) _Bool statusBarHidden;
@property (nonatomic, readonly) struct CGRect statusBarFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

+ (id)_implicitStatusBarAnimationParametersWithClass:(Class)arg1;

- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)initWithScene:(id)arg1;
- (double)defaultStatusBarHeightInOrientation:(long long)arg1;
- (void)updateStatusBarAppearance;
- (void)updateLocalStatusBars;
- (_Bool)statusBarHidden;
- (void)setupForSingleLocalStatusBar;
- (struct CGRect)statusBarFrameForStatusBarHeight:(double)arg1;
- (void)updateStatusBarAppearanceWithAnimationParameters:(id)arg1;
- (CDUnknownBlockType)_updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2 animationParameters:(id)arg3;
- (_Bool)_updateVisibilityForWindow:(id)arg1 targetOrientation:(long long)arg2 animationParameters:(id *)arg3;
- (_Bool)_updateStyleForWindow:(id)arg1 animationParameters:(id *)arg2;
- (_Bool)_updateAlpha;
- (void)_visibilityChangedWithOriginalOrientation:(long long)arg1 targetOrientation:(long long)arg2 animationParameters:(id)arg3;
- (void)activateLocalStatusBar:(id)arg1;
- (void)_updateLocalStatusBar:(id)arg1;
- (void)_handleScrollToTopAtXPosition:(double)arg1;
- (struct CGPoint)_adjustedLocationForXPosition:(double)arg1;
- (CDUnknownBlockType)updateStatusBarAppearanceWithClientSettings:(id)arg1 transitionContext:(id)arg2;
- (void)deactivateLocalStatusBar:(id)arg1;
- (id)createLocalStatusBar;
- (void)handleTapAction:(id)arg1;

@end

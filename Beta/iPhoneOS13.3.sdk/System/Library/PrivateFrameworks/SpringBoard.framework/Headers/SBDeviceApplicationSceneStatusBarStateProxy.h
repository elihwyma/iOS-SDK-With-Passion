/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>

@class NSString, SBDeviceApplicationSceneStatusBarStateProvider;

@interface SBDeviceApplicationSceneStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProvider_Base

{
    SBDeviceApplicationSceneStatusBarStateProvider *_stateProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (long long)_statusBarStyle;
- (struct CGRect)statusBarAvoidanceFrame;
- (id)_statusBarPartStyles;
- (double)_statusBarAlpha;
- (int)statusBarStyleOverridesToSuppress;
- (id)statusBarSceneIdentifier;
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (_Bool)_anyObserverWants:(SEL)arg1;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(_Bool)arg2 withAnimation:(long long)arg3;
- (id)statusBarControllingSceneHandle;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(int)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect)arg2;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(_Bool)arg2;
- (_Bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (_Bool)_suppressInheritedPartStyles;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_fallbackInterfaceOrientation;
- (void)invalidateStatusBarSettings;
- (id)initWithStateProvider:(id)arg1;

@end

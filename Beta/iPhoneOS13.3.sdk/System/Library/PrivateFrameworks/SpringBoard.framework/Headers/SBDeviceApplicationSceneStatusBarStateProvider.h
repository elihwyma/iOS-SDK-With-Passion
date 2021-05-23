/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>

@class NSString, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base

{
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector *_appSceneSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (long long)_statusBarStyle;
- (struct CGRect)statusBarAvoidanceFrame;
- (id)_statusBarPartStyles;
- (double)_statusBarAlpha;
- (int)statusBarStyleOverridesToSuppress;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (id)statusBarSceneIdentifier;
- (_Bool)_anyObserverWants:(SEL)arg1;
- (void)_performUpdateWith:(id)arg1 actions:(CDUnknownBlockType)arg2;
- (id)statusBarControllingSceneHandle;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(_Bool)arg2;
- (_Bool)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (_Bool)_suppressInheritedPartStyles;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_fallbackInterfaceOrientation;
- (id)_initWithSceneHandle:(id)arg1;
- (void)invalidateStatusBarSettings;

@end

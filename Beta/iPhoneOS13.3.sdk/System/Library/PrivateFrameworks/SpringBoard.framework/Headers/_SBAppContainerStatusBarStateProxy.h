/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

{
    SBAppContainerViewController *_appVCBackReference;
}

@property (weak, nonatomic) SBAppContainerViewController *appVCBackReference;

- (long long)_statusBarStyle;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(_Bool)arg2;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (_Bool)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_fallbackInterfaceOrientation;
- (long long)overrideStatusBarStyle;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride <Swift>

- (unsigned short)_statusBarStyle;
- (unsigned short)statusBarAvoidanceFrame;
- (unsigned short)_statusBarPartStyles;
- (unsigned short)_statusBarAlpha;
- (unsigned short)statusBarStyleOverridesToSuppress;
- (unsigned short)statusBarSceneIdentifier;
- (unsigned short)statusBarControllingSceneHandle;
- (unsigned short)_statusBarStyleForPartWithIdentifier:suppressingInherited: /* Error: Ran out of types for this method. */;
- (unsigned short)_statusBarHiddenGivenFallbackOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)_statusBarOrientationGivenFallbackOrientation: /* Error: Ran out of types for this method. */;
- (unsigned short)_suppressInheritedPartStyles;
- (unsigned short)_statusBarAppearsOutsideOfAJailedApp;
- (unsigned short)_fallbackInterfaceOrientation;

@end

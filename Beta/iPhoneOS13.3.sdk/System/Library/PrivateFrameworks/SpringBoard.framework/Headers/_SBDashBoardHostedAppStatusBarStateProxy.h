/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

{
    SBDashBoardHostedAppViewController *_hostedAppVCBackReference;
}

@property (weak, nonatomic) SBDashBoardHostedAppViewController *hostedAppVCBackReference;

- (double)_statusBarAlpha;
- (_Bool)_suppressInheritedPartStyles;
- (long long)_fallbackInterfaceOrientation;

@end

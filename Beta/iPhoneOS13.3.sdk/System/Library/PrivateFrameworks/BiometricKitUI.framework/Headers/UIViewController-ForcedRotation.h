/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (ForcedRotation)

+ (long long)bkui_reverseLeftRight:(long long)arg1;

- (long long)bkui_reverseLeftRight:(long long)arg1;
- (long long)bkui_uiforDeviceOrientation:(long long)arg1;
- (void)bkui_rotateView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 animatedDuration:(double)arg4 alongSide:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (long long)bkui_deviceOrientationForIterfaceOrientation:(long long)arg1;

@end

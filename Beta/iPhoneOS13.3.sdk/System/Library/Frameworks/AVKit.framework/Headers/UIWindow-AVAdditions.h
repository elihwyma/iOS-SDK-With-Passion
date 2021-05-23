/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIWindow.h>

@interface UIWindow (AVAdditions)

- (_Bool)avkit_canAttemptSecondWindowForRotability;
- (_Bool)avkit_isHostedInAnotherProcess;
- (_Bool)avkit_canAttemptRotation;
- (long long)avkit_preferredInterfaceOrientationFromDeviceOrientation;
- (_Bool)avkit_supportsAutorotationForInterfaceOrientationMask:(unsigned long long)arg1;
- (void)avkit_ensureOrientation:(long long)arg1 disableTouchCancellation:(_Bool)arg2;

@end

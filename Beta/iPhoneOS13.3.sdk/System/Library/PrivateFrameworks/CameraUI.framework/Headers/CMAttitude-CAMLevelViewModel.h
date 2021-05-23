/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CoreMotion/CMAttitude.h>

@interface CMAttitude (CAMLevelViewModel)

- (void)cam_getDistanceFromFlat:(out float *)arg1 relativeRoll:(out float *)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIApplication.h>

@interface UIApplication (Camera)

@property (nonatomic, readonly) long long cam_currentInterfaceOrientation;
@property (nonatomic, readonly) _Bool cam_isSuspended;
@property (nonatomic, readonly) long long cam_applicationState;

@end

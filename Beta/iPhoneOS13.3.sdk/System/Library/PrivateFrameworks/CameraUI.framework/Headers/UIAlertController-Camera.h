/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIAlertController.h>

@interface UIAlertController (Camera)

+ (void)cam_showUsageSettings;

- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 lowDiskSpaceAlertType:(long long)arg3 dismissActionHandler:(CDUnknownBlockType)arg4 resultActionHandler:(CDUnknownBlockType)arg5;
- (id)initWithType:(long long)arg1 captureMode:(long long)arg2 dismissActionHandler:(CDUnknownBlockType)arg3 resultActionHandler:(CDUnknownBlockType)arg4;

@end

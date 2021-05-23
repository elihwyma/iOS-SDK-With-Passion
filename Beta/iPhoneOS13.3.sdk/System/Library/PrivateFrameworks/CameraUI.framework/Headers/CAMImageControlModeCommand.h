/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMImageControlModeCommand : CAMCaptureCommand

{
    long long __captureMode;
}

@property (nonatomic, readonly) long long _captureMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCaptureMode:(long long)arg1;

@end

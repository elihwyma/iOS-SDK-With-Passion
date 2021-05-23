/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoOrientationCommand : CAMCaptureCommand

{
    long long __captureOrientation;
}

@property (nonatomic, readonly) long long _captureOrientation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;
- (id)initWithCaptureOrientation:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMVideoCaptureRequest;

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand

{
    CAMVideoCaptureRequest *__request;
}

@property (nonatomic, readonly) CAMVideoCaptureRequest *_request;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (long long)_videoOrientationForCaptureOrientation:(long long)arg1;

@end

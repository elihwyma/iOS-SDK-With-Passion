/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordingCameraSelectionBehaviorCommand : CAMCaptureCommand

{
    _Bool __cameraSwitchingEnabled;
}

@property (nonatomic, readonly, getter=_isCameraSwitchingEnabled) _Bool _cameraSwitchingEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCameraSwitchingEnabled:(_Bool)arg1;

@end

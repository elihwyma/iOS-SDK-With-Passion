/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand

{
    _Bool __recordingPaused;
}

@property (nonatomic, readonly, getter=_isRecordingPaused) _Bool _recordingPaused;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithRecordingPaused:(_Bool)arg1;

@end

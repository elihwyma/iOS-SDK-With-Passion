/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand

{
    _Bool _stereoAudioCaptureEnabled;
}

@property (nonatomic, readonly, getter=isStereoAudioCaptureEnabled) _Bool stereoAudioCaptureEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithStereoAudioCaptureEnabled:(_Bool)arg1;

@end

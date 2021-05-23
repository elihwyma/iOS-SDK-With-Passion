/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoRecordFaceMetadataCommand : CAMCaptureCommand

{
    _Bool __enabled;
}

@property (nonatomic, readonly, getter=_isEnabled) _Bool _enabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithEnabled:(_Bool)arg1;
- (id)_connectionForMovieFileOutput:(id)arg1 metadataPortType:(id)arg2;
- (void)_addMetadataConnectionForPortType:(id)arg1 videoDeviceInput:(id)arg2 movieFileOutput:(id)arg3 captureSession:(id)arg4;

@end

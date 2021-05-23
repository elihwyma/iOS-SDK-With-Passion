/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMPreparePhotoSettingsCommand : CAMCaptureCommand

{
    CAMCaptureGraphConfiguration *__desiredGraphConfiguration;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_desiredGraphConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithGraphConfiguration:(id)arg1;

@end

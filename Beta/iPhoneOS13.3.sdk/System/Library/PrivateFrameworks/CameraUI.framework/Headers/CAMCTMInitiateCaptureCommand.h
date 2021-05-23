/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMMomentCaptureSettings;

@interface CAMCTMInitiateCaptureCommand : CAMCaptureCommand

{
    CAMMomentCaptureSettings *__settings;
}

@property (nonatomic, readonly) CAMMomentCaptureSettings *_settings;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)executeWithContext:(id)arg1;

@end

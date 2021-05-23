/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMBlinkAndSmileDetectionCommand : CAMCaptureCommand

{
    _Bool __blinkDetectionEnabled;
    _Bool __smileDetectionEnabled;
}

@property (nonatomic, readonly, getter=_isBlinkDetectionEnabled) _Bool _blinkDetectionEnabled;
@property (nonatomic, readonly, getter=_isSmileDetectionEnabled) _Bool _smileDetectionEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithBlinkDetection:(_Bool)arg1 smileDetection:(_Bool)arg2;

@end

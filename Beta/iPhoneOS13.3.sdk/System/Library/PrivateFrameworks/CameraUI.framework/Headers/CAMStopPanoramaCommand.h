/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStopPanoramaCommand : CAMCaptureCommand

{
    _Bool __interrupted;
}

@property (nonatomic, readonly) _Bool _interrupted;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithInterrupted:(_Bool)arg1;

@end

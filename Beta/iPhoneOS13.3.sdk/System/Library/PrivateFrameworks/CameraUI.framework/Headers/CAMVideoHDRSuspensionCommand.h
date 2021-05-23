/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMVideoHDRSuspensionCommand : CAMCaptureCommand

{
    _Bool _videoHDRSuspended;
}

@property (nonatomic, readonly, getter=isVideoHDRSuspended) _Bool videoHDRSuspended;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithVideoHDRSuspended:(_Bool)arg1;

@end

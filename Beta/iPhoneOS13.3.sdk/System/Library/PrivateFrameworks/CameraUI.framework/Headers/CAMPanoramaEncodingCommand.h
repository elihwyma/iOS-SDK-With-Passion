/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPanoramaEncodingCommand : CAMCaptureCommand

{
    long long __photoEncodingBehavior;
}

@property (nonatomic, readonly) long long _photoEncodingBehavior;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithPhotoEncodingBehavior:(long long)arg1;

@end

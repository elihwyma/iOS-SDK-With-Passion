/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

#import <CameraUI/Swift-Protocol.h>

@interface CAMFlashCommand : CAMCaptureCommand <Swift>

{
    long long __flashMode;
}

@property (nonatomic, readonly) long long _flashMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithFlashMode:(long long)arg1;

@end

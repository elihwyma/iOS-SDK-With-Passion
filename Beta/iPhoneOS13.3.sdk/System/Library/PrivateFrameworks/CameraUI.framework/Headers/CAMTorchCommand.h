/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMTorchCommand : CAMCaptureCommand

{
    float __level;
    long long __torchMode;
}

@property (nonatomic, readonly) long long _torchMode;
@property (nonatomic, readonly) float _level;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithTorchMode:(long long)arg1;
- (id)initWithTorchLevel:(float)arg1;

@end

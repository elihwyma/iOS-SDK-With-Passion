/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPanoramaDirectionCommand : CAMCaptureCommand

{
    long long __direction;
}

@property (nonatomic, readonly) long long _direction;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDirection:(long long)arg1;
- (void)executeWithContext:(id)arg1;

@end

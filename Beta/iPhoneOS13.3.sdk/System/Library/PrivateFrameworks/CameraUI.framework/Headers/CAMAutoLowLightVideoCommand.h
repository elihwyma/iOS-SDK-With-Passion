/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMAutoLowLightVideoCommand : CAMCaptureCommand

{
    _Bool _autoLowLightVideoEnabled;
}

@property (nonatomic, readonly, getter=isAutoLowLightVideoEnabled) _Bool autoLowLightVideoEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAutoLowLightVideoEnabled:(_Bool)arg1;

@end

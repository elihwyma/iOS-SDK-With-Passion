/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureCommand : CAMCaptureCommand

{
    long long __exposureMode;
    struct CGPoint __exposurePointOfInterest;
}

@property (nonatomic, readonly) long long _exposureMode;
@property (nonatomic, readonly) struct CGPoint _exposurePointOfInterest;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithExposureMode:(long long)arg1;
- (id)initWithExposureMode:(long long)arg1 atPointOfInterest:(struct CGPoint)arg2;

@end

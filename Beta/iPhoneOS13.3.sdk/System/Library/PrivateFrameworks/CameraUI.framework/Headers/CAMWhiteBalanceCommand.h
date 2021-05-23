/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMWhiteBalanceCommand : CAMCaptureCommand

{
    _Bool __matchExposureMode;
    long long __whiteBalanceMode;
}

@property (nonatomic, readonly) _Bool _matchExposureMode;
@property (nonatomic, readonly) long long _whiteBalanceMode;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithWhiteBalanceMode:(long long)arg1;
- (id)initWithMatchExposureMode;
- (id)_descriptionForWhiteBalanceMode:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand

{
    CAMCaptureGraphConfiguration *__knownGraphConfiguration;
    CAMCaptureGraphConfiguration *__resolvedGraphConfiguration;
}

@property (nonatomic, readonly) CAMCaptureGraphConfiguration *_knownGraphConfiguration;
@property (retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)userInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithKnownGraphConfiguration:(id)arg1;
- (long long)_resolvedVideoConfigurationFromContext:(id)arg1;

@end

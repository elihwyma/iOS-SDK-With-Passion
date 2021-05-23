/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaConfiguration;

@interface CAMPanoramaConfigurationCommand : CAMCaptureCommand

{
    CAMPanoramaConfiguration *__configuration;
}

@property (nonatomic, readonly) CAMPanoramaConfiguration *_configuration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)executeWithContext:(id)arg1;

@end

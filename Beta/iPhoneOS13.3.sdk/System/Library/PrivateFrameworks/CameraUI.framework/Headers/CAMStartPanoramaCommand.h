/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@class CAMPanoramaCaptureRequest;

@interface CAMStartPanoramaCommand : CAMCaptureCommand

{
    CAMPanoramaCaptureRequest *__request;
}

@property (nonatomic, readonly) CAMPanoramaCaptureRequest *_request;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)executeWithContext:(id)arg1;

@end

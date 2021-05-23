/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMFaceDrivenImageProcessingCommand : CAMCaptureCommand

{
    _Bool _faceDrivenImageProcessingEnabled;
}

@property (nonatomic, readonly, getter=isFaceDrivenImageProcessingEnabled) _Bool faceDrivenImageProcessingEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithFaceDrivenImageProcessingEnabled:(_Bool)arg1;

@end

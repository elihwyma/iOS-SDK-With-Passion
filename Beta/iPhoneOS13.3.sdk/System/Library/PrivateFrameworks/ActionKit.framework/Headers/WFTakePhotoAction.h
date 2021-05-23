/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class AVCaptureSession, NSString;

@interface WFTakePhotoAction : WFAction

{
    unsigned long long _remainingPhotos;
    AVCaptureSession *_session;
}

@property (retain, nonatomic) AVCaptureSession *session;
@property (nonatomic) unsigned long long remainingPhotos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)takePhoto;

@end

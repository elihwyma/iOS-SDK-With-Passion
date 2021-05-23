/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMStillImageCaptureRequest, CAMVideoCaptureResult;

@interface CAMIrisVideoControllerJob : NSObject

{
    CAMStillImageCaptureRequest *_request;
    CAMVideoCaptureResult *_videoCaptureResult;
}

@property (nonatomic, readonly) CAMStillImageCaptureRequest *request;
@property (nonatomic, readonly) CAMVideoCaptureResult *videoCaptureResult;

- (id)initWithRequest:(id)arg1 videoCaptureResult:(id)arg2;

@end

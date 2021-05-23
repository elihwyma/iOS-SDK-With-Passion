/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSOperation.h>

@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation

{
    HMCameraClip *_cameraClip;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) HMCameraClip *cameraClip;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)main;
- (id)initWithCameraClip:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

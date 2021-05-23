/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMSourceNode.h>

@class AVCaptureSession, AXMCaptureVideoDataOutput, AXMVisionAnalysisOptions, NSObject, NSString;

@protocol AXMAVCaptureSessionNodeDelegate, AXMAVCaptureSessionNodeFrameDelegate, OS_dispatch_queue;

@interface AXMAVCaptureSessionNode : AXMSourceNode

{
    NSObject<OS_dispatch_queue> *_autotrigger_queue;
    AXMCaptureVideoDataOutput *_axVideoDataOutput;
    id <AXMAVCaptureSessionNodeDelegate> _captureSessionNodeDelegate;
    id <AXMAVCaptureSessionNodeFrameDelegate> _frameDelegate;
    AVCaptureSession *_captureSession;
    AXMVisionAnalysisOptions *_analysisOptions;
}

@property (weak, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (weak, nonatomic) id <AXMAVCaptureSessionNodeDelegate> captureSessionNodeDelegate;
@property (weak, nonatomic) id <AXMAVCaptureSessionNodeFrameDelegate> frameDelegate;
@property (retain, nonatomic) AXMCaptureVideoDataOutput *axVideoDataOutput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)nodeInitialize;
- (void)setShouldProcessRemotely:(_Bool)arg1;
- (void)produceImage:(id)arg1;
- (void)beginFrameEventsWithAVCaptureSession:(id)arg1 delegate:(id)arg2 queue:(id)arg3;
- (void)addVideoDataOutputWithAVCaptureSession:(id)arg1 queue:(id)arg2;
- (void)endVideoFrameEvents;
- (void)captureSessionNode:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)triggerWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 interfaceOrientation:(long long)arg2 mirrored:(_Bool)arg3 options:(id)arg4 userContext:(id)arg5;
- (void)autoTriggerVideoFrameEventsWithAVCaptureSession:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)endAutoTriggerOfVideoFrameEvents;

@end

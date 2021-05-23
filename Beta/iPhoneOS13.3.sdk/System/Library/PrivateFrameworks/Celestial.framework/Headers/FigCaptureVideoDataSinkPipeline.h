/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureDevice, BWNodeOutput, BWPixelTransferNode, FigCaptureVISPipeline, NSString;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

{
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
    BWNodeOutput *_faceTrackingVideoCaptureOutput;
    BWNodeOutput *_offlineVISMotionDataCaptureOutput;
    NSString *_sourceID;
    int _sourceDeviceType;
}

@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) BWNodeOutput *faceTrackingVideoCaptureOutput;
@property (nonatomic, readonly) BWNodeOutput *offlineVISMotionDataCaptureOutput;

+ (void)initialize;

- (void)dealloc;
- (int)_buildVideoDataSinkPipelineWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 delegate:(id)arg5;
- (id)initWithConfiguration:(id)arg1 sourceVideoOutput:(id)arg2 captureDevice:(id)arg3 graph:(id)arg4 name:(id)arg5 delegate:(id)arg6;

@end

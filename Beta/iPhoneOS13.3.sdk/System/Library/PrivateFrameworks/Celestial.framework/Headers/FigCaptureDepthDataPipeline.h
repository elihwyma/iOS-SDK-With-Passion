/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class BWDepthConverterNode, BWNodeOutput, BWPipelineStage, NSString;

@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline

{
    BWDepthConverterNode *_depthDataConverterNode;
    BWNodeOutput *_videoAndConvertedDepthDataOutput;
    BWPipelineStage *_pipelineStage;
    NSString *_sourceID;
    int _sourceDeviceType;
}

@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) BWPipelineStage *pipelineStage;
@property (nonatomic, readonly) BWNodeOutput *videoAndConvertedDepthDataOutput;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 delegate:(id)arg5;
- (int)_buildDepthPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 delegate:(id)arg4;
- (int)_buildDepthConversionPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 convertedDepthOutputsOut:(id *)arg4;
- (int)_buildDepthDataSinkPipeline:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 clientPID:(id)arg4 delegate:(id)arg5;

@end

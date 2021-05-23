/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWPipelineStage, FigCaptureSourceVideoFormat, FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSDictionary, NSNumber;

@interface FigCaptureDepthDataPipelineConfiguration : NSObject

{
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    _Bool _depthConvertedUpstream;
    _Bool _videoAndConvertedDepthDataOutputEnabled;
    BWPipelineStage *_pipelineStage;
    NSNumber *_clientPID;
    int _depthDataBaseRotationDegrees;
    NSDictionary *_cameraInfoByPortType;
    FigCaptureSourceVideoFormat *_requiredFormat;
}

@property (retain, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic) _Bool depthConvertedUpstream;
@property (nonatomic) _Bool videoAndConvertedDepthDataOutputEnabled;
@property (nonatomic) int depthDataBaseRotationDegrees;
@property (retain, nonatomic) BWPipelineStage *pipelineStage;
@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;

- (void)dealloc;

@end

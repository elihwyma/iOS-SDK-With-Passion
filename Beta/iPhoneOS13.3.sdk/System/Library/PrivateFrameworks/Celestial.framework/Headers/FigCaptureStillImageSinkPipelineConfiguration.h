/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSDictionary, NSNumber;

@interface FigCaptureStillImageSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration

{
    NSNumber *_clientPID;
    NSDictionary *_stillImageColorInfoForFramesOriginatingFromVideoStream;
    _Bool _stillImageISPChromaNoiseReductionEnabled;
    _Bool _stereoFusionSupported;
    _Bool _isIrisSupported;
    _Bool _hdrSupported;
}

@property (retain, nonatomic) NSNumber *clientPID;
@property (retain, nonatomic) NSDictionary *stillImageColorInfoForFramesOriginatingFromVideoStream;
@property (nonatomic) _Bool stillImageISPChromaNoiseReductionEnabled;
@property (nonatomic) _Bool stereoFusionSupported;
@property (nonatomic) _Bool isIrisSupported;
@property (nonatomic) _Bool hdrSupported;

- (void)dealloc;

@end

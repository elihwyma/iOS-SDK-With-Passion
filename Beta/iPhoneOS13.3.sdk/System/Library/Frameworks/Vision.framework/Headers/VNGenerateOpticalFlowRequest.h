/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNTargetedImageRequest.h>

@interface VNGenerateOpticalFlowRequest : VNTargetedImageRequest

{
    _Bool _enableFiltering;
    float _filterLumaWeight;
    float _filterChromaWeight;
    float _filterOcclusionWeight;
    unsigned long long _levelCount;
    unsigned long long _warpCount;
    unsigned long long _filterSize;
    unsigned long long _filterSamplingDensity;
}

@property (nonatomic) unsigned long long levelCount;
@property (nonatomic) unsigned long long warpCount;
@property (nonatomic) _Bool enableFiltering;
@property (nonatomic) unsigned long long filterSize;
@property (nonatomic) unsigned long long filterSamplingDensity;
@property (nonatomic) float filterLumaWeight;
@property (nonatomic) float filterChromaWeight;
@property (nonatomic) float filterOcclusionWeight;

- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (_Bool)allowsCachingOfResults;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)wantsSequencedRequestObservationsRecording;
- (id)initWithTargetedImageSpecifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (struct __CVBuffer *)_createLKTPixelBufferFromPixelRegionOfInterest:(struct CGRect)arg1 inImageBuffer:(id)arg2 error:(id *)arg3;
- (struct __CVBuffer *)_createLKTVectorResultPixelBufferForImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 error:(id *)arg3;
- (id)_initializedLKTMetalContextAndReturnError:(id *)arg1;
- (_Bool)_calculateLKTVectorResult:(struct __CVBuffer *)arg1 fromPixelBuffer:(struct __CVBuffer *)arg2 toPixelBuffer:(struct __CVBuffer *)arg3 ofWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)_validateParameters:(id *)arg1;

@end

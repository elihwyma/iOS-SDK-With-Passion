/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@class MPSKernel, NSArray;

@protocol MTLBuffer, MTLTexture;

@interface ORBExtractionIntermediateBuffers : NSObject

{
    int _maxKeypointsPerRegion;
    unsigned int _maxRegionHeight;
    unsigned int _countOfRectRegions;
    MPSKernel *_mpsFindKeypoints;
    MPSKernel *_mpsHistogram;
    id <MTLBuffer> _rectRegionsBuffer;
    id <MTLBuffer> _rectRegionCount;
    id <MTLBuffer> _rectRegionsDesiredKeypoints;
    id <MTLBuffer> _thresholdRangeBuffer;
    NSArray *_rectRegions;
    id <MTLTexture> _gaussianBlurredTexture_RGBA8Uint;
    id <MTLTexture> _gaussianBlurredTexture_R8Uint;
    id <MTLTexture> _gaussianBlurredTexture_R8Unorm;
    id <MTLTexture> _responseTexture;
    id <MTLTexture> _suppressedResponseTexture_RGBA8Uint;
    id <MTLTexture> _suppressedResponseTexture_R8Uint;
    id <MTLTexture> _suppressedResponseTexture_R8Unorm;
    id <MTLTexture> _boxBlurredTexture_R8Uint;
    id <MTLTexture> _boxBlurredTexture_RGBA8Uint;
    id <MTLBuffer> _thresholdsBuffer;
    id <MTLBuffer> _histogramsBuffer;
    id <MTLBuffer> _countOfKeypointsPerRegion;
    id <MTLBuffer> _cumulativeCountOfKeypointsPerRegion;
    id <MTLBuffer> _truncatedRegionsBuffer;
    id <MTLBuffer> _compactKeypointsBuffer;
    id <MTLBuffer> _refinedKeypointsBuffer;
    id <MTLBuffer> _compactKeypointsAndResponsesBuffer;
    id <MTLBuffer> _responseBuffer;
    id <MTLBuffer> _descriptorBuffer;
    id <MTLBuffer> _keypointCountBuffer;
    id <MTLBuffer> _mpsRegionStrideBuffer;
    id <MTLBuffer> _refinementIntermediatesBuffer;
    unsigned long long _maxDescriptorCount;
}

@property (retain) MPSKernel *mpsFindKeypoints;
@property (retain) MPSKernel *mpsHistogram;
@property (retain) id <MTLBuffer> rectRegionsBuffer;
@property (retain) id <MTLBuffer> rectRegionCount;
@property (retain) id <MTLBuffer> rectRegionsDesiredKeypoints;
@property (retain) id <MTLBuffer> thresholdRangeBuffer;
@property (copy) NSArray *rectRegions;
@property int maxKeypointsPerRegion;
@property (retain) id <MTLTexture> gaussianBlurredTexture_RGBA8Uint;
@property (retain) id <MTLTexture> gaussianBlurredTexture_R8Uint;
@property (retain) id <MTLTexture> gaussianBlurredTexture_R8Unorm;
@property (retain) id <MTLTexture> responseTexture;
@property (retain) id <MTLTexture> suppressedResponseTexture_RGBA8Uint;
@property (retain) id <MTLTexture> suppressedResponseTexture_R8Uint;
@property (retain) id <MTLTexture> suppressedResponseTexture_R8Unorm;
@property (retain) id <MTLTexture> boxBlurredTexture_R8Uint;
@property (retain) id <MTLTexture> boxBlurredTexture_RGBA8Uint;
@property (retain) id <MTLBuffer> thresholdsBuffer;
@property (retain) id <MTLBuffer> histogramsBuffer;
@property (retain) id <MTLBuffer> countOfKeypointsPerRegion;
@property (retain) id <MTLBuffer> cumulativeCountOfKeypointsPerRegion;
@property (retain) id <MTLBuffer> truncatedRegionsBuffer;
@property (retain) id <MTLBuffer> compactKeypointsBuffer;
@property (retain) id <MTLBuffer> refinedKeypointsBuffer;
@property (retain) id <MTLBuffer> compactKeypointsAndResponsesBuffer;
@property (retain) id <MTLBuffer> responseBuffer;
@property (retain) id <MTLBuffer> descriptorBuffer;
@property (retain) id <MTLBuffer> keypointCountBuffer;
@property (retain) id <MTLBuffer> mpsRegionStrideBuffer;
@property (retain) id <MTLBuffer> refinementIntermediatesBuffer;
@property unsigned int maxRegionHeight;
@property unsigned int countOfRectRegions;
@property unsigned long long maxDescriptorCount;

- (void)_reinitializeIntermediateBuffersWithDevice:(id)arg1 templateImage:(struct __CVBuffer *)arg2 rectRegions:(id)arg3 maxKeypointsPerRegion:(int)arg4 minKeypointResponseThreshold:(float)arg5;
- (id)initWithDevice:(id)arg1 templateImage:(struct __CVBuffer *)arg2 rectRegions:(id)arg3 maxKeypointsPerRegion:(int)arg4 minKeypointResponseThreshold:(float)arg5;

@end

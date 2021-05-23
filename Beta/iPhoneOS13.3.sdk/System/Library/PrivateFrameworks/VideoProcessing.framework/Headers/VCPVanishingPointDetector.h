/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPGaborFilter;

__attribute__((visibility("hidden")))
@interface VCPVanishingPointDetector : NSObject

{
    float *_image;
    float *_orientationResponses[8];
    float *_orientionMap;
    float *_confidenceMap;
    float *_edgeWeightMap;
    unsigned long long _width;
    unsigned long long _height;
    long long _stride;
    unsigned long long _widthPadded;
    unsigned long long _heightPadded;
    long long _stridePadded;
    long long _offset;
    _Bool _validDimension;
    float _pixelMean;
    float _pixelVar;
    VCPGaborFilter *_gaborFilter;
}

- (void)dealloc;
- (id)initWithImage:(struct __CVBuffer *)arg1;
- (int)detect:(struct CGPoint *)arg1 withConfidence:(float *)arg2 dominantLine:(id *)arg3;
- (int)prepareImage:(struct __CVBuffer *)arg1;
- (int)calculateOrientationResponses;
- (int)generateOrientationMap;
- (int)generateLineWeightMap:(id)arg1 weightMap:(float *)arg2;
- (int)voteVanishingPoint:(float *)arg1;
- (int)searchVanishingPointandDominantLine:(float *)arg1 lineGroup:(id)arg2 vanishingPoint:(struct CGPoint *)arg3 vanishingPointConfidence:(float *)arg4 dominantLine:(id *)arg5;
- (void)extractUsefulAreaFrom:(float *)arg1 to:(float *)arg2 withOffset:(unsigned long long)arg3 stridePadded:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6;
- (void)averageOrientationResponses:(int)arg1 withCurrentMap:(float *)arg2;
- (void)smoothFiltering:(float *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (int)calculateConfidence:(id)arg1 lineDistance:(float)arg2 vaninshingPoint:(struct CGPoint)arg3 vanishingPointConfidence:(float *)arg4;
- (_Bool)isVerticalOrHorizontal:(int)arg1;

@end

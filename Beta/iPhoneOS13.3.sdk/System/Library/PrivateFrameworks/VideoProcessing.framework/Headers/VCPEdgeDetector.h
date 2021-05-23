/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPEdgeDetector : NSObject

{
    unsigned long long _widthPadded;
    unsigned long long _heightPadded;
    unsigned long long _width;
    unsigned long long _height;
    int _widthExt;
    int _heightExt;
    struct DSPSplitComplex _gradient;
    float *_image;
    float *_imageFiltered;
    float *_nonMaxSuppressed;
    float *_gradientX;
    float *_gradientY;
    float *_gradientMag;
    float *_edgeMap;
}

- (void)dealloc;
- (int)noiseReduction:(float *)arg1 sigma:(float)arg2 imageFiltered:(float *)arg3;
- (int)gradientEstimation:(float *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 gradient:(struct DSPSplitComplex)arg4 gradientMag:(float *)arg5;
- (_Bool)isInImage:(int)arg1 width:(int)arg2 height:(int)arg3;
- (id)initWithImage:(float *)arg1 edgeMap:(float *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 widthExtension:(int)arg5 heightExtension:(int)arg6;
- (int)detectWithSigma:(float)arg1 lowThreshold:(float)arg2 highThreshold:(float)arg3;

@end

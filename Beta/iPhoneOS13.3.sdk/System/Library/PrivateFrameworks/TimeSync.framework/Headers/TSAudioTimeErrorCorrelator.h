/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@interface TSAudioTimeErrorCorrelator : NSObject

{
    long long _maxCorrelationLength;
    long long _upscaleFactor;
    double _samplingRate;
    CDUnknownBlockType _correlationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType correlationBlock;

- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;
- (void)_calculateUpsamplerCoefficients:(float **)arg1 length:(long long *)arg2;

@end

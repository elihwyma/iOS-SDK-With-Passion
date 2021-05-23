/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorPostUpsampler : TSAudioTimeErrorCorrelator

{
    float *_channelABuffer;
    float *_scratch1Buffer;
    float *_scratch2Buffer;
    float *_correlationBuffer;
    float *_upsamplerFilterCoefficientsBuffer;
    long long _upsamplerFilterCoefficientsLength;
}

- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;
- (void)_makeBlock;

@end

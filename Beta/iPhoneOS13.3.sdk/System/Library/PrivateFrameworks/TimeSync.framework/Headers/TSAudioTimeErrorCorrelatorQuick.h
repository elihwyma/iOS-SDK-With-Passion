/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <TimeSync/TSAudioTimeErrorCorrelator.h>

@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator

{
    float *_channelABuffer;
    float *_scratchBuffer;
    float *_correlationBuffer;
    float *_interpollationIndiciesBuffer;
}

- (void)dealloc;
- (id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3;
- (void)_makeBlock;

@end
